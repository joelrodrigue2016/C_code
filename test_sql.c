#include<libpq-fe.h>

#include<cdpgconnection.h>
#include<cdpgddl.h>


void CDPGcreatedb()
{
    char* sql = "CREATE DATABASE codedrome";

    PGconn* connpg = CDPGget_connection("user=postgres password=3715 dbname=postgres");

    PGresult* res;

    if(connpg != NULL)
    {
        res = PQexec(connpg, sql);

        if (PQresultStatus(res) != PGRES_COMMAND_OK)
        {
            fprintf(stderr, "%s\n", PQerrorMessage(connpg));
        }
        else
        {
            CDPGcreateDBobjects();
        }

        PQclear(res);

        CDPGclose_connection(connpg);
    }
}
