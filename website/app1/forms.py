from django import forms
from .models import Movie

# Create the form class.
class MovieForm(forms.ModelForm):
    class Meta:
        model = Movie
        fields = ["title", "director", "release_year", "genre"]
