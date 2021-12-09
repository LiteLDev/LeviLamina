#include <Utils/NetworkHelper.h>
#include <httplib/httplib.h>
#include <thread>
using namespace std;

void SplitHttpUrl(const std::string& url, string& host, string& path) {
    host = url;

    bool foundProcotol = host.find('/') != string::npos;

    auto splitPos = host.find('/', foundProcotol ? host.find('/') + 2 : 0); //查找协议后的第一个/分割host与路径
    if (splitPos == string::npos) {
        path = "/";
    } else {
        path = host.substr(splitPos);
        host = host.substr(0, splitPos);
    }
}

bool HttpGet(const string& url, function<void(int, string)> callback, int timeout) {
    string host, path;
    SplitHttpUrl(url, host, path);

    httplib::Client* cli = new httplib::Client(host.c_str());
    if (!cli->is_valid()) {
        delete cli;
        return false;
    }
    if (timeout > 0)
        cli->set_connection_timeout(timeout, 0);

    std::thread([cli, callback{std::move(callback)}, path{std::move(path)}]() {
        auto response = cli->Get(path.c_str());
        delete cli;

        if (!response)
            callback(-1, "");
        else
            callback(response->status, response->body);
    }).detach();

    return true;
}

bool HttpGetSync(const std::string& url, int* statusRtn, std::string* dataRtn, int timeout) {
    string host, path;
    SplitHttpUrl(url, host, path);

    httplib::Client cli(host.c_str());
    if (!cli.is_valid()) {
        return false;
    }
    if (timeout > 0)
        cli.set_connection_timeout(timeout, 0);

    auto response = cli.Get(path.c_str());

    if (!response)
        return false;
    else {
        if (statusRtn)
            *statusRtn = response->status;
        if (dataRtn)
            *dataRtn = response->body;
    }
    return true;
}