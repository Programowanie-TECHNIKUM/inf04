namespace mobilna;

public partial class MainPage : ContentPage
{
    public MainPage()
    {
        InitializeComponent();
        

    }

    public int wynikGry = 0;
    
    public void resetGry (object sender, EventArgs args)
    {
        wynikGry = 0;
        modifyWynikLabel();
        punktyLabel.Text = "Wynik tego losowania: 0";
        wynikGryLabel.Text = "Wynik: 0";
        image1.Source = "question.jpg";
        image2.Source = "question.jpg";
        image3.Source = "question.jpg";
        image4.Source = "question.jpg";
        image5.Source = "question.jpg";
    }

    public void modifyWynikLabel()
    {
        wynikGryLabel.Text = "Wynik: " + wynikGry.ToString();
    }

    public void liczeniePunktow(int[] rolls)
    {
        int allPunkty = 0;
        for (int i = 1; i <= 6; i++)
        {
            int count = 0;
            for (int j = 0; j < 5; j++)
            {
                if (rolls[j] == i)
                {
                    count++;
                }
            }
            if (count >= 2)
            {
                allPunkty += i * count;
            }
        }
        punktyLabel.Text = "Wynik tego losowania: " + allPunkty.ToString();
        wynikGry += allPunkty;
        modifyWynikLabel();
    }
    
    public void RollButton(object sender, EventArgs args)
    {
        Random rand = new Random();
        int[] rolls = new int[5];
        Image[] images = { image1, image2, image3, image4, image5 };
        for (int i = 0; i < 5; i++) {
            rolls[i] = rand.Next(1, 7);
            images[i].Source = $"k{rolls[i]}.jpg";
        }
        
        liczeniePunktow(rolls);
        
    }
}