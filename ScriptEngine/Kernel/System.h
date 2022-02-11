#pragma once
#include <string>
#include <vector>
#include <functional>
#include <thread>

//文件系统
bool Raw_DirCreate(const std::string &path);
bool Raw_PathExists(const std::string &path);
bool Raw_FileReadFrom(const std::string &path, std::string & result);
bool Raw_FileWriteTo(const std::string &path, const std::string &data);
std::vector<std::string> Raw_GetFilesList(const std::string& path);

//系统调用
bool Raw_NewProcess(const std::string &cmd, std::function<void(int,std::string)> callback, int timeLimit);

//网络
bool Raw_HttpGet(const std::string &url, std::function<void(int,std::string)> callback);
bool Raw_HttpPost(const std::string& url, const std::string& data, const std::string& type, std::function<void(int, std::string)> callback);
bool Raw_HttpGetSync(const std::string& url, int *status, std::string *result);

//获取信息
std::string Raw_GetDateTimeStr();
std::string Raw_RandomGuid();
std::wstring Raw_RandomGuidW();