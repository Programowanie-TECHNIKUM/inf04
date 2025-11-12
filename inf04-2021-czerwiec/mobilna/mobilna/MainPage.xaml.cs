namespace mobilna;

public partial class MainPage : ContentPage
{

    public MainPage()
    {
        InitializeComponent();
    }

    private void register(object sender, EventArgs e)
    {
        string email = emailEntry.Text;
        string password = passwordEntry.Text;
        string confirmPassword = repeatPasswordEntry.Text;

        if (!email.Contains("@")) {
            registerLabel.Text = "Nieprawidłowy adres e-mail";
            return;
        }

        if (password != confirmPassword)
        {
            registerLabel.Text = "Hasła się różnią";
            return;
        }

        registerLabel.Text = "Witaj " + email;

    }
}