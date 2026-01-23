#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct MountainAttributes : public ::BiomeComponentBase {
public:
    // MountainAttributes inner types declare
    // clang-format off
    struct SteepMaterial;
    struct TopSlideSettings;
    // clang-format on

    // MountainAttributes inner types define
    struct SteepMaterial {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Block const*> mSteep;
        ::ll::TypedStorage<1, 1, bool>           mNorthSlopes;
        ::ll::TypedStorage<1, 1, bool>           mSouthSlopes;
        ::ll::TypedStorage<1, 1, bool>           mWestSlopes;
        ::ll::TypedStorage<1, 1, bool>           mEastSlopes;
        // NOLINTEND
    };

    struct TopSlideSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mEnabled;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::MountainAttributes::SteepMaterial>   mSteepMaterial;
    ::ll::TypedStorage<1, 1, ::MountainAttributes::TopSlideSettings> mTopSlideSettings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MountainAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool hasSlopes() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
