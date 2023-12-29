import requests
from bs4 import BeautifulSoup

def article_spider(max-pages): #function to crawl webpages
	page = 1
	while <= max_pages:
		url = '' + str(page)  # add the website address here
		sourcecode = requests.get(url)
		plain_text = source_code.text
		for link in soup.findAll('a',{'class' : ''}) #add the class of the header name
			href = "" + link.get('href')
			title = link.string #
			#print (title) # name of the object 
			#print (href)  # link of the object
			get_single_item_data(href)
		page += 1

def get_single_item_data(item_url):  #function to crawl the links on the webpage
	source_code = requests.get(item_url)
	plain_text = source_code.text
	soup = BeautifulSoup(plain_text)
	for item_name in soup.findAll('div',{'class': 'i-name'}):
		print(item_name.string)
	for link in soup.findAll('a'):   #find all the links on a page
		href = "" + link.get('href')
		print(href)
		
article_spider(1) 
#this will generate the link of every single item on the first page


