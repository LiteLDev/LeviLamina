#include "llapi/db/ConnParams.h"
#include "llapi/utils/StringHelper.h"
#include "llapi/LoggerAPI.h"

namespace DB {

#pragma region URL_Parser

struct URL {
    std::string scheme;
    std::string user;
    std::string password;
    std::string host;
    uint16_t port = 0;
    std::string path;
    std::map<std::string, std::string> query;
    std::string fragment;
};

URL ParseURL(const std::string& url) {
    URL result;
    std::string cur = url;

    size_t pos = cur.find("://");
    if (pos != std::string::npos) {
        result.scheme = cur.substr(0, pos);
        cur = cur.substr(pos + 3);
    }
    pos = cur.find('@');
    auto pos0 = pos;
    if (pos != std::string::npos) {
        std::string userInfo = cur.substr(0, pos);
        pos = userInfo.find(':');
        if (pos != std::string::npos) {
            result.user = userInfo.substr(0, pos);
            result.password = userInfo.substr(pos + 1);
        } else
            result.user = userInfo;
        cur = cur.substr(pos0 + 1);
    }
    pos = cur.find_first_of("/?#");
    auto pos1 = pos;
    std::string address = cur.substr(0, pos);
    pos = address.find(':');
    if (pos != std::string::npos) {
        result.host = address.substr(0, pos);
        result.port = static_cast<uint16_t>(std::stoi(address.substr(pos + 1)));
    } else
        result.host = address;
    if (pos1 == std::string::npos)
        return result;
    else
        cur = cur.substr(pos1);

    pos = cur.find_first_of("?#");
    result.path = cur.substr(0, pos);
    if (pos == std::string::npos)
        return result;
    else
        cur = cur.substr(pos);
    if (cur[0] == '?') {
        cur = cur.substr(1);
        pos = cur.find('#');
        std::string query = cur.substr(0, pos);
        if (pos != std::string::npos) {
            result.fragment = cur.substr(pos + 1);
        }
        std::vector<std::string> pairs = SplitStrWithPattern(query, "&");
        for (auto& pair : pairs) {
            std::string k, v;
            pos = pair.find('=');
            if (pos == std::string::npos)
                k = pair;
            else {
                k = pair.substr(0, pos);
                v = pair.substr(pos + 1);
            }
            result.query.emplace(k, v);
        }
    } else if (cur[0] == '#') {
        result.fragment = cur.substr(1);
    }
    return result;
}

extern Logger dbLogger;
void PrintURL(const URL& url) {
    dbLogger.debug("Parsed URL");
    dbLogger.debug("scheme: {}", url.scheme);
    dbLogger.debug("user: {}", url.user);
    dbLogger.debug("password: {}", url.password);
    dbLogger.debug("host: {}", url.host);
    dbLogger.debug("port: {}", url.port);
    dbLogger.debug("path: {}", url.path);
    dbLogger.debug("query:");
    for (auto& pair : url.query)
        dbLogger.debug("- {}: {}", pair.first, pair.second);
    dbLogger.debug("fragment: {}", url.fragment);
}

#pragma endregion

ConnParams::ConnParams(const std::initializer_list<Any>& list)
: std::unordered_map<std::string, Any>() {
    bool key = true;
    std::string keyName;
    for (auto& item : list) {
        if (key) {
            if (item.is_string()) {
                throw std::invalid_argument("ConnParams::ConnParams: Key must be string");
            }
            keyName = item.get<std::string>();
            key = false;
        } else {
            insert({keyName, item});
            key = true;
        }
    }
    auto host = getHost();
    if (host.find(':') != std::string::npos) {
        host = host.substr(0, host.find_last_of(':'));
        auto port = host.substr(host.find_last_of(':') + 1);
        (*this)["host"] = host;
        (*this)["port"] = std::stoi(port);
    }
}
ConnParams::ConnParams(const std::initializer_list<std::pair<std::string, Any>>& list)
: std::unordered_map<std::string, Any>() {
    for (auto& item : list) {
        insert(item);
    }
    auto host = getHost();
    if (host.find(':') != std::string::npos) {
        host = host.substr(0, host.find_last_of(':'));
        auto port = host.substr(host.find_last_of(':') + 1);
        (*this)["host"] = host;
        (*this)["port"] = std::stoi(port);
    }
}
ConnParams::ConnParams(const std::string& str)
: std::unordered_map<std::string, Any>() {
    raw = str;
    auto url = ParseURL(str);
#if defined(LLDB_DEBUG_MODE)
    PrintURL(url);
#endif

    if (!url.scheme.empty())
        insert({"scheme", url.scheme});
    if (!url.host.empty())
        insert({"host", url.host});
    if (url.port)
        insert({"port", url.port});
    if (!url.user.empty())
        insert({"user", url.user});
    if (!url.password.empty())
        insert({"password", url.password});
    if (!url.path.empty()) {
        std::string path = url.path;
        if (path[0] == '/')
            path = path.substr(1);
        insert({"path", path});
    }
    if (!url.fragment.empty())
        insert({"fragment", url.fragment});
    for (auto& pair : url.query) {
        insert({pair.first, Any::str2any(pair.second)});
    }
}
ConnParams::ConnParams(const char* str)
: std::unordered_map<std::string, Any>() {
    *this = ConnParams(std::string(str));
}

std::string ConnParams::getScheme() {
    return get<std::string>({"scheme", "protocol", "type"}, true);
}

std::string ConnParams::getHost() {
    return get<std::string>({"host", "hostname", "server", "server_name", "ip", "address"}, true);
}

uint16_t ConnParams::getPort() {
    return get<uint16_t>({"port", "port_number", "port_num", "port_id", "portid"}, true, 0);
}

std::string ConnParams::getUsername() {
    return get<std::string>({"user", "username", "user_name", "usr", "usrname"}, true);
}

std::string ConnParams::getPassword() {
    return get<std::string>({"password", "pass", "passwd", "pass_word"}, true);
}

std::string ConnParams::getDatabase() {
    return get<std::string>({"database", "db", "db_name", "dbname", "path"}, true);
}

std::string ConnParams::getPath() {
    return get<std::string>({"path", "file", "file_name", "filename"}, true);
}

std::string ConnParams::getRaw() {
    return raw;
}

} // namespace DB