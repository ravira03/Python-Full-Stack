from django.urls import path
from . import views

urlpatterns = [
    path('palindrome',views.palindrome,name='palindrome'),
    path('',views.fun,name='index'),
]