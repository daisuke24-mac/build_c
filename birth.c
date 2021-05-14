//今後追加予定の内容
//・無限ループ
//・占いの実装
#include <stdio.h>
int main(void){
    int mon,day,sum;
    
        printf("誕生月と日にちを入力してください。\n");
        printf("あなたの誕生月は？");
        scanf("%d",&mon);
        printf("あなたの誕生日は？");
        scanf("%d",&day);
    
        printf("なるほど、あなたの誕生日は%d月%d日ですね。\n",mon,day);
    
        sum=mon*100+day;
        printf("あなたの星座は");
        if(sum>119&&sum<1222){
            if(sum>120&&sum<218)
                 printf("みずがめ座");
            if(sum>219&&sum<320)
                printf("うお座");
            if(sum>321&&sum<419)
                printf("おひつじ座");
            if(sum>420&&sum<520)
                printf("おうし座");
            if(sum>521&&sum<621)
                 printf("ふたご座");
            if(sum>622&&sum<722)
                printf("かに座");
            if(sum>723&&sum<822)
                printf("しし座");
            if(sum>823&&sum<922)
                 printf("おとめ座");
            if(sum>923&&sum<1023)
                printf("てんびん座");
            if(sum>1024&&sum<1122)
                printf("さそり座");
            if(sum>1123&&sum<1221)
                printf("いて座");
        }
        else    printf("やぎ座");
        printf("ですね。\n");
    return 0;
}