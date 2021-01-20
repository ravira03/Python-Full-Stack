from django.shortcuts import render
from django.shortcuts import HttpResponse

# Create your views here.
import math
def fun(request):
    return render(request,'index.html')
def palindrome(request):
    st = request.POST["fname"]
    ans = math.ceil(math.log2(int(st)))
    ans = str(ans)
    
    res = "<h1>" +ans+" rats are requierd""</h1>"
    return HttpResponse(res)