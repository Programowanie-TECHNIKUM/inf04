namespace mobilna;

public partial class MainPage : ContentPage
{

    public MainPage()
    {
        InitializeComponent();
    }


    int polubienia = 0;


    public void dodaj(object Sender, EventArgs e)
    {
        polubienia++;
        edit();
    }

    public void usun(object Sender, EventArgs e)
    {
        if (polubienia <= 0) return;

        polubienia--;
        edit();
    }

    public void edit()
    {
        polubienialabel.Text = polubienia.ToString() + " polubień";
    }
}