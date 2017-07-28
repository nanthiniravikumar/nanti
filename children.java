import java.util.*;
public class Candy{
    public static int candy(ArrayList<Integer> ratings) {
        if(ratings == null || ratings.size() == 0)
            return 0;
        
        System.out.println(ratings);
        int[] candies = new int[ratings.size()];        
        candies[0] =  1;
        
        for(int i = 1; i < ratings.size(); i++){
            if(ratings.get(i) > ratings.get(i - 1))
                candies[i] = candies[i-1] + 1;
            else{                
                candies[i] = 1;
            }
        }
        
        int result = candies[ratings.size() - 1];
        System.out.println("Result : " + result);
         for(int i = ratings.size()-2; i >= 0; i--){
             int cur = 1;
             if(ratings.get(i) > ratings.get(i + 1))
                 cur = candies[i+1] + 1;
             result += Math.max(cur, candies[i]);
             candies[i] = cur;
         }
         
         System.out.println("Candies given : ");
        for(int i : candies)
            System.out.print(i + " ");
       System.out.println();
        return result;
    }
    public static void main(String[] args){
        ArrayList<Integer> ratings = new ArrayList<Integer>();
        ratings.add(1);
        ratings.add(2);
        ratings.add(1);
        ratings.add(3);
        System.out.println(candy(ratings));
    }
}
