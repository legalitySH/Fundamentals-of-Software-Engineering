#include <iostream>
int main()
{
	// Windows 1251

//ShimkoAlex2004 // 5368696d6b6f416c657832303034
//ШимкоАлексейАлександрович2004 // d8e8eceaeec0ebe5eaf1e5e9c0ebe5eaf1e0ede4f0eee2e8f732303034
//Шимко2004Alex // d8e8eceaee32303034416c6578

// UTF-16

//ShimkoAlex2004// 005300680069006d006b006f0041006c006500780032003000300034
//ШимкоАлексейАлександрович2004// 04280438043c043a043e0410043b0435043a0441043504390410043b0435043a04410430043d04340440043e0432043804470032003000300034
//Шимко2004Alex//04280438043c043a043e00320030003000340041006c00650078

//UTF-8

//ShimkoAlex2004// \x53\x68\x69\x6d\x6b\x6f\x41\x6c\x65\x78\x32\x30\x30\x34
//ШимкоАлексейАлександрович2004// \x73\xd0\xa8\xd0\xb8\xd0\xbc\xd0\xba\xd0\xbe\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb5\xd0\xb9\xd0\x90\xd0\xbb\xd0\xb5\xd0\xba\xd1\x81\xd0\xb0\xd0\xbd\xd0\xb4\xd1\x80\xd0\xbe\xd0\xb2\xd0\xb8\xd1\x87\x32\x30\x30\x34
//Шимко2004Alex// \xd0\xa8\xd0\xb8\xd0\xbc\xd0\xba\xd0\xbe\x32\x30\x30\x34\x41\x6c\x65\x78
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "ShimkoAlex2004";
	char rfie[] = "ШимкоАлекей2004";
	char lr[] = "Шимко2004Alex";
	wchar_t Lfie[] = L"ShimkoAlex2004";
	wchar_t Rfie[] = L"ШимкоАлексей2004";
	wchar_t LR[] = L"Шимко2004Alex";

	std::cout << hello << lfie << std::endl;
	return 0;
	}

