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
    ::ll::UntypedStorage<8, 192> mUnk1e2148;
    ::ll::UntypedStorage<1, 1>   mUnk7ebd12;
    ::ll::UntypedStorage<4, 4>   mUnke10816;
    // NOLINTEND

public:
    // prevent constructor by default
    MountainAttributes& operator=(MountainAttributes const&);
    MountainAttributes(MountainAttributes const&);
    MountainAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MountainAttributes() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
