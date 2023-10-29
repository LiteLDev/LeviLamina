#include "ll/api/utils/NetworkHelper.h"

#include "httplib.h"
#include <thread>

#include "ll/api/utils/DbgHelper.h"

#include "ll/api/Logger.h"
#include "ll/api/i18n/I18nAPI.h"

#include "ll/core/Config.h"
#include "ll/core/LeviLamina.h"

// TODO rewrite this file

void SplitHttpUrl(std::string const& url, std::string& host, std::string& path) {
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

bool HttpGet(std::string const& url, std::function<void(int, std::string)> const& callback, int timeout) {
    return HttpGet(url, {}, callback, timeout);
}

bool HttpGet(
    std::string const&                           url,
    httplib::Headers const&                      headers,
    std::function<void(int, std::string)> const& callback,
    int                                          timeout
) {
    std::string host, path;
    SplitHttpUrl(url, host, path);

    auto* cli = new httplib::Client(host);
    if (!cli->is_valid()) {
        delete cli;
        return false;
    }
    if (timeout > 0) cli->set_connection_timeout(timeout, 0);

    std::thread([cli, headers, callback, path{std::move(path)}] {
        try {
            auto response = cli->Get(path, headers);
            delete cli;

            if (!response) callback(-1, "");
            else callback(response->status, response->body);
        } catch (seh_exception const& e) {
            ll::logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
            ll::logger.error("In HttpGet callback");
        } catch (std::exception const& e) {
            ll::logger.error("Uncaught C++ Exception Detected!\n{}", e.what());
            ll::logger.error("In HttpGet callback");
        } catch (...) {
            ll::logger.error("HttpGet Callback Failed!");
            ll::logger.error("Uncaught Exception Detected!");
        }
    }).detach();

    return true;
}

bool HttpPost(
    std::string const&                           url,
    std::string const&                           data,
    std::string const&                           type,
    const std::function<void(int, std::string)>& callback,
    int                                          timeout
) {
    return HttpPost(url, {}, data, type, callback, timeout);
}

bool HttpPost(
    std::string const&                           url,
    httplib::Headers const&                      headers,
    std::string const&                           data,
    std::string const&                           type,
    const std::function<void(int, std::string)>& callback,
    int                                          timeout
) {
    std::string host, path;
    SplitHttpUrl(url, host, path);
    auto* cli = new httplib::Client(host);
    if (!cli->is_valid()) {
        delete cli;
        return false;
    }
    if (timeout > 0) cli->set_connection_timeout(timeout, 0);

    std::thread([cli, headers, data, type, callback, path{std::move(path)}] {
        try {
            auto response = cli->Post(path, headers, data, type);
            delete cli;
            if (!response) callback(-1, "");
            else callback(response->status, response->body);
        } catch (seh_exception const& e) {
            ll::logger.error("SEH Uncaught Exception Detected!\n{}", e.what());
            ll::logger.error("In HttpPost callback");
        } catch (std::exception const& e) {
            ll::logger.error("Uncaught C++ Exception Detected!\n{}", e.what());
            ll::logger.error("In HttpGet callback");
        } catch (...) {
            ll::logger.error("HttpPost Callback Failed!");
            ll::logger.error("Uncaught Exception Detected!");
        }
    }).detach();
    return true;
}

bool HttpGetSync(std::string const& url, int* statusRtn, std::string* dataRtn, int timeout) {
    std::string host, path;
    SplitHttpUrl(url, host, path);

    httplib::Client cli(host);
    if (!cli.is_valid()) { return false; }
    if (timeout > 0) cli.set_connection_timeout(timeout, 0);

    auto response = cli.Get(path);

    if (!response) return false;
    else {
        if (statusRtn) *statusRtn = response->status;
        if (dataRtn) *dataRtn = response->body;
    }
    return true;
}
