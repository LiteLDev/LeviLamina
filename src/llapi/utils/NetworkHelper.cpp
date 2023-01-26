#include "llapi/utils/NetworkHelper.h"

#include <thread>
#include <httplib.h>

#include "llapi/utils/DbgHelper.h"

#include "llapi/LoggerAPI.h"
#include "llapi/I18nAPI.h"

#include "liteloader/Config.h"
#include "liteloader/LiteLoader.h"

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
        if (!ll::isDebugMode())
            _set_se_translator(seh_exception::TranslateSEHtoCE);
        try {
            auto response = cli->Get(path.c_str(), headers);
            delete cli;

            if (!response)
                callback(-1, "");
            else
                callback(response->status, response->body);
        } catch (const seh_exception& e) {
            ll::logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
            ll::logger.error("In HttpGet callback");
            PrintCurrentStackTraceback();
        } catch (const std::exception& e) {
            ll::logger.error("Uncaught C++ Exception Detected!\n{}", TextEncoding::toUTF8(e.what()));
            ll::logger.error("In HttpGet callback");
            PrintCurrentStackTraceback();
        } catch (...) {
            ll::logger.error("HttpGet Callback Failed!");
            ll::logger.error("Uncaught Exception Detected!");
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
        if (!ll::isDebugMode())
            _set_se_translator(seh_exception::TranslateSEHtoCE);
        try {
            auto response = cli->Post(path.c_str(), headers, data, type.c_str());
            delete cli;
            if (!response)
                callback(-1, "");
            else
                callback(response->status, response->body);
        } catch (const seh_exception& e) {
            ll::logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
            ll::logger.error("In HttpPost callback");
            PrintCurrentStackTraceback();
        } catch (const std::exception& e) {
            ll::logger.error("Uncaught C++ Exception Detected!\n{}", TextEncoding::toUTF8(e.what()));
            ll::logger.error("In HttpGet callback");
            PrintCurrentStackTraceback();
        } catch (...) {
            ll::logger.error("HttpPost Callback Failed!");
            ll::logger.error("Uncaught Exception Detected!");
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