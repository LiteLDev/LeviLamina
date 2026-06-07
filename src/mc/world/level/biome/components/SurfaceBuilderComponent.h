#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class ISurfaceBuilder;
// clang-format on

struct SurfaceBuilderComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ISurfaceBuilder const*>> mSurfaceBuilder;
    // NOLINTEND

public:
    // prevent constructor by default
    SurfaceBuilderComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceBuilderComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SurfaceBuilderComponent(::ISurfaceBuilder const& builder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ISurfaceBuilder const& builder);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
