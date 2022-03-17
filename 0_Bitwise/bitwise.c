#include<stdio.h>
#include<stdint.h>
#include<math.h>

int main() {
 
    uint8_t bitInt = 0xF4;
    uint8_t bitDec = 0xA4;
    

    int valueInt = 0;
    float valueDec = 0;
    float valueTotal = 0;

    float mul = 0.0625;

    int bit = 4;

    printf( "Valores decimales de: %x\n", bitDec );
    bitDec = bitDec >> 4;
    while (bit < 8) {
      if (bitDec & 0x01) {
         printf("bit %d is 1\n", bit);
         valueDec = valueDec + mul * 1;
      }
      else {
         printf("bit %d is 0\n", bit);
      }

      mul = mul * 2;
      bit++;
      bitDec = bitDec >> 1;
    }
    printf( "ValueDec = %f\n", valueDec );

    bit = 0;

    printf( "\nValores Enteros de: %x\n", bitInt );
    while( bit < 8 ) {
        if( bitInt & 0x01 ) {
            printf( "bit %d is 1\n", bit );
            int Pow = pow( 2, bit );
            //printf( "%i\n", Pow );
            valueInt = valueInt + Pow;
        }
        else {
            printf( "bit %d is 0\n", bit );
        }

        bit++;
        bitInt = bitInt >> 1;
    }
    valueTotal = valueInt + valueDec;

    printf( "ValueInt = %i\n", valueInt );
    printf( "La temperatura es = %f\n", valueTotal );

    return 0;
}
