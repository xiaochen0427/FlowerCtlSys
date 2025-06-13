#include<stdio.h>
#include<iostream>
#include<mysql/mysql.h> 
#include<math.h>
#include<stdint.h>
#include"Flowerinfo.h"
#include"Tools.h"
#include"TestMain.h"

using namespace std;
TST_FLOWER_INFO pstINFO ={0}; 

int main()
{
    MYSQL *Flowerinformation = mysql_init(nullptr);

    int FlowerNum = 0;

    std::cout<<"mysql version:"<<mysql_get_client_info()<<std::endl;
    FlowerTimeInfo(&pstINFO);
    for(FlowerNum = 0 ;FlowerNum < pstINFO.FLoeerNumber; FlowerNum++)
    {
        FlowerName(&pstINFO);
        FlowerPrice(&pstINFO);
    }

    system("pause");
    return 0;
} 