namespace MauiApp1;

public partial class MainPage : ContentPage
{

    public MainPage()
    {
        InitializeComponent();
    }
    private void cryptEvent(object sender, EventArgs e)
    {
        if (!int.TryParse(key.Text, out int inputKey)) return;

        string inputText = value?.Text ?? string.Empty;

        string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string allowedSigns = "!@#$%^&*()_+}{|\":?><,/;'[]\\=-`~ ";
        string result = "";

        inputKey = inputKey % letters.Length;
        if (inputKey < 0)
        {
            inputKey += letters.Length;
        }

        for (int i = 0; i < inputText.Length; i++)
        {
            char literka = inputText[i];
            
            if (allowedSigns.IndexOf(literka) != -1)
            {
                result += literka;
                continue;
            }

            int index = letters.IndexOf(literka);
            
            if (index == -1)
            {
                result += literka;
                continue;
            }
            
            int newIndex = (index + inputKey) % letters.Length;

            result += letters[newIndex];
        }

        encryptedValueLabel.Text = result;
    }


}