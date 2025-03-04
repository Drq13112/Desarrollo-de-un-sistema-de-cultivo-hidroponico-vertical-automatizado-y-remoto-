#include <pgmspace.h>
#define Certs2_h
#define THINGNAME "ESP32_2"                         
 
const char AWS_IOT_ENDPOINT[] = "a3b9c3fdsvb9fo-ats.iot.eu-central-1.amazonaws.com";       
 
// Amazon Root CA 1
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy
rqXRfboQnoZsG4q5WTP468SQvvG5
-----END CERTIFICATE-----
)EOF";
 
// Device Certificate                                               
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----
MIIDWTCCAkGgAwIBAgIUHuFBiYJnUo/KX/N+cA2sMjU/+cYwDQYJKoZIhvcNAQEL
BQAwTTFLMEkGA1UECwxCQW1hem9uIFdlYiBTZXJ2aWNlcyBPPUFtYXpvbi5jb20g
SW5jLiBMPVNlYXR0bGUgU1Q9V2FzaGluZ3RvbiBDPVVTMB4XDTIzMDQyMDIzMTcz
OFoXDTQ5MTIzMTIzNTk1OVowHjEcMBoGA1UEAwwTQVdTIElvVCBDZXJ0aWZpY2F0
ZTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALUovqC5DVSdAPIvK7qj
cKBQ50u6ohdFvwuVW5KaeCQk3EUsiEl7tZ623PmjN1CYijwFscAtIu2CSfb/scjM
tOC6iEtOY1dE3BWsjIeQpUTz1JNx4cVmtMcrREVz6HhQJdjaVfeTNIVuXVtRd0c+
BUSgIFum7uIsWcRLz53jjE5HBgHJyxan+9tSKBcYfIxODKNHLvxLHWRmY2QUSJX2
KR4WBLGWiGTuWcKOy1sVTsSkZZckgkASDat8CRlPvprtkwZI0wGKkwngZ8VOsA02
xKMlZ2yanktXzGQJ/8vYWkwU9/GoLYjg9+IcGzmadiX6PSA/uNgqQdOy65u/3RJX
if8CAwEAAaNgMF4wHwYDVR0jBBgwFoAUy4hIiHMGs4Bfimo0PiukPJppLkwwHQYD
VR0OBBYEFHiTkN9dYu+nIdJCwIYLaXKseKeoMAwGA1UdEwEB/wQCMAAwDgYDVR0P
AQH/BAQDAgeAMA0GCSqGSIb3DQEBCwUAA4IBAQBciYWxjO+b8Bq0KVdcEBmDGiYW
0uv78dzW5i6tvEj6Xa7UQCpJgtg79jCOOwfs7IQTNzLWUoGm9MamI4QI0UxNA+50
EmIGC0J+BRUl7vWaLk4GKEl8tO5Tm5kBQUPDdH5m1YHkM17+bRCLu6mkUE7mSUq6
fgjZ7DNF6HXyGpOdr04H3m+OSSPyYvk9gyOxzAIG0GGqIvBZkid3eO8jN+H3wTIk
FKwcejg5uI3Rl+wzYh0Mwasdn2wpW82zmzctOW6pByYqVRkTsOzutDFg5syQ5inO
4TZW4n5YkGzOM6DEAjXj7IBX7pz5v2rUUGYX4e6S5da+PB5xwomKXi3m7aCS
-----END CERTIFICATE-----
)KEY";
 
// Device Private Key                                               
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY( 
-----BEGIN RSA PRIVATE KEY-----
MIIEoQIBAAKCAQEAtSi+oLkNVJ0A8i8ruqNwoFDnS7qiF0W/C5Vbkpp4JCTcRSyI
SXu1nrbc+aM3UJiKPAWxwC0i7YJJ9v+xyMy04LqIS05jV0TcFayMh5ClRPPUk3Hh
xWa0xytERXPoeFAl2NpV95M0hW5dW1F3Rz4FRKAgW6bu4ixZxEvPneOMTkcGAcnL
Fqf721IoFxh8jE4Mo0cu/EsdZGZjZBRIlfYpHhYEsZaIZO5Zwo7LWxVOxKRllySC
QBINq3wJGU++mu2TBkjTAYqTCeBnxU6wDTbEoyVnbJqeS1fMZAn/y9haTBT38agt
iOD34hwbOZp2Jfo9ID+42CpB07Lrm7/dEleJ/wIDAQABAoIBADkn6sUAvZD1nCfM
9CoFiPI7tE3zS1K2YalA7Uxayg71Rj3Y6ALvMgUqQpvMgBZAmlSHo2Yzl3KCCd4R
HEFzPJoun/PKfpM5GYsJDqly3IHdwDLo2keSuPSh1P9oq27SMq6xbDAZVJfIk1HN
aSmkCrt1HeBs0a+wOH4zQQTalxjWzTrzYVIjMhLEPSt8dtf0St53E7xjGr+3S+F0
BJLv+He/tFN76byOo/kHtPOSQWARZ7p77WtNuGiu53jgEmnWRPL8DXmPv4ZVtB2x
tcWtuU5SYZEW+ocvu8atHubtg1Tj7LHcBM7z1G7fmExlMoqFIRELehFJUJo3R656
HbhHB0ECgYEA7AyhEDoMGVKv0kJHq6wITFifBdZubNfAdWwwloKmkx+qWJmU9uSt
iWaqRL87r2yaOegqYhfG/AEX+80VybOXw8KMR78wF2kGd1Bw1gMACPlp1+0MF1FC
67l5P3syJ7MIxx6+m5/WjNnVUha4Ydm0qpLGssd35HHghq+EuZ/Z2N8CgYEAxHh2
o719Q6mTasVU6oYsx/Iu/6qGhFCM+YKrE8+UoRQF7M5yvU+qdCASdY6M6Td+OCoy
My8Z28Q51MTu+Wx+6rjozM75F/kvrxFpton9scUl2hy2lY8+VE+tsM0Y0R4zewAk
tI1tLQH2Pup7YWW39vwAtGQtLB/SGS3tNeon0uECgYAV8DqL8okrVVcH+KcGmo+O
4PGurjZHIWo+v5Zodq4aoGfJokSJCcnjKkqK5ycZ78MJvL0rrsAMreFXwsDSpUFm
rU8yX9+NXXJ/ZleGXHMFYoDm0547EI9irzNIph+MNwSK1R2sAxgCsUA1R+1NEtnK
vKeA+C75aWgPvIJeai/qCwJ/eUHf9y78IMaINV2VCynEeaL/XsvgOcl9OIFtFM0I
7mFtRrokFrMUgJdKzUMttMKLJB7m3LA1RW3WQ3tIAqjzq+pzw/P5yNICnAojNIX2
DcGfmv4dsjC2R1Ll4Di1GFuLal6sSMMAnsaXND2D6Jje8ZCW3r71IkaBZQjzXlMm
QQKBgQCnFIXaFpRvsD2th54j70B4BkZruDId1UP1H4Bxamn+m1z3S8yQ2iJ+GfsS
rKupSMPcH8yMc3uQHG7bT9sAFDCGx1kiBdF+8HLEpii5sxTv5uJOVV64tlaA946X
9k9Avn/Sk+DDMFjrWRLkhCScmK87wd/joLedLrJfrXNKpr9R0g==
-----END RSA PRIVATE KEY-----
)KEY";
