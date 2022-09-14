#define NEW_DEFINES
#include "InternationalAPI.h"
#include <I18nAPI.h>
#include <FMT/args.h>

void FormatHelper(std::vector<Local<Value>>& args, const std::vector<char*>& names, bool enableObject,
                  fmt::dynamic_format_arg_store<fmt::format_context>& s,
                  std::vector<char*>& delList) {
    for (auto i = 0; i < args.size(); ++i) {
        auto& arg = args[i];
        char* name = nullptr;
        if (i < names.size()) {
            name = names[i];
        }
        switch (arg.getKind()) {
            case ValueKind::kBoolean: {
                if (!name) {
                    s.push_back(arg.asBoolean().value());
                } else {
                    s.push_back(fmt::arg(name, arg.asBoolean().value()));
                }
                break;
            }
            case ValueKind::kNumber: {
                if (CheckIsFloat(arg)) {
                    if (!name) {
                        s.push_back(arg.asNumber().toDouble());
                    } else {
                        s.push_back(fmt::arg(name, arg.asNumber().toDouble()));
                    }
                } else {
                    if (!name) {
                        s.push_back(arg.asNumber().toInt64());
                    } else {
                        s.push_back(fmt::arg(name, arg.asNumber().toInt64()));
                    }
                }
                break;
            }
            case ValueKind::kString: {
                if (!name) {
                    s.push_back(arg.toStr());
                } else {
                    s.push_back(fmt::arg(name, arg.toStr()));
                }
                break;
            }
            case ValueKind::kArray: {
                if (enableObject) {
                    auto arr = arg.asArray();
                    std::vector<Local<Value>> vals;
                    for (auto j = 0ULL; j < arr.size(); ++j) {
                        vals.push_back(arr.get(j));
                    }
                    FormatHelper(vals, {}, false, s, delList);
                    break;
                }
                // Follow
            }
            case ValueKind::kObject: {
                if (enableObject) {
                    auto obj = arg.asObject();
                    auto keys = obj.getKeys();
                    std::vector<Local<Value>> vals;
                    std::vector<char*> nextNames;
                    for (auto j = 0ULL; j < keys.size(); ++j) {
                        auto key = keys[j].toString();
#if __cplusplus <= 201703L
                        char* cName = new char[key.size() + 1];
                        std::memset(cName, 0, key.size() + 1);
#else
                        char* cName = new char[key.size() + 1](0);
#endif
                        std::copy(key.begin(), key.end(), cName);
                        delList.push_back(cName);
                        nextNames.push_back(cName);
                        vals.push_back(obj.get(keys[j]));
                    }
                    FormatHelper(vals, nextNames, false, s, delList);
                    break;
                }
                // Follow
            }
            default: {
                auto str = ValueToString(arg);
                if (!name) {
                    s.push_back(str);
                } else {
                    s.push_back(fmt::arg(name, str));
                }
                break;
            }
        }
    }
}

Local<Value> TrFormat(const Arguments& args, size_t offset, std::string key, 
                    const std::string& localeName = "") {
    try {
        size_t argsLength = args.size() - offset;
        auto i18n = ENGINE_OWN_DATA()->i18n;
        if (i18n) {
            key = i18n->get(key, localeName);
        }
        // realFormatStr = FixCurlyBracket(realFormatStr);
        if (0ULL == argsLength) {
            // Avoid fmt if only one argument
            return String::newString(key);
        } else {
            fmt::dynamic_format_arg_store<fmt::format_context> s;
            std::vector<char*> delList;
            std::vector<Local<Value>> vals;
            for (auto i = offset; i < args.size(); ++i) {
                vals.push_back(args[i]);
            }
            FormatHelper(vals, {}, true, s, delList);
            auto result = String::newString(fmt::vformat(key, s));
            for (auto& ptr : delList) {
                delete[] ptr;
            }
            return result;
        }
    } catch (const fmt::format_error&) {
        return String::newString(key);
    }
}

ClassDefine<void> I18nClassBuilder =
    defineClass<void>("i18n")
        .function("tr", &I18nClass::tr)
        .function("trl", &I18nClass::trl)
        .function("get", &I18nClass::get)
        .function("load", &I18nClass::load)
        .build();

Local<Value> I18nClass::tr(const Arguments& args) {
    CHECK_ARGS_LEAST_COUNT(1); // At least 1
    CHECK_ARG_TYPE(0, kString);

    try {
        return TrFormat(args, 1ULL, args[0].toStr());
    }
    CATCH_AND_THROW;
}

Local<Value> I18nClass::trl(const Arguments& args) {
    CHECK_ARGS_LEAST_COUNT(2);
    CHECK_ARG_TYPE(0, kString);
    CHECK_ARG_TYPE(1, kString);

    try {
        return TrFormat(args, 2ULL, args[1].toStr(), args[0].toStr());
    }
    CATCH_AND_THROW;
}

Local<Value> I18nClass::get(const Arguments& args) {
    CHECK_ARGS_LEAST_COUNT(1);
    CHECK_ARG_TYPE(0, kString);
    if (args.size() == 2) {
        CHECK_ARG_TYPE(1, kString);
    } else {
        CHECK_ARGS_COUNT(1);
    }

    try {
        auto key = args[0].toStr();
        std::string localeName{};
        if (args.size() == 2) {
            localeName = args[1].toStr();
        }
        auto i18n = ENGINE_OWN_DATA()->i18n;
        if (!i18n) {
            throw Exception("I18n data has not been loaded yet!");
        }
        return String::newString(i18n->get(key, localeName));
    }
    CATCH_AND_THROW;
}

Local<Value> I18nClass::load(const Arguments& args) {
    CHECK_ARGS_LEAST_COUNT(1);
    CHECK_ARG_TYPE(0, kString);
    if (args.size() > 1) {
        CHECK_ARG_TYPE(1, kString);
    }
    if (args.size() > 2) {
        CHECK_ARG_TYPE(2, kObject);
    }

    try {
        auto path = args[0].toStr();
        I18nBase::LangData defaultLangData;
        std::string defaultLocaleName;
        if (args.size() > 1) {
            defaultLocaleName = args[1].toStr();
        }
        if (args.size() > 2) {
            auto rawLangData = args[2].asObject();
            auto rawLangDataKeys = rawLangData.getKeys();
            for (auto i = 0ULL; i < rawLangDataKeys.size(); ++i) {
                auto localeName = rawLangDataKeys[i].toString();
                auto val = rawLangData.get(rawLangDataKeys[i]);
                if (val.getKind() != ValueKind::kObject) {
                    throw Exception("Value in LangData must be object");
                }
                auto obj = val.asObject();
                I18nBase::SubLangData data;
                auto objKeys = obj.getKeys();
                for (auto j = 0ULL; j < objKeys.size(); ++j) {
                    auto str = obj.get(objKeys[j]);
                    if (str.getKind() != ValueKind::kString) {
                        throw Exception("Value in SubLangData must be string");
                    }
                    data.emplace(objKeys[j].toString(), str.toStr());
                }
                defaultLangData.emplace(localeName, data);
            }
        }

        I18nBase* res = nullptr;
        if (EndsWith(path, "/") || EndsWith(path, "\\") || std::filesystem::is_directory(path)) { // Directory
            res = new MultiFileI18N(path, defaultLocaleName, defaultLangData);
        } else {
            res = new SingleFileI18N(path, defaultLocaleName, defaultLangData);
        }
        ENGINE_OWN_DATA()->i18n = res;
        if (res) {
            return Boolean::newBoolean(true);
        }
        return Boolean::newBoolean(false);
    }
    CATCH_AND_THROW;
}
