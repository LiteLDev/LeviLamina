#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ISurfaceBuilder;
// clang-format on

class SurfaceBuilderRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk94cbce;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceBuilderRegistry& operator=(SurfaceBuilderRegistry const&);
    SurfaceBuilderRegistry(SurfaceBuilderRegistry const&);
    SurfaceBuilderRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forEachSurfaceBuilder(::std::function<bool(::ISurfaceBuilder&)> callback) const;
    // NOLINTEND
};
