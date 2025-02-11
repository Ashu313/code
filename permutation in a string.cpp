class Solution {
public:
    bool checkInclusion(string p, string s) {
        
      
        
        
         vector<int>vec;
        unordered_map<char,int>mp;
        for(int i=0;i<p.length();i++)
        {
            mp[p[i]]++;   //count the frequency of each character of string p
        }
        int l=p.length();
        queue<int>qu;
        int i;i=0;
        while(i<s.length())
        {
            //if the frequency of character in p is greater than 0 then we are simply pushing the index in the queue
    // and simultaneously decreasing of frequency of every charcter in p
            if(mp[s[i]]>0)
            {
                qu.push(i);
                mp[s[i]]--;
                i++;
            }
            // if the  character in not present in element p then we simply  pop the front of queue and update the  map value. then go back to check whether should be push it in or not.
               else
                  {
                      if(!qu.empty())
                      {
                          mp[s[qu.front()]]++;
                          qu.pop();
                          
                      }
                      else
                      {
                          i++;
                      }
                  }
// if the size of the queue is equal to the length of the p the we push the front of queue in vector.
                  if(qu.size()==l)
                  {
                     return true;
                  }
                      
                  } 
        return false;
                  }
                  };
				  
			
