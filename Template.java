import java.io.PrintStream;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Scanner;


public class Template {

	public static void main(String[] args)throws  FileNotFoundException, IOException {

		String path = "C:\\Users\\KIIT\\";
		Scanner input = new Scanner(new File(path + "input.txt"));
		PrintStream stream = new PrintStream(new File(path + "output.txt"));
		System.setOut(stream);

		//----------------------------- Your Code Below ------------------------------------------------







	}
}
