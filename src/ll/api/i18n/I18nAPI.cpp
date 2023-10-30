#include "ll/api/i18n/I18nAPI.h"

#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"

#include "stringapiset.h"

#include "compact_enc_det/compact_enc_det.h"
#define UNICODE

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

namespace encoding {
const std::unordered_map<Encoding, UINT> Encoding_CodePage_Map = {
    {Encoding::ISO_8859_1,           28591  },
    {Encoding::ISO_8859_2,           28592  },
    {Encoding::ISO_8859_3,           28593  },
    {Encoding::ISO_8859_4,           28594  },
    {Encoding::ISO_8859_5,           28595  },
    {Encoding::ISO_8859_6,           28596  },
    {Encoding::ISO_8859_7,           28597  },
    {Encoding::ISO_8859_8,           28598  },
    {Encoding::ISO_8859_9,           28599  },
 //{Encoding::ISO_8859_10,},             //?
    {Encoding::JAPANESE_EUC_JP,      51932  },
    {Encoding::JAPANESE_SHIFT_JIS,   932    },
    {Encoding::JAPANESE_JIS,         932    },
    {Encoding::CHINESE_BIG5,         950    },
    {Encoding::CHINESE_GB,           936    },
    {Encoding::CHINESE_EUC_CN,       51936  },
    {Encoding::KOREAN_EUC_KR,        51949  },
 //{Encoding::UNICODE, },
    {Encoding::CHINESE_EUC_DEC,      51936  },
    {Encoding::CHINESE_CNS,          20000  },
    {Encoding::CHINESE_BIG5_CP950,   950    },
    {Encoding::JAPANESE_CP932,       932    },
    {Encoding::UTF8,                 CP_UTF8},
    {Encoding::UNKNOWN_ENCODING,     CP_ACP },
    {Encoding::ASCII_7BIT,           28591  },
    {Encoding::RUSSIAN_KOI8_R,       20866  },
    {Encoding::RUSSIAN_CP1251,       1251   },
    {Encoding::MSFT_CP1252,          1252   },
    {Encoding::RUSSIAN_KOI8_RU,      20866  },
    {Encoding::MSFT_CP1250,          1250   },
    {Encoding::ISO_8859_15,          28605  },
    {Encoding::MSFT_CP1254,          1254   },
    {Encoding::MSFT_CP1257,          1257   },
    {Encoding::ISO_8859_11,          10021  }, //?
    {Encoding::MSFT_CP874,           874    },
    {Encoding::MSFT_CP1256,          1256   },
    {Encoding::MSFT_CP1255,          1255   },
    {Encoding::ISO_8859_8_I,         38598  },
    {Encoding::HEBREW_VISUAL,        28598  },
    {Encoding::CZECH_CP852,          852    },
 //{Encoding::CZECH_CSN_369103, },       //?
    {Encoding::MSFT_CP1253,          1253   },
    {Encoding::RUSSIAN_CP866,        866    },
    {Encoding::ISO_8859_13,          28603  },
    {Encoding::ISO_2022_KR,          50225  },
    {Encoding::GBK,                  936    },
    {Encoding::GB18030,              54936  },
    {Encoding::BIG5_HKSCS,           950    },
    {Encoding::ISO_2022_CN,          50227  },
    {Encoding::TSCII,                57004  }, //?
    {Encoding::TAMIL_MONO,           57004  }, //?
    {Encoding::TAMIL_BI,             57004  }, //?
  //{Encoding::JAGRAN, },                 //?
    {Encoding::MACINTOSH_ROMAN,      10000  },
    {Encoding::UTF7,                 CP_UTF7},
    {Encoding::UTF16BE,              1201   },
    {Encoding::UTF16LE,              1200   },
    {Encoding::UTF32BE,              12001  },
    {Encoding::UTF32LE,              12000  },
 //{Encoding::BINARYENC, },
    {Encoding::HZ_GB_2312,           52936  },
 //{Encoding::TAM_ELANGO, },             //?
  //{Encoding::TAM_LTTMBARANI, },         //?
  //{Encoding::TAM_SHREE, },              //?
  //{Encoding::TAM_TBOOMIS, },            //?
  //{Encoding::TAM_TMNEWS, },             //?
  //{Encoding::TAM_WEBTAMIL, },           //?
    {Encoding::KDDI_SHIFT_JIS,       932    },
    {Encoding::DOCOMO_SHIFT_JIS,     932    },
    {Encoding::SOFTBANK_SHIFT_JIS,   932    },
    {Encoding::KDDI_ISO_2022_JP,     50220  },
    {Encoding::SOFTBANK_ISO_2022_JP, 50220  },
};
///////////////////////////// Encoding-CodePage Map /////////////////////////////

Encoding getLocalEncoding() {
    UINT page = GetACP();
    for (auto& [k, v] : Encoding_CodePage_Map) {
        if (v == page) return k;
    }
    return default_encoding();
}

Encoding detectEncoding(std::string const& text, bool* isReliable) {
    bool temp;
    int  bytes_consumed;

    return CompactEncDet::DetectEncoding(
        text.c_str(),
        (int)text.size(),
        nullptr,
        nullptr,
        nullptr,
        UNKNOWN_ENCODING,
        UNKNOWN_LANGUAGE,
        CompactEncDet::WEB_CORPUS,
        false,
        &bytes_consumed,
        isReliable ? isReliable : &temp
    );
}

std::string fromUnicode(std::wstring const& text, Encoding encoding) {
    try {
        return wstr2str(text, Encoding_CodePage_Map.at(encoding));
    } catch (...) { return ""; }
}

std::wstring toUnicode(std::string const& text, Encoding encoding) {
    try {
        return str2wstr(text, Encoding_CodePage_Map.at(encoding));
    } catch (...) { return L""; }
}

std::string toUTF8(std::string const& text) { return convert(text, detectEncoding(text), Encoding::UTF8); }

std::string toUTF8(std::string const& text, Encoding from) { return convert(text, from, Encoding::UTF8); }

std::string convert(std::string const& text, Encoding from, Encoding to) {
    if (text.empty() || from == to) return text;

    std::wstring uni = toUnicode(text, from);
    if (uni.empty()) return "";

    return fromUnicode(uni, to);
}

} // namespace encoding
