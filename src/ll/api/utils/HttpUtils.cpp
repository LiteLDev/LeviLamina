#include "ll/api/utils/HttpUtils.h"

#include <thread>

#include "ll/api/Logger.h"
#include "ll/api/utils/SehTranslator.h"
#include "ll/core/LeviLamina.h"

// TODO rewrite this file

namespace ll::utils::http_utils {

void splitUrl(std::string const& url, std::string& host, std::string& path) {
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

bool get(std::string const& url, Callback const& callback, int timeout) { return get(url, {}, callback, timeout); }

bool get(std::string const& url, Headers const& headers, Callback const& callback, int timeout) {
    std::string host, path;
    splitUrl(url, host, path);

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

bool post(
    std::string const& url,
    std::string const& data,
    std::string const& type,
    const Callback&    callback,
    int                timeout
) {
    return post(url, {}, data, type, callback, timeout);
}

bool post(
    std::string const& url,
    Headers const&     headers,
    std::string const& data,
    std::string const& type,
    const Callback&    callback,
    int                timeout
) {
    std::string host, path;
    splitUrl(url, host, path);
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

bool getSync(std::string const& url, int* statusRtn, std::string* dataRtn, int timeout) {
    std::string host, path;
    splitUrl(url, host, path);

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

} // namespace ll::utils::http_utils
