class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0)
        return false;

    unsigned p = 0;
    unsigned length = 1;
    for (;;) {
      p *= 10;
      p += x % 10;
      length *= 10;
      if (x < length)
        break;

      x /= 10;
      if (x < length)
        break;
    }

    return x == p;
}
};
     