#include "ll/api/i18n/I18n.h"
#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/StringUtils.h"

#include "nlohmann/json.hpp"

namespace fs = std::filesystem;

using ll::file_utils::u8path;
using ll::string_utils::splitByPattern;

namespace ll::i18n {
const std::array<std::string, 2> GENERAL_LANGUAGES = {"en", "zh"};


class I18N {
    struct char_pointer_hash {
        auto operator()(char const* ptr) const noexcept { return ::std::hash<::std::string_view>{}(ptr); }
    };
    using transparent_string_hash =
        TransparentOverloaded<::std::hash<::std::string>, ::std::hash<::std::string_view>, char_pointer_hash>;

public:
    using SubLangData = std::unordered_map<std::string, std::string, transparent_string_hash, ::std::equal_to<>>;
    using LangData    = std::unordered_map<std::string, SubLangData, transparent_string_hash, ::std::equal_to<>>;

    enum class Type : schar {
        None,
        SingleFile,
        MultiFile,
        Custom,
    };

    LangData    mLangData{};
    LangData    mDefaultLangData{};
    std::string mDefaultLocaleName;

    virtual ~I18N() = default;

    /**
     * @brief Get the translation of the specified key.
     *
     * @param  key          The language key
     * @param  localeName   The language code like en_US,zh_CN({} => this->mDefaultLocaleName)
     * @return std::string  The translation
     * @see    I18N::mDefaultLocaleName
     */
    LLNDAPI std::string_view get(std::string_view key, std::string_view localeName = {});

    /**
     * @brief Get the type of the i18n object.
     *
     * @return  The type of the i18n object
     */
    LLNDAPI virtual Type getType() const = 0;
};

class SingleFileI18N : public I18N {

public:
    std::filesystem::path mFilePath;

    LLAPI void load(std::filesystem::path const& filePath);
    LLAPI void save();

    SingleFileI18N() = default;
    /**
     * @brief Construct a SingleFileI18N object.
     *
     * @param filePath         The path to the i18n file(json)
     * @param defaultLocaleName  The default locale name
     * @param defaultLangData  The default translation data
     */
    explicit SingleFileI18N(
        std::filesystem::path const& filePath,
        std::string                  defaultLocaleName = {},
        LangData                     defaultLangData   = {}
    ) {
        this->mDefaultLangData   = std::move(defaultLangData);
        this->mDefaultLocaleName = std::move(defaultLocaleName);
        load(filePath);
    }
    /// Copy constructor
    SingleFileI18N(SingleFileI18N const& other) = default;
    ~SingleFileI18N() override                  = default;

    LLNDAPI Type getType() const override;
};

class MultiFileI18N : public I18N {

public:
    std::filesystem::path mDirPath;

    LLAPI void load(std::filesystem::path const& dirPath);
    LLAPI void save(bool nested = false);

    MultiFileI18N() = default;
    /**
     * @brief Construct a heavy I18N object.
     *
     * @param dirPath          The path to the i18n dir
     * @param defaultLocaleName  The default locale name
     * @param defaultLangData  The default translation data
     */
    explicit MultiFileI18N(
        std::filesystem::path const& dirPath,
        std::string                  defaultLocaleName = {},
        LangData                     defaultLangData   = {}
    ) {
        this->mDefaultLangData   = std::move(defaultLangData);
        this->mDefaultLocaleName = std::move(defaultLocaleName);
        load(dirPath);
    }
    /// Copy constructor
    MultiFileI18N(MultiFileI18N const& other) = default;
    ~MultiFileI18N() override                 = default;

    LLNDAPI Type getType() const override;
};

#pragma region I18N

bool findTranslation(
    I18N::LangData const& langData,
    std::string_view      key,
    std::string_view      localeName,
    std::string_view      localeType,
    std::string_view&     dest
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
        if (name.length() < 2) {
            continue;
        }
        if (name.substr(0, 2) == localeType) {
            if (auto it = translations.find(key); it != translations.end()) {
                dest = it->second;
                return true;
            }
        }
    }
    return false;
}

