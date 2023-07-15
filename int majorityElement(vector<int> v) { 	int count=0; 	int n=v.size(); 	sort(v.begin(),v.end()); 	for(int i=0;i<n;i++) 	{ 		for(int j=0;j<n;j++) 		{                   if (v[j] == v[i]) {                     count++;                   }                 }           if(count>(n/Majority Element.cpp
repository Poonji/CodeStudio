int majorityElement(vector<int> v) {
	int count=0;
	int n=v.size();
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
                  if (v[j] == v[i]) {
                    count++;
                  }
                }

         if(count>(n/2))
				return v[i];
		}
		return -1;
	}
