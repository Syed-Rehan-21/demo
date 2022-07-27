class Table {
    public synchronized void printTable(int n) {
        for (int i = 1; i <= 10; i++) {
            System.out.printf("[ " + n + " X " + i + " = " + (n * i) + "\t]\n");
        }
    }
}

class MyThreadA extends Thread {
    Table T;

    MyThreadA(Table t) {
        this.T = t;
    }

    public void run() {
        T.printTable(10);
    }
}

class MyThreadB extends Thread {
    Table T;

    MyThreadB(Table t) {
        this.T = t;
    }

    public void run() {
        T.printTable(5);
    }
}

public class _8_WSynchr {
    public static void main(String[] args) {
        Table h = new Table();
        MyThreadA s = new MyThreadA(h);
        MyThreadB d = new MyThreadB(h);
        s.start();
        d.start();
    }
}
