#include "Global.h"
#include "System.h"
#include <string>
#include <ctime>
#include <cstdio>
#include <fstream>
#include <filesystem>
#include <thread>
#include <functional>
#include <objbase.h>
#include <windows.h>
using namespace std;

string Raw_GetDateTimeStr()
{
    time_t t = time(NULL);
    tm ts;
    localtime_s(&ts,&t);
    char buf[24]= {0};
    strftime(buf, 24, "%Y-%m-%d %H:%M:%S", &ts);
    return string(buf); 
}

string Raw_RandomGuid()
{
    GUID guid;
    CoCreateGuid(&guid);

    char dst[36] = {0};
    snprintf(dst, 36,
        "%08x%04x%04x%02x%02x%02x%02x%02x%02x%02x%02x",
        guid.Data1, guid.Data2, guid.Data3,
        guid.Data4[0], guid.Data4[1], guid.Data4[2],
        guid.Data4[3], guid.Data4[4], guid.Data4[5],
        guid.Data4[6], guid.Data4[7]);
    return string(dst);
}

wstring Raw_RandomGuidW()
{
    GUID guid;
    CoCreateGuid(&guid);

    wchar_t dst[36] = { 0 };
    _snwprintf_s(dst, 36,
        L"%08x%04x%04x%02x%02x%02x%02x%02x%02x%02x%02x",
        guid.Data1, guid.Data2, guid.Data3,
        guid.Data4[0], guid.Data4[1], guid.Data4[2],
        guid.Data4[3], guid.Data4[4], guid.Data4[5],
        guid.Data4[6], guid.Data4[7]);
    return wstring(dst);
}

bool Raw_DirCreate(const string &path)
{
    return filesystem::create_directories(path);
}

bool Raw_PathExists(const string &path)
{
    return filesystem::exists(path);
}

bool Raw_FileReadFrom(const string &path, string & result)
{
    ifstream fRead(path);
    if(!fRead)
        return false;
    string data((std::istreambuf_iterator<char>(fRead)),
        std::istreambuf_iterator<char>());
    fRead.close();
    result = data;
    return true;
}

bool Raw_FileWriteTo(const std::string &path, const std::string &data)
{
    std::ofstream fileWrite(path,std::ios::out);
    if(!fileWrite)
        return false;
    fileWrite << data;
    return fileWrite.good();
}

vector<string> Raw_GetFilesList(const std::string& path)
{
    std::filesystem::directory_entry dir(path);
    if (!dir.is_directory())
        return {};

    vector<string> list;
    std::filesystem::directory_iterator deps(path);
    for (auto& i : deps)
    {
        list.push_back(i.path().filename().u8string());
    }
    return list;
}

/////////////////// String Helper ///////////////////
wchar_t* str2wstr(string str)
{
    auto len = MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, NULL, 0);
    wchar_t* buffer = new wchar_t[len + 1];
    MultiByteToWideChar(CP_UTF8, 0, str.c_str(), -1, buffer, len + 1);
    buffer[len] = L'\0';

    return buffer;
}
string wstr2str(wstring wstr)
{
    auto len = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, NULL, 0, NULL, NULL);
    char* buffer = new char[len + 1];
    WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, buffer, len + 1, NULL, NULL);
    buffer[len] = '\0';

    string result = string(buffer);
    delete[] buffer;
    return result;
}
/////////////////// String Helper ///////////////////

#define READ_BUFFER_SIZE 4096

