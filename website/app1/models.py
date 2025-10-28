from django.db import models

# Create your models here.


class Movie(models.Model):
    title = models.CharField(max_length=120)
    director = models.CharField(max_length=120, blank=True)
    release_year = models.PositiveIntegerField(null=True, blank=True)
    genre = models.CharField(max_length=60, blank=True)

    def __str__(self):
        return self.title
