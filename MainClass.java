package main;

import java.util.Scanner;

public class MainClass {

    static double balance = 500.0f;
    static char dollarSign = '$';
    static double moneyToDeposit;
    static double moneyToWithdraw;
    static int methodNumber;
    static Scanner scanner = new Scanner(System.in);

    static void showBalance() {
        System.out.println("Your balance is: " + dollarSign + "" +balance);
        printBasicMethods();
    }

    static void depositMoney() {
        System.out.println("How much money do you want to deposit?");
        moneyToDeposit = scanner.nextDouble();
        balance += moneyToDeposit;
        System.out.println("Your new balance is: " + dollarSign + "" +balance);
        printBasicMethods();
    }

    static void withdrawMoney() {
        System.out.println("How much money do you want to withdraw?");
        moneyToWithdraw = scanner.nextDouble();
        if (moneyToWithdraw > balance) {
            System.out.println("You don't enough money to do that!");
            printBasicMethods();
        }
        else {
            balance -= moneyToWithdraw;
            System.out.println("Your new balance is: " + dollarSign + "" +balance);
            printBasicMethods();
        }
    }

    static void exitBank() {
        System.exit(0);
    }

    static void printBasicMethods() {
        System.out.println("**********************");
        System.out.println("1 - Show Balance");
        System.out.println("2 - Deposit Money");
        System.out.println("3 - Withdraw Money");
        System.out.println("4 - Exit");
        System.out.println("********************** \n");
        getMethodNumber();
    }

    static void getMethodNumber() {
        methodNumber = scanner.nextInt();

        switch (methodNumber) {
            case 1:
                showBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                exitBank();
                break;
            default:
                // called if anything else than 1,2,3,4 is written
                System.out.println("That's not a valid number given!");
                break;
        }
    }

    public static void main(String[] args) {
        printBasicMethods();
    }
}
