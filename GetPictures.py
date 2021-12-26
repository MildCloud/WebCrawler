from urllib import request
from urllib import parse
import urllib

Url = 'https://www.baidu.com/s?wd={}'
Word = input('Please input what you want to search')
Params = parse.quote(Word)
FullURL = parse.format(Params)

Header = {'User-Agent':'Mozilla/5.0 (Windows NT 6.1; WOW64; rv:6.0) Gecko/20100101 Firefox/6.0'}
MyRequest = request.Request(url = FullURL, headers = Header)
MyResult = request.urlopen(MyRequest)
MyHTML = MyResult.read().decode('utf-8')

