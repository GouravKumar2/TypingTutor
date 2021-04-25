#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
  string word[500];

  word[1]="computer";
  word[2]="competition";
  word[3]="decide";
  word[4]="aggressive";
  word[5]="flippant";
  word[6]="imported";
  word[7]="obsolete";
  word[8]="finger";
  word[9]="hateful";
  word[10]="evanescent";
  word[11]="colorful";
  word[12]="deserve";
  word[13]="cautious";
  word[14]="monkey";
  word[15]="efficacious";
  word[16]="volleyball";
  word[17]="identify";
  word[18]="birthday";
  word[19]="look";
  word[20]="exotic";
  word[21]="roomy";
  word[22]="steel";
  word[23]="amusing";
  word[24]="adventurous";
  word[25]="black";
  word[26]="gruesome";
  word[27]="elated";
  word[28]="premium";
  word[29]="closed";
  word[30]="screeching";
  word[31]="welcome";
  word[32]="license";
  word[33]="fluffy";
  word[34]="debonair";
  word[35]="debonair";
  word[36]="blow";
  word[37]="encouraging";
  word[38]="jumbled";
  word[39]="sneaky";
  word[40]="automatic";
  word[41]="behavior";
  word[42]="waiting";
  word[43]="ceaseless";
  word[44]="delicate";
  word[45]="want";
  word[46]="soothe";
  word[47]="curious";
  word[48]="innocent";
  word[49]="glove";
  word[50]="notebook";
  word[51]="straw";
  word[52]="handsome";
  word[53]="previous";
  word[54]="serious";
  word[55]="scene";
  word[56]="memory";
  word[57]="afraid";
  word[58]="astonishing";
  word[59]="befitting";
  word[60]="protect";
  word[61]="sloppy";
  word[62]="seemly";
  word[63]="abashed";
  word[64]="lopsided";
  word[65]="vegetable";
  word[66]="young";
  word[67]="canvas";
  word[68]="picture";
  word[69]="machine";
  word[70]="cruel";
  word[71]="tumble";
  word[72]="wait";
  word[73]="effect";
  word[74]="rifle";
  word[75]="harmony";
  word[76]="good";
  word[77]="careless";
  word[78]="coat";
  word[79]="daffy";
  word[80]="agree";
  word[81]="disagreeable";
  word[82]="defective";
  word[83]="squash";
  word[84]="door";
  word[85]="useless";
  word[86]="instruct";
  word[87]="payment";
  word[88]="charming";
  word[89]="expensive";
  word[90]="smooth";
  word[91]="succeed";
  word[92]="hobbies";
  word[93]="awake";
  word[94]="unbecoming";
  word[95]="mine";
  word[96]="mushy";
  word[97]="prepare";
  word[98]="fragile";
  word[99]="recondite";
  word[100]="keen";
  word[101]="satisfy";
  word[102]="ahead";
  word[103]="happen";
  word[104]="crack";
  word[105]="organic";
  word[106]="punish";
  word[107]="needle";
  word[108]="early";
  word[109]="stage";
  word[110]="eggnog";
  word[111]="riddle";
  word[112]="flavor";
  word[113]="hissing";
  word[114]="fairies";
  word[115]="endurable";
  word[116]="analyze";
  word[117]="giant";
  word[118]="thin";
  word[119]="hateful";
  word[120]="rare";
  word[121]="evanescent";
  word[122]="painstaking";
  word[123]="stranger";
  word[124]="elite";
  word[125]="huge";
  word[126]="wary";
  word[127]="finger";
  word[128]="filthy";
  word[129]="cannon";
  word[130]="hand";
  word[131]="caring";
  word[132]="entertaining";
  word[133]="meddle";
  word[134]="deceive";
  word[135]="versed";
  word[136]="airport";
  word[137]="drum";
  word[138]="weight";
  word[139]="truthful";
  word[140]="enchanted";
  word[141]="unruly";
  word[142]="dance";
  word[143]="substance";
  word[144]="simplistic";
  word[145]="guttural";
  word[146]="attractive";
  word[147]="moon";
  word[148]="spiritual";
  word[149]="spoil";
  word[150]="earthquake";
  word[151]="shave";
  word[152]="closed";
  word[153]="cow";
  word[154]="bridge";
  word[155]="force";
  word[156]="laughable";
  word[157]="tested";
  word[158]="market";
  word[159]="smash";
  word[160]="fish";
  word[161]="lacking";
  word[162]="pause";
  word[163]="cattle";
  word[164]="brief";
  word[165]="concentrate";
  word[166]="uttermost";
  word[167]="draconian";
  word[168]="fancy";
  word[169]="perfect";
  word[170]="abrasive";
  word[171]="subtract";
  word[172]="chase";
  word[173]="obnoxious";
  word[174]="romantic";
  word[175]="flawless";
  word[176]="calculating";
  word[177]="boundless";
  word[178]="chunky";
  word[179]="jelly";
  word[180]="flippant";
  word[181]="homeless";
  word[182]="able";
  word[183]="cream";
  word[184]="search";
  word[185]="frightening";
  word[186]="forgetful";
  word[187]="workable";
  word[188]="receptive";
  word[189]="unite";
  word[190]="agreeable";
  word[191]="slimy";
  word[192]="polite";
  word[193]="educate";
  word[194]="badge";
  word[195]="exclusive";
  word[196]="exercise";
  word[197]="woman";
  word[198]="drink";
  word[199]="pollution";
  word[200]="previous";


  int limit_error;
  string again;
do 
{

    do
    {
   
  


    string user;
    int score=0;
    clock_t t;
    float x;
    string again;
  
  

    int no_of_words;


    cout<<"How many words you wanna try?"<<endl;
    cin>>no_of_words;

    if(no_of_words<=50)
    {
       cout<<"Rewrite the displayed words (Press enter to start)"<<endl;
       getch();
       t = clock();
       for (int i=1;i<=no_of_words; i++)
       {
          srand (time(NULL));
          int N= (rand()%200)+1;
          cout<<word[N]<<"  ";
          cin>>user;
  
          if(word[N]==user)
          {
              score= score+1;
          } 
       }
       t = clock() -t;
    
       cout<<"Your score is "<<score<<"/"<<no_of_words<<endl;
       int Time=(float)t/CLOCKS_PER_SEC;
       cout<<"Total time taken = "<<Time<<"seconds"<<endl;
       limit_error=0;
    }

    else
    {
       cout<<"Really sorry! But the word limit is 50"<<endl;
       limit_error=1;
    }
     getch();
    }while(limit_error!=0); 

    cout<<"Would you like to play again?"<<endl;
    cout<<"yes - y"<<endl;
    cout<<"no - n"<<endl;
    cin>>again;

}while(again=="y");

cout<<"Press any key to close window";





getch();


  
}