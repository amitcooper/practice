# include <cs50.h>
# include <stdio.h>
# include <string.h>

bool checkIfGood(string key);
char correctChar(string key,char ch);
int main(void)
{
    string key= get_string("enter key:\n");
    //check if the key is valid or not
    bool flag;
    flag = checkIfGood(key);
    while(!flag)
    {
        printf("key invalid, enter key:\n");
        key= get_string("enter key:\n");
        flag = checkIfGood(key);
    }
    string plaintext = get_string("enter plaintext: ");
    printf("cipher: ");
    for(int i=0; i< strlen(plaintext);i++)
    {
        printf("%c", correctChar(key,plaintext[i]));
    }

}

char correctChar(string key,char ch)
{
    if(ch >= 'a' && ch <= 'z') // if the letter is lowercase
        {
            return key[ch-97] + 32;
        }
        else if(ch >= 'A' && ch <= 'Z') // if the letter is uppercase
        {
            return key[ch-65];
        }
        else // if its not a letter
        {
            return ch;
        }
}

bool checkIfGood(string key)
{
    int count = 0;
    bool flag = true;
    for(int i=0; i < strlen(key) && flag == true; i++)
    {
        count++;
        if(key[i] < 65 || key[i] > 122 || (key[i] > 90 && key[i] < 97))
        {
            flag = false;
        }
    }
    if(count == 26 && flag == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
