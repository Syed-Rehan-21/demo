class Box {
    double height, width, depth;

    Box() {
        width = height = depth = -1;
    }

    Box(double w, double h, double d) {
        this.width = w;
        this.height = h;
        this.depth = d;
    }

    Box(double len) {
        width = height = depth = len;
    }

    Box(Box obj) {
        this.height = obj.height;
        this.width = obj.width;
        this.depth = obj.depth;
    }

    double volume() {
        return width * height * depth;
    }
}

class BoxWeight extends Box {
    double weight;

    BoxWeight() {
        super();
        weight = -1;
    }

    BoxWeight(double len, double m) {
        super(len);
        this.weight = m;
    }

    BoxWeight(double w, double h, double d, double m) {
        super(w, h, d);
        this.weight = m;
    }

    BoxWeight(BoxWeight bw) {
        super(bw);
        this.weight = bw.weight;
    }
}

class Shipment extends BoxWeight {
    double cost;

    Shipment() {
        super();
        cost = -1;
    }

    Shipment(double len, double m, double c) {
        super(len, m);
        this.cost = c;
    }

    Shipment(double w, double h, double d, double m, double c) {
        super(w, h, d, m);
        this.cost = c;
    }

    Shipment(Shipment sp) {
        super(sp);
        this.cost = sp.cost;
    }
}

class _4_MultiInh {
    public static void main(String args[]) {
        Shipment shipment1 = new Shipment(10, 20, 15, 10, 3.41);
        Shipment shipment2 = new Shipment(2, 3, 4, 0.76, 1.28);
        System.out.println("Volume of Shipment1 is " + shipment1.volume());
        System.out.println("Weight of Shipment1 is " + shipment1.weight);
        System.out.println("Shipping cost : $" + shipment1.cost);
        System.out.println("Volume of Shipment2 is " + shipment2.volume());
        System.out.println("Weight of Shipment2 is " + shipment2.weight);
        System.out.println("Shipping cost : $" + shipment2.cost);
    }
}