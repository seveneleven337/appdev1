#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <curl/curl.h>

int main(void){
    CURL* curl;
    CURLcode res;
    char postdata[100], name[20], project[40];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your project: ");
    scanf("%s", project);
    sprintf(postdata, "name=%s&project=%s", name, project);

    /* In windows, this will init the winsock stuff */
    curl_global_init(CURL_GLOBAL_ALL);

    /* get a curl handle */
    curl = curl_easy_init();
    if (curl) {

        curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2001875/testPost.php");
        /* Now specify the POST data */
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);

        /* Perform the request, res will get the return code */
        res = curl_easy_perform(curl);
        /* Check for errors */
        if (res != CURLE_OK)
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                curl_easy_strerror(res));

        /* always cleanup */
        curl_easy_cleanup(curl);
    }
    curl_global_cleanup();
    return 0;
}