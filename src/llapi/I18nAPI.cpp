#include "llapi/I18nAPI.h"
#include "llapi/utils/StringHelper.h"
#include "liteloader/LiteLoader.h"
#include <stringapiset.h>
using namespace std;
namespace fs = std::filesystem;

std::vector<std::string> GeneralLanguages{
    "en", "zh"
};

std::string I18nBase::get(const std::string& key, const std::string& langCode) {
    auto& langc = (langCode.empty() ? defaultLocaleName : langCode);
    auto langType = langc.substr(0, 2);
    if (langData.count(langc)) { // If there is lang data for the language
        auto& lang = langData[langc];
        if (lang.count(key)) { // If there is matched key in the language data
            return lang[key];
        }
    }
    // Search for the similar language in langData
    for (auto& [lc, ld] : langData) {
        if (lc.length() < 2) {
            continue;
        }
        if (lc.substr(0, 2) == langType) {
            if (ld.count(key)) {
                return ld[key];
            }
        }
    }
    if (!defaultLangData.empty()) {
        // If not found, try falling back to the default language data
        if (defaultLangData.count(langc)) {
            auto& lang = defaultLangData[langc];
            if (lang.count(key)) {
                return lang[key]; // Fall back
            }
        }
        // Search for the similar language
        for (auto& [lc, ld] : defaultLangData) {
            if (lc.length() < 2) {
                continue;
            }
            if (lc.substr(0, 2) == langType) {
                if (ld.count(key)) {
                    return ld[key];
                }
            }
        }
    }
    // Try finding general languages
    for (auto& lang : GeneralLanguages) {
        for (auto& [lc, ld] : langData) {
            if (lc.length() < 2) {
                continue;
            }
            if (lc.substr(0, 2) == lang) {
                if (ld.count(key)) {
                    return ld[key];
                }
            }
        }
    }
    // Finally, not found, return the key
    return key;
}

std::string I18nBase::getDefaultLocaleName() {
    return this->defaultLocaleName;
}

I18nBase* I18nBase::clone() {
    if (getType() == Type::SingleFile) {
        return new SingleFileI18N(*(SingleFileI18N*)this);
    } else if (getType() == Type::MultiFile) {
        return new MultiFileI18N(*(MultiFileI18N*)this);
    }
    return nullptr;
}

////////////////////////////////////////// SingleFileI18N //////////////////////////////////////////

