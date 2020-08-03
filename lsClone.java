import java.io.File;
import java.util.Arrays;

public class LsClone {
    public static void main(String[] args) {
        String path;
        if (args.length == 0)
            path = ".";
        else
            path = args[0];
        File folder = new File(path);
        File[] listOfFiles = folder.listFiles();
        Arrays.sort(listOfFiles);
        for (int i = 0; i < listOfFiles.length; i++)
            if (listOfFiles[i].isDirectory() && listOfFiles[i].isHidden() == false)
                System.out.println("\u001B[34m" + listOfFiles[i].getName());
            else if (listOfFiles[i].isFile() && listOfFiles[i].isHidden() == false)
                System.out.println("\u001B[32m" + listOfFiles[i].getName());
        System.out.print("\u001B[0m");
    }
}
