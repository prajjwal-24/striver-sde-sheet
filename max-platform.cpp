int calculateMinPatforms(int arr[], int dep[], int n) {
    // Write your code here.
    sort(arr,arr+n);
    	sort(dep,dep+n);
    	int j=0;
    	int plat=1,mxPlat=1;
    	int i=1;
    	// 900 940 950 1100 1500 1800
    	// 910 1120 1130 1200 1900 2000
    	while(i<n && j<n){
    	   // i++,j++;
    	    if(arr[i]<=dep[j]){
    	        plat++;
    	        i++;
    	    }
    	    else{
    	        plat--;
    	        j++;
    	    }
    	    mxPlat=max(plat,mxPlat);
    	    
    	}
    	return mxPlat;
}
