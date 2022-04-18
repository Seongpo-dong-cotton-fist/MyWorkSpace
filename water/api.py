import requests
from bs4 import BeautifulSoup
import pandas as pd

API_Key = "	12dRWmXdwftpBHQZoko5ZQ=="
URL = "http://www.khoa.go.kr/api/oceangrid/ripCurrentRecent/search.do?ServiceKey={API}&ResultType=json" .format(
    API=API_Key)

rq = requests.get(URL)

soup = BeautifulSoup(rq.text, "html.parser")

cityList = []
for item in soup.find_all("item"):
    cityCode = item.find("citycode").txt
    cityName = item.find("cityname").txt
    cityList.append([cityCode, cityName])


city_df = pd.DataFrame(cityList, columns=["cityCode", "cityName"])
city_df.head()
