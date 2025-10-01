namespace MauiApp1;

public partial class MainPage : ContentPage
{
    private readonly string[] quotes = { "Dzień dobry", "Good morning", "Buenos dias", "Dostalem 5" };
    private int currentQuoteIndex = 0;

    public MainPage()
    {
        InitializeComponent();
        UpdateFontSize((int)FontSizeSlider.Value);
    }

    private void FontSizeSlider_ValueChanged(object sender, ValueChangedEventArgs e)
    {
        int fontSize = (int)e.NewValue;
        UpdateFontSize(fontSize);
    }

    private void UpdateFontSize(int fontSize)
    {
        if (fontSize == 0) fontSize = 1;
        FontSizeLabel.Text = $"Rozmiar: {fontSize}";
        QuoteLabel.FontSize = fontSize;
    }
    

    private void OnNextQuoteClicked(object sender, EventArgs e)
    {
        ArgumentNullException.ThrowIfNull(e);
        currentQuoteIndex = (currentQuoteIndex + 1) % quotes.Length;
        QuoteLabel.Text = quotes[currentQuoteIndex];
        
        
        
        
    }
}