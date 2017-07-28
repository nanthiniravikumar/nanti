import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class CheckingWords {
public static void main(String[] args) throws FileNotFoundException
{

    Scanner input = new Scanner(System.in);
    System.out.println("Enter the word you would like to spell check"); 
    String userWord = input.nextLine();

    final String filename = "americanWords.txt";

    String[] words = dictionary(filename);
    boolean correctSpelling = checkWord(words, userWord);

if (correctSpelling)
    {
    System.out.println("That word is not correct");
    }
else 
    {
    System.out.println("That is the correct spelling");
    }

}

public static String[] dictionary(String filename) throws FileNotFoundException
{
    final String fileName = "americanWords.txt";

    Scanner dictionary = new Scanner(new File(fileName));
    int dictionaryLength =0;
    while (dictionary.hasNext())
    {
        ++dictionaryLength;
        dictionary.nextLine();
    }


    String [] words = new String[dictionaryLength];
        for ( int i = 0; i < words.length ; i++)


        dictionary.close();
    return words;
}

public static boolean checkWord(String[] dictionary, String userWord)
{
boolean correctSpelling = false;

    for ( int i =0; i < dictionary.length; i++)
    {
        if (userWord.equals(dictionary[i]))
        {
            correctSpelling = true;
        }
        else 
            correctSpelling = false;
    }
    return correctSpelling;
}

}
