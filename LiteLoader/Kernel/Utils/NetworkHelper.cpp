#include <Utils/NetworkHelper.h>
#include <LoggerAPI.h>
#include <Main/LiteLoader.h>
#include <httplib/httplib.h>
#include <Utils/DbgHelper.h>
#include <thread>
#include <I18nAPI.h>

using namespace std;

void SplitHttpUrl(const std::string& url, string& host, string& path) {
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

bool HttpGet(const string& url, const function<void(int, string)>& callback, int timeout) {
    return HttpGet(url, {}, callback, timeout);
}

bool HttpGet(const string& url, const httplib::Headers& headers, const function<void(int, string)>& callback, int timeout) {
    string host, path;
    SplitHttpUrl(url, host, path);

    auto* cli = new httplib::Client(host.c_str());
    if (!cli->is_valid()) {
        delete cli;
        return false;
    }
    if (timeout > 0)
        cli->set_connection_timeout(timeout, 0);

    std::thread([cli, headers, callback, path{std::move(path)}]() {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        try {
            auto response = cli->Get(path.c_str(), headers);
            delete cli;

            if (!response)
                callback(-1, "");
            else
                callback(response->status, response->body);
        } catch (const seh_exception& e) {
            logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
            logger.error("In HttpGet callback");
            PrintCurrentStackTraceback();
        } catch (const std::exception& e) {
            logger.error("Uncaught C++ Exception Detected!\n{}", TextEncoding::toUTF8(e.what()));
            logger.error("In HttpGet callback");
            PrintCurrentStackTraceback();
        } catch (...) {
            logger.error("HttpGet Callback Failed!");
            logger.error("Uncaught Exception Detected!");
            PrintCurrentStackTraceback();
        }
    }).detach();

    return true;
}

bool HttpPost(const string& url, const string& data, const string& type, const std::function<void(int, string)>& callback,
              int timeout) {
    return HttpPost(url, {}, data, type, callback);
}

bool HttpPost(const string& url, const httplib::Headers& headers, const string& data, const string& type, const std::function<void(int, string)>& callback,
              int timeout) {
    string host, path;
    SplitHttpUrl(url, host, path);
    auto* cli = new httplib::Client(host.c_str());
    if (!cli->is_valid()) {
        delete cli;
        return false;
    }
    if (timeout > 0)
        cli->set_connection_timeout(timeout, 0);

    std::thread([cli, headers, data, type, callback, path{std::move(path)}]() {
        _set_se_translator(seh_exception::TranslateSEHtoCE);
        try {
            auto response = cli->Post(path.c_str(), headers, data, type.c_str());
            delete cli;
            if (!response)
                callback(-1, "");
            else
                callback(response->status, response->body);
        } catch (const seh_exception& e) {
            logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
            logger.error("In HttpPost callback");
            PrintCurrentStackTraceback();
        } catch (const std::exception& e) {
            logger.error("Uncaught C++ Exception Detected!\n{}", TextEncoding::toUTF8(e.what()));
            logger.error("In HttpGet callback");
            PrintCurrentStackTraceback();
        } catch (...) {
            logger.error("HttpPost Callback Failed!");
            logger.error("Uncaught Exception Detected!");
            PrintCurrentStackTraceback();
        }
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