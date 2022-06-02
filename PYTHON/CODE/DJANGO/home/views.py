from django.http import HttpRequest
from django.shortcuts import render,HttpResponse

# Create your views here.
def index(request):
    context={
        'variable':"this is text"
    }
    return render(request,'index.html',context)


def contact(request):
    context={
        'variable':"this is text"
    }
    return render(request,'contact.html',context)