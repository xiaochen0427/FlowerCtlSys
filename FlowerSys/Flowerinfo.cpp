#include<stdio.h>
#include<math.h>
#include<stdint.h>
#include"Flowerinfo.h"
#include"Tools.h"

uint32_t Keyboard = 0;

void FlowerName(TST_FLOWER_INFO *pstINFO)
{
    printf("请输入植物名称：");
    scanf("%s",pstINFO->FlowerName);
}

void FlowerTimeInfo(TST_FLOWER_INFO *pstINFO)
{
    printf("请输入植物数量：");
    pstINFO->FLoeerNumber= Iinput(1);
    printf("请输入植物入库时间(例如： 20250301):");
    pstINFO->FlowerEntryTime = Iinput(20250101);
}

void FlowerPrice(TST_FLOWER_INFO *pstINFO)
{
    printf("请输入植物价格：");
    pstINFO->FlowerPrice= Iinput(10);
}


      