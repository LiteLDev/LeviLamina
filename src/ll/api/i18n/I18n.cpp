#include "ll/api/i18n/I18n.h"

#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/SystemUtils.h"

#include "nlohmann/json.hpp"

namespace ll::i18n {
std::string& defaultLocaleCode() {
    static std::string name = sys_utils::getSystemLocaleCode();
    return name;
}
std::string_view getDefaultLocaleCode() { return defaultLocaleCode(); }

class LocalizedStrings {

    SmallStringMap<SmallStringMap<std::string>> strings;

    bool getImpl(std::string_view localeCode, std::string_view& value) const {
        auto             dashPos = localeCode.find('-');
        std::string_view subCode;
        if (dashPos != std::string_view::npos) {
            subCode = localeCode.substr(dashPos + 1);
        }
        if (auto codeIter = strings.find(localeCode.substr(0, dashPos)); codeIter != strings.end()) {
            auto& strMap = codeIter->second;
            if (auto strIter = strMap.find(subCode); strIter != strMap.end()) {
                value = strIter->second;
            } else {
                value = strMap.begin()->second;
            }
            return true;
        }
        return false;
    }

public:
    void set(std::string_view localeCode, std::string_view value) {
        auto             dashPos = localeCode.find('-');
        std::string_view subCode;
        if (dashPos != std::string_view::npos) {
            subCode = localeCode.substr(dashPos + 1);
        }
        strings[localeCode.substr(0, dashPos)].insert_or_assign(subCode, value);
    }
    void get(std::string_view localeCode, std::string_view& value) const {
        if (!getImpl(localeCode, value)) {
            if (!getImpl("en-us", value)) {
                value = strings.begin()->second.begin()->second;
            }
        }
    }
};

struct I18n::Impl {
    StringMap<LocalizedStrings> map;
};

I18n::I18n()  = default;
I18n::~I18n() = default;

static void addNestedData(I18n& i18n, std::string_view code, nlohmann::json const& j, std::string const& prefix = {}) {
    if (!j.is_object()) {
        return;
    }
    for (auto& [key, val] : j.items()) {
        if (val.is_object()) {
            addNestedData(i18n, code, val, prefix + key + '.');
        } else if (val.is_string()) {
            i18n.set(code, prefix + key, val);
        }
    }
}

Expected<> I18n::load(std::filesystem::path const& path) noexcept try {
    if (!exists(path)) {
        return makeStringError("Path not found");
    }
    if (is_directory(path)) {
        for (auto& f : std::filesystem::directory_iterator(path)) {
            if (!f.is_regular_file() || f.path().extension() != u8".json") {
                continue;
            }
            auto           localeCode = f.path().stem().string();
            nlohmann::json j;
            std::ifstream(f.path()) >> j;
            addNestedData(*this, localeCode, j);
        }
    } else {
        nlohmann::json j;
        std::ifstream(path) >> j;
        for (auto& [localeCode, val] : j.items()) {
            addNestedData(*this, localeCode, val);
        }
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

void I18n::clear() { impl.reset(); }

void I18n::set(std::string_view localeCode, std::string_view key, std::string_view value) {
    if (!impl) {
        impl = std::make_unique<Impl>();
    }
    std::string code{localeCode};
    std::transform(code.begin(), code.end(), code.begin(), [](char c) {
        if (c == '_') {
            return '-';
        }
        return (char)std::tolower(c);
    });
    impl->map[key].set(code, value);
}

std::string_view I18n::get(std::string_view key, std::string_view localeCode) const {
    std::string_view result{key};
    if (impl) {
        if (localeCode.empty()) {
            localeCode = getDefaultLocaleCode();
        }
        std::string code{localeCode};
        std::transform(code.begin(), code.end(), code.begin(), [](char c) {
            if (c == '_') {
                return '-';
            }
            return (char)std::tolower(c);
        });
        localeCode = code;
        impl->map.if_contains(key, [&](auto& pair) { pair.second.get(localeCode, result); });
    }
    return result;
}

} // namespace ll::i18n
