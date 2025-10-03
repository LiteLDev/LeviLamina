#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct CappedSurfaceAttributes : public ::BiomeComponentBase {
public:
    // CappedSurfaceAttributes inner types declare
    // clang-format off
    struct MaterialLayer;
    // clang-format on

    // CappedSurfaceAttributes inner types define
    struct MaterialLayer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4166de;
        ::ll::UntypedStorage<8, 8> mUnkf958c1;
        // NOLINTEND

    public:
        // prevent constructor by default
        MaterialLayer& operator=(MaterialLayer const&);
        MaterialLayer(MaterialLayer const&);
        MaterialLayer();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::CappedSurfaceAttributes::MaterialLayer>> mFloorMaterials;
    ::ll::TypedStorage<8, 24, ::std::vector<::CappedSurfaceAttributes::MaterialLayer>> mCeilingMaterials;
    ::ll::TypedStorage<8, 8, ::Block const*>                                           mSeaMaterial;
    ::ll::TypedStorage<8, 8, ::Block const*>                                           mFoundationMaterial;
    ::ll::TypedStorage<8, 8, ::Block const*>                                           mBeachMaterial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CappedSurfaceAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void initializeNoise(uint levelSeed);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
