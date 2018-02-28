import java.io.*;
import java.util.Scanner;

class node
{
	int data;
	node link;
}

class op
{
	node start=null;
	
	void insert_beg(int t)
	{
		node n1=new node();
		n1.data=t;
		n1.link=null;
		start=n1;
	}
	
	void insert_end(int t)
	{
		node n2=new node();
		n2.data=t;
		n2.link=null;
		node ptr=start;
		while(ptr.link!=null)
		{
			ptr=ptr.link;
			
		}
		ptr.link=n2;
	}
	
	void delete_end()
	{
		node ptr=start;
		while(ptr.link.link!=null)
			ptr=ptr.link;
		ptr.link=null;
	}
	
	void delete_pos()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println(" enter the position to be deleted");
		int p=sc.nextInt();
		node ptr=start;
		for(int i=0;i<p-1;i++)
			ptr=ptr.link;
		ptr.link=ptr.link.link;
	}
	
	void display()
	{
		node ptr=start;
		while(ptr!=null)
		{
			System.out.print("  "+ptr.data);
		ptr=ptr.link;
		}
		
	}
	
}

class ll
{
	public static void main(String arsg[])
	{
		op obj=new op();
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the element to be added");
		int t=sc.nextInt();
		obj.insert_beg(t);
		obj.insert_end(2);
		obj.insert_end(3);
		obj.insert_end(4);
		obj.display();
		obj.delete_end();
		
		obj.display();
	}
}
		
	