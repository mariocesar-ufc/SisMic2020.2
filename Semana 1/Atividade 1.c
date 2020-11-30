#include <stdio.h>

unsigned char setBit(unsigned char inByte, unsigned char bitWise);
unsigned char resetBit(unsigned char inByte, unsigned char bitWise);
unsigned char readBit(unsigned char inByte, unsigned char bitWise);

void main() {

    unsigned char inByte = 0xAB;
    unsigned char setBitExample;
    unsigned char resetBitExample;
    unsigned char readBitExample;

    readBitExample = readBit(inByte, 3); // Hex: 1010 1011 -(read bit: 3)> = 0000 1000 = 08 (leitura do quarto bit)
    printf("O resultado de 1010 1011(AB) -(read bit: 3)> = %x\n", readBitExample);

    setBitExample = setBit(inByte, 2); // Hex: 1010 1011 -(set bit: 2)> = 1010 1111 = AF (set do terceiro bit)
    printf("O resultado de 1010 1011(AB) -(set bit: 2)> = %x\n", setBitExample);

    resetBitExample = resetBit(inByte, 3); // Hex: 1010 1011 -(reset bit: 3)> = 1010 0011 = A3 (reset do quarto bit)
    printf("O resultado de 1010 1011(AB) -(reset bit: 3)> = %x\n", resetBitExample);

}

unsigned char setBit(unsigned char inByte, unsigned char bitWise){
    unsigned char mask = (0x01 << bitWise);
    return inByte | mask;
}

unsigned char resetBit(unsigned char inByte, unsigned char bitWise) {
    unsigned char mask = ~(0x01 << bitWise);
    return inByte & mask;
}

unsigned char readBit(unsigned char inByte, unsigned char bitWise){
    unsigned char mask = (0x01 << bitWise);
    return inByte & mask;
}
