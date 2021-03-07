#include <stdio.h>
#include <stdlib.h>
#define MODNAME "RandBlockGen"
#define AUTHOR "33kingkiller"
#define ERROR 1
#define NOERROR 0

int main()
{
    printf("Welcome to %s by %s!\n", MODNAME, AUTHOR);
    printf("----------------------------------------\n");
    int blocks;
    printf("How many blocks do you want to generate?\n");
    scanf("%d", &blocks);
    printf("Now generating %d block(s)...\n", blocks);
    int i;
    int max = 97;
    int randomNo;
    srand(time(0));
    for(i=0;i<blocks;i++) {
        randomNo = (rand()%max)+1;
        //I understand that the quickest way to do the below code would be to use a "switch" statement. I, however, thought that "switch" was just a Java thing until I found out it was in C as well.
        if(randomNo == 0) {
            printf("Air\n");
        }
        else if(randomNo == 1) {
            printf("Stone\n");
        }
        else if(randomNo == 2) {
            printf("Granite\n");
        }
        else if(randomNo == 3) {
            printf("Polished Granite\n");
        }
        else if(randomNo == 4) {
            printf("Diorite\n");
        }
        else if(randomNo == 5) {
            printf("Polished Diorite\n");
        }
        else if(randomNo == 6) {
            printf("Andesite\n");
        }
        else if(randomNo == 7) {
            printf("Polished Andesite\n");
        }
        else if(randomNo == 8) {
            printf("Cobblestone\n");
        }
        else if(randomNo == 9) {
            printf("Oak Wood Planks\n");
        }
        else if(randomNo == 10) {
            printf("Spruce Wood Planks\n");
        }
        else if(randomNo == 11) {
            printf("Birch Wood Planks\n");
        }
        else if(randomNo == 12) {
            printf("Jungle Wood Planks\n");
        }
        else if(randomNo == 13) {
            printf("Acacia Wood Planks\n");
        }
        else if(randomNo == 14) {
            printf("Dark Oak Wood Planks\n");
        }
        else if(randomNo == 15) {
            printf("Bedrock\n");
        }
        else if(randomNo == 16) {
            printf("Oak Wood Log\n");
        }
        else if(randomNo == 17) {
            printf("Spruce Wood Log\n");
        }
        else if(randomNo == 18) {
            printf("Birch Wood Log\n");
        }
        else if(randomNo == 19) {
            printf("Jungle Wood Log\n");
        }
        else if(randomNo == 20) {
            printf("Glass\n");
        }
        else if(randomNo == 21) {
            printf("Lapis Lazuli Block\n");
        }
        else if(randomNo == 22) {
            printf("Sandstone\n");
        }
        else if(randomNo == 23) {
            printf("Chiseled Sandstone\n");
        }
        else if(randomNo == 24) {
            printf("Smooth Sandstone\n");
        }
        else if(randomNo == 25) {
            printf("White Wool\n");
        }
        else if(randomNo == 26) {
            printf("Black Wool\n");
        }
        else if(randomNo == 27) {
            printf("Orange Wool\n");
        }
        else if(randomNo == 28) {
            printf("Magenta Wool\n");
        }
        else if(randomNo == 29) {
            printf("Light Blue Wool\n");
        }
        else if(randomNo == 30) {
            printf("Yellow Wool\n");
        }
        else if(randomNo == 31) {
            printf("Lime Wool\n");
        }
        else if(randomNo == 32) {
            printf("Pink Wool\n");
        }
        else if(randomNo == 33) {
            printf("Grey Wool\n");
        }
        else if(randomNo == 34) {
            printf("Light Grey Wool\n");
        }
        else if(randomNo == 35) {
            printf("Cyan Wool\n");
        }
        else if(randomNo == 36) {
            printf("Purple Wool\n");
        }
        else if(randomNo == 37) {
            printf("Blue Wool\n");
        }
        else if(randomNo == 38) {
            printf("Brown Wool\n");
        }
        else if(randomNo == 39) {
            printf("Green Wool\n");
        }
        else if(randomNo == 40) {
            printf("Red Wool\n");
        }
        else if(randomNo == 41) {
            printf("Gold Block\n");
        }
        else if(randomNo == 42) {
            printf("Iron Block\n");
        }
        else if(randomNo == 43) {
            printf("Double Stone Slab\n");
        }
        else if(randomNo == 44) {
            printf("Double Sandstone Slab\n");
        }
        else if(randomNo == 45) {
            printf("Bricks\n");
        }
        else if(randomNo == 46) {
            printf("Moss Stone\n");
        }
        else if(randomNo == 47) {
            printf("Obsidian\n");
        }
        else if(randomNo == 48) {
            printf("Diamond Block\n");
        }
        else if(randomNo == 49) {
            printf("Clay\n");
        }
        else if(randomNo == 50) {
            printf("Netherrack\n");
        }
        else if(randomNo == 51) {
            printf("Soul Sand\n");
        }
        else if(randomNo == 52) {
            printf("Glowstone\n");
        }
        else if(randomNo == 53) {
            printf("Cake\n");
        }
        else if(randomNo == 54) {
            printf("Red Mushroom Cap\n");
        }
        else if(randomNo == 55) {
            printf("Brown Mushroom Cap\n");
        }
        else if(randomNo == 56) {
            printf("Melon Block\n");
        }
        else if(randomNo == 57) {
            printf("Nether Bricks\n");
        }
        else if(randomNo == 58) {
            printf("End Stone\n");
        }
        else if(randomNo == 59) {
            printf("Redstone Lamp\n");
        }
        else if(randomNo == 60) {
            printf("Emerald Block\n");
        }
        else if(randomNo == 61) {
            printf("Quartz Block\n");
        }
        else if(randomNo == 62) {
            printf("Chiseled Quartz Block\n");
        }
        else if(randomNo == 63) {
            printf("Pillar Quartz Block\n");
        }
        else if(randomNo == 64) {
            printf("White Stained Clay\n");
        }
        else if(randomNo == 65) {
            printf("Orange Stained Clay\n");
        }
        else if(randomNo == 66) {
            printf("Magenta Stained Clay\n");
        }
        else if(randomNo == 67) {
            printf("Light Blue Stained Clay\n");
        }
        else if(randomNo == 68) {
            printf("Yellow Stained Clay\n");
        }
        else if(randomNo == 69) {
            printf("Lime Stained Clay\n");
        }
        else if(randomNo == 70) {
            printf("Pink Stained Clay\n");
        }
        else if(randomNo == 71) {
            printf("Grey Stained Clay\n");
        }
        else if(randomNo == 72) {
            printf("Light Grey Stained Clay\n");
        }
        else if(randomNo == 73) {
            printf("Cyan Stained Clay\n");
        }
        else if(randomNo == 74) {
            printf("Purple Stained Clay\n");
        }
        else if(randomNo == 75) {
            printf("Blue Stained Clay\n");
        }
        else if(randomNo == 76) {
            printf("Brown Stained Clay\n");
        }
        else if(randomNo == 77) {
            printf("Green Stained Clay\n");
        }
        else if(randomNo == 78) {
            printf("Red Stained Clay\n");
        }
        else if(randomNo == 79) {
            printf("Black Stained Clay\n");
        }
        else if(randomNo == 80) {
            printf("Acacia Wood Log\n");
        }
        else if(randomNo == 81) {
            printf("Dark Oak Wood Log\n");
        }
        else if(randomNo == 82) {
            printf("Slime Block\n");
        }
        else if(randomNo == 83) {
            printf("Prismarine\n");
        }
        else if(randomNo == 84) {
            printf("Prismarine Bricks\n");
        }
        else if(randomNo == 85) {
            printf("Dark Prismarine\n");
        }
        else if(randomNo == 86) {
            printf("Sea Lantern\n");
        }
        else if(randomNo == 87) {
            printf("Hardened Clay\n");
        }
        else if(randomNo == 88) {
            printf("Block of Coal\n");
        }
        else if(randomNo == 89) {
            printf("Packed Ice\n");
        }
        else if(randomNo == 90) {
            printf("Red Sandstone\n");
        }
        else if(randomNo == 91) {
            printf("Smooth Red Sandstone\n");
        }
        else if(randomNo == 92) {
            printf("Chiseled Red Sandstone\n");
        }
        else if(randomNo == 93) {
            printf("Redstone Block\n");
        }
        else if(randomNo == 94) {
            printf("Stone Bricks\n");
        }
        else if(randomNo == 95) {
            printf("Chiseled Stone Bricks\n");
        }
        else if(randomNo == 96) {
            printf("Mossy Stone Bricks\n");
        }
        else if(randomNo == 97) {
            printf("Cracked Stone Bricks\n");
        }
        else {
            printf("%d\n", randomNo);
            getch();
            return ERROR;
        }
    }
    printf("------------------------------------------------------------\n");
    printf("Thank you for using %s! Press any button to close.\n", MODNAME);
    getch();
    return NOERROR;
}