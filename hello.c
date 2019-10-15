#include<stdio.h>
#include<curl/curl.h>

int main(void)
{
CURL *curl;
CURLcode res;

curl=curl_easy_init();
if(curl){

curl_easy_setopt(curl,CURLOPT_URL,"http://myip.ipip.net/");
res=curl_easy_
if(res!=CURLE_OK)