std::string_view I18N::get(std::string_view key, std::string_view localeName) {
    if (localeName.empty()) {
        if (mDefaultLocaleName.empty()) {
            localeName = getDefaultLocaleCode();
        } else {
            localeName = mDefaultLocaleName;
        }
    }
    auto             localeType = localeName.substr(0, 2);
    std::string_view result;
    // Try finding the translation in loaded language data
    if (findTranslation(mLangData, key, localeName, localeType, result)) {
        return result;
    }
    // If not found, try falling back to the default language data
    if (!mDefaultLangData.empty() && findTranslation(mDefaultLangData, key, localeName, localeType, result)) {
        return result;
    }
    // Try finding general languages
    for (auto& lang : GENERAL_LANGUAGES) {
        if (findTranslation(mLangData, key, lang, lang, result)) {
            return result;
        }
        if (!mDefaultLangData.empty() && findTranslation(mDefaultLangData, key, lang, lang, result)) {
            return result;
        }
    }
    // Use the first (dictionary order) language data
    if (!mLangData.empty()) {
        auto& lang = mLangData.begin()->second;
        if (auto it = lang.find(key); it != lang.end()) {
            return it->second;
        }
    }
    // Finally, still not found, return the key
    return key;
}

#pragma endregion

#pragma region SingleFileI18N

void SingleFileI18N::load(std::filesystem::path const& filePath) {
    this->mFilePath = filePath;
    if (!fs::exists(filePath)) {
        fs::create_directories(filePath.parent_path());
        std::fstream   file(filePath, std::ios::out | std::ios::app);
        nlohmann::json j = mDefaultLangData;
        file << std::setw(4) << j; // Dump default language data
        file.close();
        mLangData = mDefaultLangData;
        return; // Skip parsing
    }
    std::fstream   file(filePath, std::ios::in);
    nlohmann::json j;
    file >> j;
    mLangData = j.get<LangData>();
    file.close();
    // Replenish the missing keys
    for (auto& [lang, dat] : mLangData) {
        if (mDefaultLangData.count(lang)) {
            for (auto& [k, v] : mDefaultLangData[lang]) {
                if (!dat.count(k)) {
                    dat[k] = v;
                }
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

I18N::Type SingleFileI18N::getType() const { return Type::SingleFile; }

#pragma endregion

#pragma region MultiFileI18N

I18N::SubLangData parseNestedData(nlohmann::json const& j, std::string const& prefix = {}) {
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

void MultiFileI18N::load(std::filesystem::path const& dirPath) {
    this->mDirPath = dirPath;
    if (!fs::exists(dirPath) || fs::is_empty(dirPath)) {
        if (this->mDefaultLangData.empty()) {
            return;
        }
        this->mLangData = this->mDefaultLangData;
        save();
        return;
    }
    for (auto& f : fs::directory_iterator(dirPath)) {
        if (!f.is_regular_file() || f.path().extension() != ".json") {
            continue;
        }
        auto langName = f.path().stem().string();
        std::replace(langName.begin(), langName.end(), '_', '-');
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
            auto langName = lc;
            std::replace(langName.begin(), langName.end(), '-', '_');

            auto         fileName = mDirPath.append(langName + ".json").wstring();
            std::fstream file;
            if (fs::exists(fileName)) {
                file.open(fileName, std::ios::out | std::ios::ate);
            } else {
                file.open(fileName, std::ios::out | std::ios::app);
            }
            if (nested) {
                auto out = nlohmann::json::object();
                for (auto& [k, v] : lv) {
                    auto keys = splitByPattern(k, ".");
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

I18N::Type MultiFileI18N::getType() const { return Type::MultiFile; }

#pragma endregion
} // namespace ll::i18n
