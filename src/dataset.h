#include<stdio.h>
#include <stdlib.h>
#include<string.h>

#ifndef DATASET
#define DATASET


/*
 * Ornek ev veri yapisi
 * Bu veri yapisini kullanabilir
 * ya da kendiniz yeni bir yapi 
 * kodlayabilirsiniz.  
 */

typedef struct house{
  int id;
  int lotarea;
  char* street;
  int saleprice;
  char* neighborhood;
  int yearbuilt;
  int overallqual;
  int overallcond;
  char* kitchenqual;
} House;

typedef struct houseYear {
  int year;
  int price;
  int counter;
  int mean_price;
  struct houseYear *next;
} hYear;


void read_house_data(char* filename, House houses[], int houseCount);
void print_house(House house);
House get_house_byid(int id, House *houses, int houseCount);
House* get_neighborhoods(House *house, int houseCount, int id);
float* mean_sale_prices(House* houses,char* criter_name);
void sort_houses(House* houses,char* criter_name);

#endif
