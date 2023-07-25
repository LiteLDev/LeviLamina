#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceUtil {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEUTIL
public:
    ResourceUtil& operator=(ResourceUtil const&) = delete;
    ResourceUtil(ResourceUtil const&)            = delete;
    ResourceUtil()                               = delete;
#endif

public:
    /**
     * @symbol
     * ?pathFromString\@ResourceUtil\@\@SA?AW4ResourceFileSystem\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI static enum class ResourceFileSystem
        pathFromString(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol
     * ?stringFromPath\@ResourceUtil\@\@SA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCAPI static class std::basic_string_view<char, struct std::char_traits<char>>
        stringFromPath(enum class ResourceFileSystem);
};
