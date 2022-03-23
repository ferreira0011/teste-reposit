package application;

import java.util.Locale;
import java.util.Scanner;

import entities.product;

public class program {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		product product = new product();
		
		System.out.println("Enter produtc data: ");
		System.out.print("Name: ");
		product.name = sc.nextLine();
		System.out.print("Price: ");
		product.price = sc.nextDouble();
		System.out.print("Quantity in stock: ");
		product.quantity = sc.nextInt();
		
		System.out.println(product);
		
		sc.close();

	}

}