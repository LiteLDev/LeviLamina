#include "liteloader/api/utils/NetworkHelper.h"

#include <thread>
#include <httplib.h>

#include "liteloader/api/utils/DbgHelper.h"

#include "liteloader/api/LoggerAPI.h"
#include "liteloader/api/I18nAPI.h"

#include "liteloader/core/Config.h"
#include "liteloader/core/LiteLoader.h"

using namespace std;

void SplitHttpUrl(const std::string& url, std::string& host, std::string& path) {
    host = url;

    bool foundProtocol = host.find('/') != std::string::npos;

    auto splitPos = host.find('/', foundProtocol ? host.find('/') + 2 : 0); // 查找协议后的第一个/分割host与路径
    if (splitPos == std::string::npos) {
        path = "/";
    } else {
        path = host.substr(splitPos);
        host = host.substr(0, splitPos);
    }
}

bool HttpGet(const std::string& url, const function<void(int, std::string)>& callback, int timeout) {
    return HttpGet(url, {}, callback, timeout);
}

bool HttpGet(
    const std::string&                      url,
    const httplib::Headers&            headers,
    const function<void(int, std::string)>& callback,
    int                                timeout
) {
    std::string host, path;
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

bool HttpPost(
    const std::string&                           url,
    const std::string&                           data,
    const std::string&                           type,
    const std::function<void(int, std::string)>& callback,
    int                                     timeout
) {
    return HttpPost(url, {}, data, type, callback);
}

bool HttpPost(
    const std::string&                           url,
    const httplib::Headers&                 headers,
    const std::string&                           data,
    const std::string&                           type,
    const std::function<void(int, std::string)>& callback,
    int                                     timeout
) {
    std::string host, path;
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
    std::string host, path;
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
