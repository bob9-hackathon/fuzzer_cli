#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "web_fuzzer 파이썬 경로를 입력하세요: ";
	string path; getline(cin, path);

	cout << "SEED 경로를 입력하세요: ";
	string seed; getline(cin, seed);

	string type = "";
	while (type != "SQL" && type != "XSS") {
		cout << "SQL, XSS 중 하나를 입력하세요: ";
		getline(cin, type);
	}

	cout << "퍼징할 URL을 입력하세요: ";
	string url; getline(cin, url);

	cout << "쿠키를 입력하세요: ";
	string cookie; getline(cin, cookie);

	cout << "URL 파라미터(GET) 입력하세요: ";
	string param; getline(cin, param);

	cout << "URL 파라미터(POST) 입력하세요: ";
	string post; getline(cin, post);

	string s = "python.exe " + path + " -urls " + url + " -seed " + seed + (param.size() > 0 ? " -params " + param : "") + (post.size() > 0 ? " -post " + post : "");
	cout << "[EXECUTE] > " << s << "\n";
	system(s.c_str());
}