#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

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
        ::ll::UntypedStorage<8, 184> mUnk804c17;
        ::ll::UntypedStorage<1, 1>   mUnk4f320b;
        ::ll::UntypedStorage<1, 1>   mUnk3f0cc1;
        ::ll::UntypedStorage<1, 1>   mUnk30bf99;
        ::ll::UntypedStorage<1, 1>   mUnk882b62;
        // NOLINTEND

    public:
        // prevent constructor by default
        SteepMaterial& operator=(SteepMaterial const&);
        SteepMaterial(SteepMaterial const&);
        SteepMaterial();
    };

    struct TopSlideSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk8953d9;
        // NOLINTEND

    public:
        // prevent constructor by default
        TopSlideSettings& operator=(TopSlideSettings const&);
        TopSlideSettings(TopSlideSettings const&);
        TopSlideSettings();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::MountainAttributes::SteepMaterial>  mSteepMaterial;
    ::ll::TypedStorage<1, 1, ::MountainAttributes::TopSlideSettings> mTopSlideSettings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MountainAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool hasSlopes() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
