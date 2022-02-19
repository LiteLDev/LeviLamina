#pragma once
//////////////////////////////////////////////////////
// For Internationalization
//
// [Usage - Translation]
//
//  Translation::load("plugins/xxx/lang/zh_CN.json");
//  ...
//  tr("There are {0} days before {1} to come back", 3, "alex");          // return translated string [std::string]
//  trc("There are {0} days before {1} to come back", 3, "alex");         // return translated string [const char*]
//
//  ** In Translation File: plugins/xxx/lang/zh_CN.json
//  {
//       "There are {0} days before {1} to come back": "在{1}回来前还剩{0}天",
//       "...": "...",
//       "...": "..."
//  }
// 
// 
// [Usage - Text Encoding]
// 
//  Encoding local = TextEncoding::getLocalEncoding();                      // Get local encoding
//  Encoding code = TextEncoding::detectEncoding("你好吗？");                // Detect the encoding of text
// 
//  string hello = TextEncoding::fromUnicode(L"Hello");                     // Convert Unicode wstring -> MBCS string
//  wstring world = TextEncoding::toUnicode("World");                       // Convert MBCS string -> Unicode wstring
// 
//  string tomorrow = TextEncoding::toUTF8("明天");                          // Convert MBCS string of any encoding to UTF8 string
//  string tonight = TextEncoding::convert("今天晚上", Encoding::CHINESE_GB, Encoding::UTF8);
//                                                                          // Convert from one MBCS encoding to another
//
//////////////////////////////////////////////////////

#include "Global.h"
#include "LLAPI.h"
#include "LoggerAPI.h"
#include "Utils/FileHelper.h"
#include "Utils/PluginOwnData.h"
#include "third-party/Nlohmann/json.hpp"
#include "third-party/FMT/core.h"
#include "third-party/FMT/os.h"
#include <string>
#include "Utils/StringHelper.h"

#ifdef UNICODE
#include "third-party/compact_enc_det/compact_enc_det.h"
#define UNICODE
#else
#include "third-party/compact_enc_det/compact_enc_det.h"
#endif


#define TRANSLATION_DATA_NAME "_ll_plugin_translation_content"
#define TRANSLATION_DATA_FILE "_ll_plugin_translation_file"

namespace Translation {
LIAPI bool loadImpl(HMODULE hPlugin, const std::string& filePath);

template <bool B, class T = void>
using enable_if_t = typename std::enable_if<B, T>::type;

///////////////// tr Impl /////////////////
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
inline std::string trImpl(HMODULE hPlugin, const S& formatStr, const Args&... args) {
    std::string realFormatStr{formatStr};
    auto& json = PluginOwnData::getImpl<nlohmann::json>(hPlugin, TRANSLATION_DATA_NAME);

    auto res = json.find(formatStr); //改成模糊匹配
    if (res == json.end()) {
        //logger.error("Fail to find translation string \"{}\" !", formatStr);
        //logger.error("In file {}", PluginOwnData::getImpl<std::string>(hPlugin, TRANSLATION_DATA_FILE));
        return formatStr;
    } else {
        realFormatStr = res.value();
    }
    //realFormatStr = FixCurlyBracket(realFormatStr);
    if constexpr (0 == sizeof...(args))
    {
        // Avoid fmt if only one argument
        return realFormatStr;
    }
    else
    {
        return fmt::format(realFormatStr, args...);
    }
}

///////////////// trc Impl /////////////////
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
inline const char* trcImpl(HMODULE hPlugin, const S& formatStr, const Args&... args) {
    std::string res = trImpl(hPlugin, formatStr, args...);
    string name = string(TRANSLATION_DATA_NAME) + "_" + fmt::v8::detail::to_string_view<S>(formatStr).data();
    auto& str = PluginOwnData::setImpl<std::string>(hPlugin, name, res);
    return str.c_str();
}

inline bool load(const std::string& filePath) {
    return loadImpl(GetCurrentModule(), filePath);
}
}; // namespace Translation


// tr(std::string("There are {0} days before {1} to come back"), 3, "alex");
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
inline std::string tr(const S& formatStr, const Args&... args) {
    return Translation::trImpl(GetCurrentModule(), formatStr, args...);
}

// tr("There are {0} days before {1} to come back", 3, "alex");
template <typename... Args>
inline std::string tr(const char* formatStr, const Args&... args) {
    return tr(std::string(formatStr), args...);
}

// trc(std::string("There are {0} days before {1} to come back"), 3, "alex");
template <typename S, typename... Args, Translation::enable_if_t<(fmt::v8::detail::is_string<S>::value), int> = 0>
inline const char* trc(const S& formatStr, const Args&... args) {
    return Translation::trcImpl(GetCurrentModule(), formatStr, args...);
}

// trc("There are {0} days before {1} to come back", 3, "alex");
template <typename... Args>
inline const char* trc(const char* formatStr, const Args&... args) {
    return trc(std::string(formatStr), args...);
}

// For text encoding
namespace TextEncoding
{
    LIAPI Encoding getLocalEncoding();
    LIAPI Encoding detectEncoding(const std::string& text, bool *isReliable = nullptr);

    LIAPI std::string fromUnicode(const std::wstring& text, Encoding to = Encoding::UTF8);
    LIAPI std::wstring toUnicode(const std::string& text, Encoding from = Encoding::UTF8);
    LIAPI std::string toUTF8(const std::string& text);
    LIAPI std::string toUTF8(const std::string& text, Encoding from);

    LIAPI std::string convert(const std::string& text, Encoding from, Encoding to);
}