void SingleFileI18N::load(const std::string& fileName) {
    this->filePath = fileName;
    if (!fs::exists(fileName)) {
        fs::create_directories(fs::path(fileName).parent_path());
        std::fstream file(fileName, std::ios::out | std::ios::app);
        nlohmann::json j = defaultLangData;
        file << std::setw(4) << j; // Dump default language data
        file.close();
        langData = defaultLangData;
        return; // Skip parsing
    }
    std::fstream file(fileName, std::ios::in);
    nlohmann::json j;
    file >> j;
    langData = j.get<LangData>();
    file.close();
    // Replenish the missing keys
    for (auto& [lang, dat] : langData) {
        if (defaultLangData.count(lang)) {
            for (auto& [k, v] : defaultLangData[lang]) {
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
    if (fs::exists(filePath))
        file.open(filePath, std::ios::out | std::ios::ate);
    else
        file.open(filePath, std::ios::out | std::ios::app);
    nlohmann::json j = langData;
    file << std::setw(4) << j;
    file.close();
}

I18nBase::Type SingleFileI18N::getType() {
    return Type::SingleFile;
}


////////////////////////////////////////// MultiFileI18N //////////////////////////////////////////

I18nBase::SubLangData NestedHelper(const nlohmann::json& j, const std::string& prefix = "") {
    I18nBase::SubLangData data;
    if (!j.is_object()) {
        // throw std::exception("Error when parsing I18nBase data: The value must be object!");
        return data; // Empty
    }
    for (auto it = j.begin(); it != j.end(); ++it) {
        auto& val = it.value();
        if (val.is_object()) {
            data.merge(NestedHelper(val, prefix + it.key() + '.'));
        } else if (val.is_string()) {
            data.emplace(prefix + it.key(), val.get<std::string>());
        } else {
            continue; // Ignore
        }
    }
    return data;
}

void MultiFileI18N::load(const std::string& dirName) {
    this->dirPath = dirName;
    if (!fs::exists(dirName) || fs::is_empty(dirName)) {
        if (this->defaultLangData.empty()) {
            ll::logger.error("Language files NOT FOUND! This may cause many errors!");
            return;
        }
        this->langData = this->defaultLangData;
        save();
        return;
    }
    for (auto& f : fs::directory_iterator(dirName)) {
        if (!f.is_regular_file() || f.path().extension() != ".json") {
            continue;
        }
        auto langName = f.path().stem().string();
        std::fstream file(f.path().wstring(), std::ios::in);
        nlohmann::json j;
        file >> j;
        auto data = NestedHelper(j);
        this->langData.emplace(langName, data);
    }
}

void MultiFileI18N::save(bool nested) {
    if (!fs::exists(dirPath)) {
        fs::create_directories(dirPath);
        for (auto& [lc, lv] : this->defaultLangData) {
            auto fileName = fs::path(dirPath).append(lc + ".json").wstring();
            std::fstream file;
            if (fs::exists(fileName)) {
                file.open(fileName, std::ios::out | std::ios::ate);
            } else {
                file.open(fileName, std::ios::out | std::ios::app);     
            }
            if (nested) {
                auto out = nlohmann::json::object();
                for (auto& [k, v] : lv) {
                    auto keys = SplitStrWithPattern(k, ".");
                    std::string name = keys.back();
                    keys.pop_back();
                    nlohmann::json* j = &out;
                    for (auto& key : keys) {
                        j->emplace(key, nlohmann::json::object());
                        j = &j->at(key);
                    }
                    j->emplace(name, v);
                }
                file << nlohmann::json(out).dump(4);
            } else {
                file << nlohmann::json(lv).dump(4);
            }
        }
    }
}

I18nBase::Type MultiFileI18N::getType() {
    return Type::MultiFile;
}


namespace Translation {

I18nBase* loadI18nImpl(HMODULE hPlugin, const std::string& path, const std::string& defaultLocaleName,
               const I18nBase::LangData& defaultLangData) {
    try {
        I18nBase* res = nullptr;
        if (path.ends_with('/') || path.ends_with('\\') || fs::is_directory(path)) { // Directory
            res = new MultiFileI18N(path, defaultLocaleName, defaultLangData);
        } else {
            res = new SingleFileI18N(path, defaultLocaleName, defaultLangData);
        }
        return &PluginOwnData::setWithoutNewImpl<I18nBase>(hPlugin, I18nBase::POD_KEY, res);
    } catch (const std::exception& e) {
        ll::logger.error("Fail to load translation file <{}> !", path);
        ll::logger.error("- {}", TextEncoding::toUTF8(e.what()));
    } catch (...) { ll::logger.error("Fail to load translation file <{}> !", path); }
    return nullptr;
}

I18nBase* loadFromImpl(HMODULE hPlugin, HMODULE hTarget) {
    try {
        auto& i18n = PluginOwnData::getImpl<I18nBase>(hTarget, I18nBase::POD_KEY);
        return &PluginOwnData::setWithoutNewImpl<I18nBase>(hPlugin, I18nBase::POD_KEY, i18n.clone());
    } catch (const std::exception& e) {
        ll::logger.error("Fail to load translation from another plugin!", e.what());
        ll::logger.error("- {}", e.what());
    } catch (...) { ll::logger.error("Fail to load translation from another plugin!"); }
    return nullptr;
}

}; // namespace Translation


///////////////////////////// Encoding-CodePage Map /////////////////////////////
#ifdef UNICODE
#include <compact_enc_det/compact_enc_det.h>
#define UNICODE
#else
#include <compact_enc_det/compact_enc_det.h>
#endif
#undef UNICODE
namespace TextEncoding {
const std::unordered_map<Encoding, UINT> Encoding_CodePage_Map = {
    {Encoding::ISO_8859_1, 28591},
    {Encoding::ISO_8859_2, 28592},
    {Encoding::ISO_8859_3, 28593},
    {Encoding::ISO_8859_4, 28594},
    {Encoding::ISO_8859_5, 28595},
    {Encoding::ISO_8859_6, 28596},
    {Encoding::ISO_8859_7, 28597},
    {Encoding::ISO_8859_8, 28598},
    {Encoding::ISO_8859_9, 28599},
    //{Encoding::ISO_8859_10,},             //?
    {Encoding::JAPANESE_EUC_JP, 51932},
    {Encoding::JAPANESE_SHIFT_JIS, 932},
    {Encoding::JAPANESE_JIS, 932},
    {Encoding::CHINESE_BIG5, 950},
    {Encoding::CHINESE_GB, 936},
    {Encoding::CHINESE_EUC_CN, 51936},
    {Encoding::KOREAN_EUC_KR, 51949},
    //{Encoding::UNICODE, },
    {Encoding::CHINESE_EUC_DEC, 51936},
    {Encoding::CHINESE_CNS, 20000},
    {Encoding::CHINESE_BIG5_CP950, 950},
    {Encoding::JAPANESE_CP932, 932},
    {Encoding::UTF8, CP_UTF8},
    {Encoding::UNKNOWN_ENCODING, CP_ACP},
    {Encoding::ASCII_7BIT, 28591},
    {Encoding::RUSSIAN_KOI8_R, 20866},
    {Encoding::RUSSIAN_CP1251, 1251},
    {Encoding::MSFT_CP1252, 1252},
    {Encoding::RUSSIAN_KOI8_RU, 20866},
    {Encoding::MSFT_CP1250, 1250},
    {Encoding::ISO_8859_15, 28605},
    {Encoding::MSFT_CP1254, 1254},
    {Encoding::MSFT_CP1257, 1257},
    {Encoding::ISO_8859_11, 10021}, //?
    {Encoding::MSFT_CP874, 874},
    {Encoding::MSFT_CP1256, 1256},
    {Encoding::MSFT_CP1255, 1255},
    {Encoding::ISO_8859_8_I, 38598},
    {Encoding::HEBREW_VISUAL, 28598},
    {Encoding::CZECH_CP852, 852},
    //{Encoding::CZECH_CSN_369103, },       //?
    {Encoding::MSFT_CP1253, 1253},
    {Encoding::RUSSIAN_CP866, 866},
    {Encoding::ISO_8859_13, 28603},
    {Encoding::ISO_2022_KR, 50225},
    {Encoding::GBK, 936},
    {Encoding::GB18030, 54936},
    {Encoding::BIG5_HKSCS, 950},
    {Encoding::ISO_2022_CN, 50227},
    {Encoding::TSCII, 57004},      //?
    {Encoding::TAMIL_MONO, 57004}, //?
    {Encoding::TAMIL_BI, 57004},   //?
    //{Encoding::JAGRAN, },                 //?
    {Encoding::MACINTOSH_ROMAN, 10000},
    {Encoding::UTF7, CP_UTF7},
    {Encoding::UTF16BE, 1201},
    {Encoding::UTF16LE, 1200},
    {Encoding::UTF32BE, 12001},
    {Encoding::UTF32LE, 12000},
    //{Encoding::BINARYENC, },
    {Encoding::HZ_GB_2312, 52936},
    //{Encoding::TAM_ELANGO, },             //?
    //{Encoding::TAM_LTTMBARANI, },         //?
    //{Encoding::TAM_SHREE, },              //?
    //{Encoding::TAM_TBOOMIS, },            //?
    //{Encoding::TAM_TMNEWS, },             //?
    //{Encoding::TAM_WEBTAMIL, },           //?
    {Encoding::KDDI_SHIFT_JIS, 932},
    {Encoding::DOCOMO_SHIFT_JIS, 932},
    {Encoding::SOFTBANK_SHIFT_JIS, 932},
    {Encoding::KDDI_ISO_2022_JP, 50220},
    {Encoding::SOFTBANK_ISO_2022_JP, 50220},
};
}
#define UNICODE
///////////////////////////// Encoding-CodePage Map /////////////////////////////

namespace TextEncoding {
Encoding getLocalEncoding() {
    UINT page = GetACP();
    for (auto& [k, v] : Encoding_CodePage_Map) {
        if (v == page)
            return k;
    }
    return default_encoding();
}

Encoding detectEncoding(const std::string& text, bool* isReliable) {
    bool temp;
    int bytes_consumed;

    return DetectEncoding(
        text.c_str(), (int)text.size(),
        nullptr, nullptr, nullptr,
        UNKNOWN_ENCODING,
        UNKNOWN_LANGUAGE,
        CompactEncDet::WEB_CORPUS,
        false,
        &bytes_consumed,
        isReliable ? isReliable : &temp);
}

std::string fromUnicode(const std::wstring& text, Encoding encoding) {
    try {
        return wstr2str(text, Encoding_CodePage_Map.at(encoding));
    } catch (...) {
        return "";
    }
}

std::wstring toUnicode(const std::string& text, Encoding encoding) {
    try {
        return str2wstr(text, Encoding_CodePage_Map.at(encoding));
    } catch (...) {
        return L"";
    }
}

std::string toUTF8(const std::string& text) {
    return convert(text, detectEncoding(text), Encoding::UTF8);
}

std::string toUTF8(const std::string& text, Encoding from) {
    return convert(text, from, Encoding::UTF8);
}

std::string convert(const std::string& text, Encoding from, Encoding to) {
    if (text.empty() || from == to)
        return text;

    wstring uni = toUnicode(text, from);
    if (uni.empty())
        return "";

    return fromUnicode(uni, to);
}
} // namespace TextEncoding
