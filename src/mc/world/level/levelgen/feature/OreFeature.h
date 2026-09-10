#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/levelgen/feature/ReplaceRule.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/brstd/once_flag.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockType;
struct ReplaceRule;
// clang-format on

class OreFeature : public ::IFeature {
public:
    // OreFeature inner types declare
    // clang-format off
    struct ReplaceRulesAccelerator;
    struct SphereData;
    struct ScratchData;
    // clang-format on

    // OreFeature inner types define
    struct ReplaceRulesAccelerator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Block const*, ::std::vector<::BlockType const*>>>> mRules;
        // NOLINTEND
    };

    struct SphereData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mCenter;
        ::ll::TypedStorage<4, 4, float>   mHalfRSqr;
        ::ll::TypedStorage<4, 4, float>   mHalfR;
        // NOLINTEND
    };

    struct ScratchData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::OreFeature::SphereData>>  mAllSpheres;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreFeature::SphereData*>> mSpheres;
        ::ll::TypedStorage<4, 4, uint>                                      mActiveSpheres;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                    mCount;
    ::ll::TypedStorage<4, 4, float>                                  mCountf;
    ::ll::TypedStorage<4, 4, float>                                  mCountfInv;
    ::ll::TypedStorage<4, 4, float>                                  mDiscardChanceOnAirExposure;
    ::ll::TypedStorage<8, 24, ::std::vector<::ReplaceRule>>          mReplaceRules;
    ::ll::TypedStorage<4, 4, ::brstd::once_flag>                     mRulesAcceleratorInitFlag;
    ::ll::TypedStorage<8, 24, ::OreFeature::ReplaceRulesAccelerator> mRulesAccelerator;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OreFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
