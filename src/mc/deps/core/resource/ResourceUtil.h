#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/common/ResourceFileSystem.h"

class ResourceUtil {
public:
    // prevent constructor by default
    ResourceUtil& operator=(ResourceUtil const&);
    ResourceUtil(ResourceUtil const&);
    ResourceUtil();

public:
    // NOLINTBEGIN
    // symbol:
    // ?pathFromString@ResourceUtil@@SA?AW4ResourceFileSystem@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static ::ResourceFileSystem pathFromString(std::string_view name);

    // symbol:
    // ?stringFromPath@ResourceUtil@@SA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4ResourceFileSystem@@@Z
    MCAPI static std::string_view stringFromPath(::ResourceFileSystem fileSystem);

    // NOLINTEND
};
