import java.io.*;

class CopyFile {
    public static void main(String args[]) throws IOException {
        System.out.println("1604-20-737-103");
        FileReader fr = new FileReader("NewFile.java");
        FileWriter fw = new FileWriter("CopyFile.java");
        int c;
        while ((c = fr.read()) != -1) {
            fw.write(c);
            System.out.print((char) c);
        }
        fr.close();
        fw.close();
    }
}
