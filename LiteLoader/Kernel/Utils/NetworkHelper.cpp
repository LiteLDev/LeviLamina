#include <Utils/NetworkHelper.h>
#include <LoggerAPI.h>
#include <httplib/httplib.h>
#include <thread>

using namespace std;
using LL::logger;

void SplitHttpUrl(const std::string &url, string &host, string &path) {
    host = url;

    bool foundProtocol = host.find('/') != string::npos;

    auto splitPos = host.find('/', foundProtocol ? host.find('/') + 2 : 0); //查找协议后的第一个/分割host与路径
    if (splitPos == string::npos) {
        path = "/";
    } else {
        path = host.substr(splitPos);
        host = host.substr(0, splitPos);
    }
}

bool HttpGet(const string &url, const function<void(int, string)> &callback, int timeout) {
    string host, path;
    SplitHttpUrl(url, host, path);

    auto *cli = new httplib::Client(host.c_str());
    if (!cli->is_valid()) {
        delete cli;
        return false;
    }
    if (timeout > 0)
        cli->set_connection_timeout(timeout, 0);

    std::thread([cli, callback, path{std::move(path)}]() {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        try {
            auto response = cli->Get(path.c_str());
            delete cli;

            if (!response)
                callback(-1, "");
            else
                callback(response->status, response->body);
        }
        catch (const seh_exception &e) {
            logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
            logger.error("In HttpGet callback");
        }
        catch (...) {
            logger.error("HttpGet Callback Failed!");
            logger.error("Uncaught Exception Detected!");
        }
    }).detach();

    return true;
}

bool
HttpPost(const string &url, const string &data, const string &type, const std::function<void(int, string)> &callback,
         int timeout) {
    string host, path;
    SplitHttpUrl(url, host, path);
    auto *cli = new httplib::Client(host.c_str());
    if (!cli->is_valid()) {
        delete cli;
        return false;
    }
    if (timeout > 0)
        cli->set_connection_timeout(timeout, 0);

    std::thread([cli, data, type, callback, path{std::move(path)}]() {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        try {
            auto response = cli->Post(path.c_str(), data, type.c_str());
            delete cli;
            if (!response)
                callback(-1, "");
            else
                callback(response->status, response->body);
        }
        catch (const seh_exception &e) {
            logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
            logger.error("In HttpPost callback");
        }
        catch (...) {
            logger.error("HttpPost Callback Failed!");
            logger.error("Uncaught Exception Detected!");
        }
    }).detach();
    return true;
}

bool HttpGetSync(const std::string &url, int *statusRtn, std::string *dataRtn, int timeout) {
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