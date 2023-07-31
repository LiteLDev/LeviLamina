#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourceUtil {

public:
    // prevent constructor by default
    ResourceUtil& operator=(ResourceUtil const&) = delete;
    ResourceUtil(ResourceUtil const&)            = delete;
    ResourceUtil()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?pathFromString\@ResourceUtil\@\@SA?AW4ResourceFileSystem\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI static enum class ResourceFileSystem pathFromString(std::string_view);
    /**
     * @symbol
     * ?stringFromPath\@ResourceUtil\@\@SA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@W4ResourceFileSystem\@\@\@Z
     */
    MCAPI static std::string_view stringFromPath(enum class ResourceFileSystem);
    // NOLINTEND
};
