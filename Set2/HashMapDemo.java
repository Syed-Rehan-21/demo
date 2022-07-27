import java.util.*;

class HashMapDemo {
    public static void main(String args[]) {
        System.out.println("1604-20-737-103");
        // Create a hash map.
        HashMap<String, Double> hm = new HashMap<String, Double>();
        // Put elements to the map
        hm.put("John", (3434.34));
        hm.put("Smith", (123.22));
        hm.put("Root", (1378.00));
        hm.put("Bell", (99.22));
        hm.put("Balance", (-19.08));
        // Get a set of the entries.
        Set<Map.Entry<String, Double>> set = hm.entrySet();
        // Display the set.
        for (Map.Entry<String, Double> me : set) {
            System.out.print(me.getKey() + ": ");
            System.out.println(me.getValue());
        }
        System.out.println();
        // Deposit 1000 into John's account.
        System.out.println("Depositing 1000 into John's account.");
        double balance = hm.get("John");
        hm.put("John", balance + 1000);
        System.out.println("John's new balance: " + hm.get("John"));
    }
}
