namespace MauiApp1;

public partial class MainPage : ContentPage
{

    public MainPage()
    {
        InitializeComponent();
    }

    private void cryptEvent(object sender, EventArgs e)
    {
        int inputKey = int.Parse(key.Text);
        string inputText = value.Text;

        string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string result = "";

        bool flag = false;

        for(int i = 0; i < inputText.Length; i++)
        {
            char literka = inputText[i];
            int index = letters.IndexOf(literka);


            int newIndex = (index + inputKey) % letters.Length;

            if (newIndex < 0)
            {
                newIndex += letters.Length;
                flag = true;
            }

            result += letters[newIndex];
        }

        if (flag)
        {
            result.Reverse();
        }

        encryptedValueLabel.Text = result;
    }
}