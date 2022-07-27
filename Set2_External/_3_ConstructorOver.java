class Box {
    private double height, width, depth;

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

class _3_ConstructorOver {
    public static void main(String[] args) {
        Box b1 = new Box();
        System.out.println("FirstBox volume is " + b1.volume());
        Box b2 = new Box(10, 20, 30);
        System.out.println("SecondBox volume is " + b2.volume());
        Box b3 = new Box(40);
        System.out.println("ThirdBox volume is " + b3.volume());
        Box b4 = new Box(b3);
        System.out.println("FourthBox volume is " + b4.volume());
    }
}