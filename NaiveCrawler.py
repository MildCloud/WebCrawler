import urllib.request

# response = urllib.request.urlopen('https://mrdata.usgs.gov/#geologic-data')
# print(response)
# html = response.read().decode('utf-8')
# print(html)

UAResponse = urllib.request.urlopen('https://httpbin.org/get')
UAhtml = UAResponse.read().decode()
print(UAhtml)

from urllib import parse

QueryString = {
    'wd' : '爬虫'
}

result = parse.urlencode(QueryString)
URLResult = 'http://www.baidu.com/s?{}'.format(result)
print(URLResult)

URLString = '%E7%88%AC%E8%99%AB'
DecodingResult = parse.unquote(URLResult)
print(DecodingResult)
