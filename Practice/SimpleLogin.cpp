#include <iostream>
#include <sqlite3.h>

static int callback( int argc, char** argv, char** azColName, std::string UserName, std::string Password)
{
    for (int i = 0; i < argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
        if(azColName[i] == UserName && argv[i] == Password){
            return 1;
        }
    }
    return 0;
}


class addUser
{
    private:
        sqlite3* db;
        const char* dataBaseName = "Login.db";
        std::string sqlCommand;
        std::string tableName="login";
        static std::string UserName;
        static std::string Password;
        void failedDb()
        {
            std::cout<<"Failed to open Db: "<<sqlite3_errmsg(db);
            exit(-1);
        }

        void success(){std::cout<<"Open Successfully\n";}

    public:
        void auth(std::string UserName, std::string Password)
        {
            //Open connection
            std::string data ( "Call back function" );

            sqlite3_open(dataBaseName,&db) == 1 ? failedDb() : success();
            sqlCommand = "SELECT * FROM "+tableName+ " WHERE UserName="+UserName+" AND Password="+Password;
            
        }
};

int main(int argc, char *argv[])
{
    addUser login;
    login.auth("'dracula'","'1234'");
    return 0;
}