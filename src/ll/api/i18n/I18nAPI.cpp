#include "ll/api/i18n/I18nAPI.h"

#include "ll/api/utils/StringUtils.h"

namespace fs = std::filesystem;

using ll::StringUtils::splitByPattern;
using ll::StringUtils::str2wstr;
using ll::StringUtils::wstr2str;

namespace ll::i18n {

const std::array<std::string, 2> GENERAL_LANGUAGES = {"en", "zh"};

// region ### I18N ###

bool findTranslation(
    I18N::LangData const& langData,
    std::string const&    key,
    std::string const&    localeName,
    std::string const&    localeType,
    std::string&          dest
) {
    if (auto lang = langData.find(localeName); lang != langData.end()) { // If there is a translation for the language
        auto& translations = lang->second;
        if (auto it = translations.find(key); it != translations.end()) { // If there is matched key in the translations
            dest = it->second;
            return true;
        }
    }
    // Search for the similar language in mLangData
    for (auto& [name, translations] : langData) {
        if (name.length() < 2) { continue; }
        if (name.substr(0, 2) == localeType) {
            if (auto it = translations.find(key); it != translations.end()) {
                dest = it->second;
                return true;
            }
        }
    }
    return false;
}

std::string I18N::get(std::string const& key, std::string localeName) {
    if (localeName.empty()) { localeName = mDefaultLocaleName; }
    auto        localeType = localeName.substr(0, 2);
    std::string result;
    // Try finding the translation in loaded language data
    if (findTranslation(mLangData, key, localeName, localeType, result)) { return result; }
    // If not found, try falling back to the default language data
    if (!mDefaultLangData.empty() && findTranslation(mDefaultLangData, key, localeName, localeType, result)) {
        return result;
    }
    // Try finding general languages
    for (auto& lang : GENERAL_LANGUAGES) {
        if (findTranslation(mLangData, key, lang, lang, result)) { return result; }
        if (!mDefaultLangData.empty() && findTranslation(mDefaultLangData, key, lang, lang, result)) { return result; }
    }
    // Use the first (dictionary order) language data
    if (!mLangData.empty()) {
        auto& lang = mLangData.begin()->second;
        if (auto it = lang.find(key); it != lang.end()) { return it->second; }
    }
    // Finally, still not found, return the key
    return key;
}

// endregion

// region ### SingleFileI18N ###

void SingleFileI18N::load(std::string const& fileName) {
    this->mFilePath = fileName;
    if (!fs::exists(fileName)) {
        fs::create_directories(fs::path(fileName).parent_path());
        std::fstream   file(fileName, std::ios::out | std::ios::app);
        nlohmann::json j = mDefaultLangData;
        file << std::setw(4) << j; // Dump default language data
        file.close();
        mLangData = mDefaultLangData;
        return; // Skip parsing
    }
    std::fstream   file(fileName, std::ios::in);
    nlohmann::json j;
    file >> j;
    mLangData = j.get<LangData>();
    file.close();
    // Replenish the missing keys
    for (auto& [lang, dat] : mLangData) {
        if (mDefaultLangData.count(lang)) {
            for (auto& [k, v] : mDefaultLangData[lang]) {
                if (!dat.count(k)) { dat[k] = v; }
            }
        }
    }
    save();
}

void SingleFileI18N::save() {
    std::fstream file;
    if (fs::exists(mFilePath)) file.open(mFilePath, std::ios::out | std::ios::ate);
    else file.open(mFilePath, std::ios::out | std::ios::app);
    nlohmann::json j = mLangData;
    file << std::setw(4) << j;
    file.close();
}

I18N::Type SingleFileI18N::getType() { return Type::SingleFile; }

std::unique_ptr<I18N> SingleFileI18N::clone() {
    auto result                = std::make_unique<SingleFileI18N>();
    result->mDefaultLangData   = this->mDefaultLangData;
    result->mLangData          = this->mLangData;
    result->mDefaultLocaleName = this->mDefaultLocaleName;
    result->mFilePath          = this->mFilePath;
    return result;
}

// endregion

// region ### MultiFileI18N ###

I18N::SubLangData parseNestedData(nlohmann::json const& j, std::string const& prefix = "") {
    I18N::SubLangData data;
    if (!j.is_object()) {
        return data; // Empty
    }
    for (auto& it : j.items()) {
        auto& val = it.value();
        if (val.is_object()) {
            data.merge(parseNestedData(val, prefix + it.key() + '.'));
        } else if (val.is_string()) {
            data.emplace(prefix + it.key(), val.get<std::string>());
        } else {
            continue; // Ignore
        }
    }
    return data;
}

void MultiFileI18N::load(std::string const& dirPath) {
    this->mDirPath = dirPath;
    if (!fs::exists(dirPath) || fs::is_empty(dirPath)) {
        if (this->mDefaultLangData.empty()) { return; }
        this->mLangData = this->mDefaultLangData;
        save();
        return;
    }
    for (auto& f : fs::directory_iterator(dirPath)) {
        if (!f.is_regular_file() || f.path().extension() != ".json") { continue; }
        auto           langName = f.path().stem().string();
        std::fstream   file(f.path().wstring(), std::ios::in);
        nlohmann::json j;
        file >> j;
        auto data = parseNestedData(j);
        this->mLangData.emplace(langName, data);
    }
}

void MultiFileI18N::save(bool nested) {
    if (!fs::exists(mDirPath)) {
        fs::create_directories(mDirPath);
        for (auto& [lc, lv] : this->mDefaultLangData) {
            auto         fileName = fs::path(mDirPath).append(lc + ".json").wstring();
            std::fstream file;
            if (fs::exists(fileName)) {
                file.open(fileName, std::ios::out | std::ios::ate);
            } else {
                file.open(fileName, std::ios::out | std::ios::app);
            }
            if (nested) {
                auto out = nlohmann::json::object();
                for (auto& [k, v] : lv) {
                    auto keys = splitByPattern(&k, ".");
                    auto name = keys.back();
                    keys.pop_back();
                    nlohmann::json& j = out;
                    for (auto& key : keys) {
                        j.emplace(key, nlohmann::json::object());
                        j = j.at(key);
                    }
                    j.emplace(name, v);
                }
                file << nlohmann::json(out).dump(4);
            } else {
                file << nlohmann::json(lv).dump(4);
            }
        }
    }
}

I18N::Type MultiFileI18N::getType() { return Type::MultiFile; }

std::unique_ptr<I18N> MultiFileI18N::clone() {
    auto result                = std::make_unique<MultiFileI18N>();
    result->mDefaultLangData   = this->mDefaultLangData;
    result->mLangData          = this->mLangData;
    result->mDefaultLocaleName = this->mDefaultLocaleName;
    result->mDirPath           = this->mDirPath;
    return result;
}

// endregion

} // namespace ll::i18n
