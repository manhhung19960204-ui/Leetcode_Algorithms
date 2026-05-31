class Solution {
public:
    int mySqrt(int x) {
      if (x < 0) return -1; 
      if (x == 0) return 0;

      double duDoan = x / 2.0; 
      double chinhXac = 0.00001; 

    while ((duDoan * duDoan - x) > chinhXac || (x - duDoan * duDoan) > chinhXac) {
         duDoan = (duDoan + x / duDoan) / 2.0;
    }

       return duDoan;
    }
};