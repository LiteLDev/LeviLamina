#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/registry/SurfaceBuilderType.h"

// auto generated forward declare list
// clang-format off
class ISurfaceBuilder;
// clang-format on

class SurfaceBuilderRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::SurfaceBuilderType, ::std::unique_ptr<::ISurfaceBuilder>>> mSurfaceBuilders;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void forEachSurfaceBuilder(::std::function<bool(::ISurfaceBuilder&)> callback) const;
    // NOLINTEND

};
