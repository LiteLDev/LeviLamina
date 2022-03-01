#include <I18nAPI.h>
#include <Utils/StringHelper.h>
#include <Main/LiteLoader.h>
using namespace std;

namespace Translation {
    bool loadImpl(HMODULE hPlugin, const std::string &filePath) {
        try {
            auto content = ReadAllFile(filePath);
            if (!content)
                throw std::exception("Fail to open translation file!");

            PluginOwnData::setImpl<nlohmann::json>(hPlugin, TRANSLATION_DATA_NAME,
                nlohmann::json::parse(*content, nullptr, true, true));
            PluginOwnData::setImpl<std::string>(hPlugin, TRANSLATION_DATA_FILE, filePath);
        }
        catch (const nlohmann::json::exception &e) {
            logger.error("Fail to load translation file <{}> !", filePath);
            logger.error("{}", TextEncoding::toUTF8(e.what()));
            return false;
        } catch (...) {
            logger.error("Fail to load translation file <{}> !", filePath);
            return false;
        }
        return true;
    }
}; // namespace Translation

namespace TextEncoding
{
    const std::unordered_map<Encoding,UINT> Encoding_CodePage_Map = {
        {Encoding::UTF8, CP_UTF8},
        {Encoding::CHINESE_GB, 936},
        {Encoding::GBK, 936},
        {Encoding::GB18030, 54936},
    };

    Encoding getLocalEncoding()
    {
        UINT page = GetACP();
        for (auto& [k, v] : Encoding_CodePage_Map)
        {
            if (v == page)
                return k;
        }
        return default_encoding();
    }

    Encoding detectEncoding(const std::string& text, bool* isReliable)
    {
        bool temp;
        int bytes_consumed;

        return DetectEncoding(
            text.c_str(), text.size(),
            nullptr, nullptr, nullptr,
            UNKNOWN_ENCODING,
            UNKNOWN_LANGUAGE,
            CompactEncDet::WEB_CORPUS,
            false,
            &bytes_consumed,
            isReliable ? isReliable : &temp);
    }

    std::string fromUnicode(const std::wstring &text, Encoding encoding)
    {
        try
        {
            return wstr2str(text, Encoding_CodePage_Map.at(encoding));
        }
        catch (...)
        {
            return "";
        }
    }

    std::wstring toUnicode(const std::string &text, Encoding encoding)
    {
        try
        {
            return str2wstr(text, Encoding_CodePage_Map.at(encoding));
        }
        catch (...)
        {
            return L"";
        }
    }

    std::string toUTF8(const std::string& text)
    {
        return convert(text, detectEncoding(text), Encoding::UTF8);
    }

    std::string toUTF8(const std::string& text, Encoding from)
    {
        return convert(text, from, Encoding::UTF8);
    }

    std::string convert(const std::string &text, Encoding from, Encoding to)
    {
        if (text.empty() || from == to)
            return text;

        wstring uni = toUnicode(text, from);
        if (uni.empty())
            return "";

        return fromUnicode(uni, to);
    }
} // namespace TextEncoding