  int sqdist(int x1,int y1,int x2,int y2){
      return ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  }
  
  bool fourPointSquare(vector<vector<int>> points)
{
       int d2 = sqdist(points[0][0],points[0][1],points[1][0],points[1][1]);
       int d3 = sqdist(points[0][0],points[0][1],points[2][0],points[2][1]);
       int d4 = sqdist(points[0][0],points[0][1],points[3][0],points[3][1]);
       
    if (d2 == 0 || d3 == 0 || d4 == 0)   
        return false;
 
    // If lengths if (p1, p2) and (p1, p3) are same, then
    // following conditions must met to form a square.
    // 1) Square of length of (p1, p4) is same as twice
    // the square of (p1, p2)
    // 2) Square of length of (p2, p3) is same
    // as twice the square of (p2, p4)
 
    if (d2 == d3 && 2 * d2 == d4 && 2 * sqdist(points[1][0],points[1][1],points[3][0],points[3][1]) == sqdist(points[2][0],points[2][1],points[3][0],points[3][1])) {
        return true;
    }
 
    // The below two cases are similar to above case
    if (d3 == d4 && 2 * d3 == d2 && 2 *  sqdist(points[2][0],points[2][1],points[1][0],points[1][1]) ==  sqdist(points[2][0],points[2][1],points[3][0],points[3][1])) {
        return true;
    }
    if (d2 == d4 && 2 * d2 == d3 && 2 * sqdist(points[2][0],points[2][1],points[1][0],points[1][1]) ==  sqdist(points[1][0],points[1][1],points[3][0],points[3][1])) {
        return true;
    }
    return false;

    
}
