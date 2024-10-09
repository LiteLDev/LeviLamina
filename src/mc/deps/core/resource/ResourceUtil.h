#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"

class ResourceUtil {
public:
    // prevent constructor by default
    ResourceUtil& operator=(ResourceUtil const&);
    ResourceUtil(ResourceUtil const&);
    ResourceUtil();

public:
    // NOLINTBEGIN
    MCAPI static ::ResourceFileSystem pathFromString(std::string_view name);

    MCAPI static std::string_view stringFromPath(::ResourceFileSystem fileSystem);

    // NOLINTEND
};
