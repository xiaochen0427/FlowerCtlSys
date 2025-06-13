#include<stdio.h>
#include<stdint.h>

typedef struct 
{
    char FlowerName[128] ;
    uint32_t FlowerEntryTime;
    uint16_t FlowerPrice;
    uint16_t FLoeerNumber;
}TST_FLOWER_INFO;

typedef struct 
{
    /* data */
}DATA;


void FlowerName(TST_FLOWER_INFO *pstFlowerINFO);
void FlowerTimeInfo(TST_FLOWER_INFO *pstFlowerINFO);
void FlowerPrice(TST_FLOWER_INFO *pstFlowerINFO);
