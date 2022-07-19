void prime(void){
    int type;
    printf("prime: type of calculation >> ");
    scanf("%d", &type);
    switch (type)
    {
    case 1://print everything till limit
        printf("prime: limit >> ");
        int lim;
        scanf("%d", &lim);
        if(lim < 1000){
            short isp[lim];
            for(int i =0;i<lim;i++)
                isp[i]=1;
            isp[0] = 0;
            isp[1] = 0;
            for(int i =2;i*i<=lim;i++){
                if(isp[i]==1){
                    for(int j=i*i;j<=lim;j+=i){
                        isp[j]=0;
                    }
                }
            }
            for(int i=1;i<=lim;i++){
                if(isp[i])
                    printf("%d ", i);
            }
            printf("\nprime: end\n");
            
        }else{
            printf("limit is 1000.\n");
            prime();
        }
        break;
    
    default:
        break;
    }
}