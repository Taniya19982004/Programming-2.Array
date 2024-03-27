public class Reverse_A_String_With_The_Help_Of_Only_One_Pointer {
    public static void reverse(char[] s, int i) {
        if (i >= s.length / 2) {
            return;
        }
        char temp = s[i];
        s[i] = s[s.length - i - 1];
        s[s.length - i - 1] = temp;
        reverse(s, i + 1);
    }

    public static void main(String args[]) {
        String name = "Taniya";
        char[] charArray = name.toCharArray();
        reverse(charArray, 0);
        String reversedName = new String(charArray);
        System.out.println(reversedName);
    }
}
