from django.shortcuts import render, redirect, get_object_or_404
from .models import Movie
from .forms import MovieForm

def index(request):
    return render(request, "index.html")

def add_movie(request):
    if request.method == "POST":
        form = MovieForm(request.POST)
        if form.is_valid():
            form.save()
            return redirect("list_movies")
    else:
        form = MovieForm()
    return render(request, "add_movie.html", {"form": form})

def list_movies(request):
    movies = Movie.objects.all().order_by("title")
    return render(request, "list_movies.html", {"movies": movies})

def delete_movie(request, pk):
    movie = get_object_or_404(Movie, pk=pk)
    movie.delete()                         
    return redirect("list_movies")
