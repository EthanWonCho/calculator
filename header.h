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
            /*
            public class Prime {

	public static void main(String[] args) {
		int n = 120;
		boolean[] isPrime = new boolean[n+1];
		Arrays.fill(isPrime , true);
        
		// 소수는 true
		// 0, 1은 소수가 아니므로 false
		isPrime [0] = isPrime [1] = false;
        ////////////////////
		for(int i=2; i*i<=n; i++){
			// 만약 i가 소수 혹은 아직 지워지지 않았다면
			if(isPrime[i]){
				// i의 배수 j들에 대해 isPrime[j] = false; 로 둔다.
				// i*i미만의 배수는 이미 지워졌으므로 신경쓰지 않는다.
				for(int j=i*i; j<=n; j+=i) {
					isPrime[j] = false;                
				}
			}        
		}    
		// 1 ~ 120 사이의 소수 출력
		for(int i=1; i<=n ;i++){
			if(isPrime[i]) System.out.print(i+" ");        
		}
	}
}*/
        break;
    
    default:
        break;
    }
}