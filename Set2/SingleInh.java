class Box {
    double height, width, depth;

    Box() {
        height = width = depth = -1;
    }

    Box(double height, double width, double depth) {
        this.height = height;
        this.width = width;
        this.depth = depth;
    }

    Box(double length) {
        height = width = depth = length;
    }

    Box(Box obj) {
        this.height = obj.height;
        this.width = obj.width;
        this.depth = obj.depth;
    }

    double volume() {
        return height * width * depth;
    }
}

class BoxWeight extends Box {
    double weight;

    BoxWeight(double w, double h, double d, double m) {
        super(w, h, d);
        weight = m;
    }
}

class SingleInh {
    public static void main(String args[]) {
        BoxWeight mybox1 = new BoxWeight(10, 20, 15, 34.3);
        BoxWeight mybox2 = new BoxWeight(2, 3, 4, 0.076);
        double vol;
        vol = mybox1.volume();
        System.out.println("volume of mybox1 is " + vol);
        System.out.println("Weight of mybox1 is " + mybox1.weight);
        vol = mybox2.volume();
        System.out.println("volume of mybox2 is " + vol);
        System.out.println("Weight of mybox2 is " + mybox2.weight);
        System.out.println("1604-20-737-103");
    }
}
