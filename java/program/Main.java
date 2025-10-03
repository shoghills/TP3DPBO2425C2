import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Reptile> reptiles = new ArrayList<>();

        // Data default
        reptiles.add(new Snake("Cobra", 2.5, "Jungle", "Rodents", "Neurotoxic"));
        reptiles.add(new Turtle("Sea Turtle", 1.0, "Ocean", "Seagrass", "Hard Shell"));
        reptiles.add(new Crocodile("Nile Crocodile", 5.0, "River", "Fish", 16000));

        int choice;
        do {
            System.out.println("\n=== MENU ===");
            System.out.println("1. Tampilkan semua reptil");
            System.out.println("2. Tambah reptil baru");
            System.out.println("0. Keluar");
            System.out.print("Pilih: ");
            choice = sc.nextInt();
            sc.nextLine(); // clear buffer

            if (choice == 1) {
                System.out.println("\n=== List of Reptiles ===");
                for (Reptile r : reptiles) {
                    r.display();
                }
            } else if (choice == 2) {
                System.out.println("Pilih jenis reptil:");
                System.out.println("1. Snake\n2. Lizard\n3. Turtle\n4. Crocodile\n5. Dragon");
                int jenis = sc.nextInt(); sc.nextLine();

                System.out.print("Nama: "); String name = sc.nextLine();
                System.out.print("Panjang (m): "); double length = sc.nextDouble(); sc.nextLine();
                System.out.print("Habitat: "); String habitat = sc.nextLine();
                System.out.print("Diet: "); String diet = sc.nextLine();

                switch (jenis) {
                    case 1:
                        System.out.print("Jenis racun: ");
                        String venom = sc.nextLine();
                        reptiles.add(new Snake(name, length, habitat, diet, venom));
                        break;
                    case 2:
                        System.out.print("Bisa tumbuh ekor lagi? (true/false): ");
                        boolean tail = sc.nextBoolean(); sc.nextLine();
                        reptiles.add(new Lizard(name, length, habitat, diet, tail));
                        break;
                    case 3:
                        System.out.print("Jenis cangkang: ");
                        String shell = sc.nextLine();
                        reptiles.add(new Turtle(name, length, habitat, diet, shell));
                        break;
                    case 4:
                        System.out.print("Kekuatan gigitan (N): ");
                        int bf = sc.nextInt(); sc.nextLine();
                        reptiles.add(new Crocodile(name, length, habitat, diet, bf));
                        break;
                    case 5:
                        System.out.print("Bisa terbang? (true/false): ");
                        boolean fly = sc.nextBoolean(); sc.nextLine();
                        reptiles.add(new Dragon(name, length, habitat, diet, fly));
                        break;
                    default:
                        System.out.println("Pilihan tidak valid.");
                }
            }
        } while (choice != 0);

        sc.close();
        System.out.println("Program selesai.");
    }
}
