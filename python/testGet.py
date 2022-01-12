import requests

# response = requests.get("http://www.baidu.com")
# print(response.text)
# print(response.status_code)
response = requests.get('http://m.weibo.com')
print(response)
print(response.text)

