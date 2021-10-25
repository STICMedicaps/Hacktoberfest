class Stringbuffer
{
    public static void main(String args[])
    {
        String s = "Hello";
	      //first String
	      String n = " World";
	      //second String
        StringBuffer sb = new StringBuffer("Explore The ");
	      //external String other than normal String
        sb.append("World");
	      //going to merge with buffer string
        System.out.println(s);
        System.out.println(sb);
	      System.out.print(s+n);
    }
}
