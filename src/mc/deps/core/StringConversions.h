#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class StringConversions {
public:
    // prevent constructor by default
    StringConversions& operator=(StringConversions const&);
    StringConversions(StringConversions const&);
    StringConversions();

public:
    // NOLINTBEGIN
    // symbol:
    // ?toUtf8@StringConversions@Core@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@4@@Z
    MCAPI static std::string toUtf8(std::wstring const& src);

    // symbol:
    // ?toUtf8@StringConversions@Core@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEB_WH@Z
    MCAPI static std::string toUtf8(wchar_t const*, int);

    // symbol: ?toUtf8@StringConversions@Core@@SAHPEB_WHPEADH@Z
    MCAPI static int toUtf8(wchar_t const* src, int, char* dest, int max);

    // symbol:
    // ?toWide@StringConversions@Core@@SA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    MCAPI static std::wstring toWide(std::string_view);

    // symbol:
    // ?toWide@StringConversions@Core@@SA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEBDH@Z
    MCAPI static std::wstring toWide(char const*, int);

    // symbol: ?toWide@StringConversions@Core@@SAHPEBDHPEA_WH@Z
    MCAPI static int toWide(char const* src, int, wchar_t* dest, int max);

    // NOLINTEND
};

}; // namespace Core