bool Raw_NewProcess(const std::string &cmd, std::function<void(int,std::string)> callback, int timeLimit)
{
    SECURITY_ATTRIBUTES sa;
	HANDLE hRead,hWrite;
	sa.nLength = sizeof(SECURITY_ATTRIBUTES);
	sa.lpSecurityDescriptor = NULL;
	sa.bInheritHandle = TRUE;
 
	if (!CreatePipe(&hRead,&hWrite,&sa,0))
		return false;
	STARTUPINFOW si = {0};
	PROCESS_INFORMATION pi;
 
	si.cb = sizeof(STARTUPINFO);
	GetStartupInfoW(&si); 
	si.hStdOutput = si.hStdError = hWrite;
	si.dwFlags = STARTF_USESTDHANDLES;
 
    auto wCmd = str2wstr(cmd);
	if (!CreateProcessW(NULL,wCmd,NULL,NULL,TRUE,NULL,NULL,NULL,&si,&pi))
	{
        delete [] wCmd;
		return false;
	}
	CloseHandle(hWrite);
    CloseHandle(pi.hThread);
 
    std::thread([hRead{std::move(hRead)},hProcess{std::move(pi.hProcess)},
        callback{std::move(callback)},timeLimit{std::move(timeLimit)}, wCmd{std::move(wCmd)}] ()
    {
        if(timeLimit == -1)
            WaitForSingleObject(hProcess,INFINITE);
        else
        {
            WaitForSingleObject(hProcess,timeLimit);
            TerminateProcess(hProcess,-1);
        }
        char buffer[READ_BUFFER_SIZE];
        string strOutput;
        DWORD bytesRead,exitCode;

        delete [] wCmd;
        GetExitCodeProcess(hProcess,&exitCode);
        while (true)
        {
            ZeroMemory(buffer, READ_BUFFER_SIZE);
            if (!ReadFile(hRead,buffer, READ_BUFFER_SIZE,&bytesRead,NULL))
                break;
            strOutput.append(buffer,bytesRead);
        }
        CloseHandle(hRead);
        CloseHandle(hProcess);

        callback((int)exitCode,strOutput);
    }).detach();

    return true;
}

//////////////////// Helper ////////////////////
void SplitHttpUrl(const std::string& url, string& host, string& path)
{
    host = url;

    bool foundProcotol = host.find('//') != string::npos;

    auto splitPos = host.find('/', foundProcotol ? host.find('//') + 2 : 0);    //查找协议后的第一个/分割host与路径
    if (splitPos == string::npos)
    {
        path = "/";
    }
    else
    {
        path = host.substr(splitPos);
        host = host.substr(0, splitPos);
    }
}
//////////////////// Helper ////////////////////

bool Raw_HttpGet(const string& url, function<void(int, string)> callback)
{
    string host, path;
    SplitHttpUrl(url, host, path);

    httplib::Client* cli = new httplib::Client(host.c_str());
    if (!cli->is_valid())
    {
        delete cli;
        return false;
    }
    std::thread([cli, callback{ std::move(callback) }, path{ std::move(path) }]()
    {
        auto response = cli->Get(path.c_str());
        delete cli;

        if (!response)
            callback(-1, "");
        else
            callback(response->status, response->body);
    }).detach();

    return true;
}

bool Raw_HttpPost(const string& url, const string& data, const string& type, function<void(int, string)> callback)
{
    string host, path;
    SplitHttpUrl(url, host, path);

    httplib::Client* cli = new httplib::Client(host.c_str());
    if (!cli->is_valid())
    {
        delete cli;
        return false;
    }
    std::thread([cli, data{ std::move(data) }, type{ std::move(type) }, callback{ std::move(callback) },
        path{ std::move(path) }]()
    {
        auto response = cli->Post(path.c_str(), data, type.c_str());
        delete cli;

        if (!response)
            callback(-1, "");
        else
            callback(response->status, response->body);
    }).detach();

    return true;
}

bool Raw_HttpGetSync(const std::string& url, int* status, std::string* result)
{
    string host, path;
    SplitHttpUrl(url, host, path);

    httplib::Client cli(host.c_str());
    if (!cli.is_valid())
    {
        return false;
    }

    httplib::Result res = cli.Get(path.c_str());
    if (res)
    {
        *status = res->status;
        *result = res->body;
        return true;
    }
    else
    {
        *status = res.error();
        return false;
    }
}

/*
unsigned int Raw_GetSystemThreadIdFromStdThread(std::thread::id id)
{
    _Thrd_t t = *(_Thrd_t*)&id;
    return t._Id;
}

bool Raw_KillThread(DWORD id)
{
    HANDLE hThr = OpenThread(STANDARD_RIGHTS_REQUIRED,FALSE,(DWORD)id);
    if(hThr == NULL || hThr == INVALID_HANDLE_VALUE)
        return false;
    BOOL res = TerminateThread(hThr,-1);
    CloseHandle(hThr);
    return res;
}*/