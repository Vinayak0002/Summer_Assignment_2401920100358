public class Test {

    // Interface
    interface Playable {
        void play();
    }

    // Veena class
    static class Veena implements Playable {
        @Override
        public void play() {
            System.out.println("The Veena is playing a beautiful melody.");
        }
    }

    // Saxophone class
    static class Saxophone implements Playable {
        @Override
        public void play() {
            System.out.println("The Saxophone is playing a smooth tune.");
        }
    }

    public static void main(String[] args) {

        System.out.println("=== Musical Instrument Demo ===\n");

        Veena veena = new Veena();
        Saxophone saxophone = new Saxophone();

        // Direct method calls
        veena.play();
        saxophone.play();

        System.out.println("\nUsing Playable reference:");

        Playable instrument;

        instrument = veena;
        instrument.play();

        instrument = saxophone;
        instrument.play();
    }
}
