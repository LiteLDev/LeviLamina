#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class StringConversions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_STRINGCONVERSIONS
public:
    StringConversions& operator=(StringConversions const&) = delete;
    StringConversions(StringConversions const&)            = delete;
    StringConversions()                                    = delete;
#endif

public:
    /**
     * @symbol ?toUtf8\@StringConversions\@Core\@\@SAHPEB_WHPEADH\@Z
     */
    MCAPI static int toUtf8(wchar_t const*, int, char*, int);
    /**
     * @symbol
     * ?toUtf8\@StringConversions\@Core\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEB_WH\@Z
     */
    MCAPI static std::string toUtf8(wchar_t const*, int);
    /**
     * @symbol
     * ?toUtf8\@StringConversions\@Core\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$allocator\@_W\@2\@\@4\@\@Z
     */
    MCAPI static std::string
    toUtf8(class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>> const&);
    /**
     * @symbol
     * ?toWide\@StringConversions\@Core\@\@SA?AV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$allocator\@_W\@2\@\@std\@\@PEBDH\@Z
     */
    MCAPI static class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>>
    toWide(char const*, int);
    /**
     * @symbol
     * ?toWide\@StringConversions\@Core\@\@SA?AV?$basic_string\@_WU?$char_traits\@_W\@std\@\@V?$allocator\@_W\@2\@\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@4\@\@Z
     */
    MCAPI static class std::basic_string<wchar_t, struct std::char_traits<wchar_t>, class std::allocator<wchar_t>>
        toWide(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?toWide\@StringConversions\@Core\@\@SAHPEBDHPEA_WH\@Z
     */
    MCAPI static int toWide(char const*, int, wchar_t*, int);
};

}; // namespace Core
