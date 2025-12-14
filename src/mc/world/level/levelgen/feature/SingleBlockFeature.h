#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class SingleBlockFeature : public ::IFeature {
public:
    // SingleBlockFeature inner types declare
    // clang-format off
    struct WeightedBlockDescriptor;
    // clang-format on

    // SingleBlockFeature inner types define
    enum class AttachCondition : uchar {
        MayAttachTo    = 0,
        MayNotAttachTo = 1,
    };

    enum class CheckDirection : uchar {
        Top      = 0,
        Bottom   = 1,
        North    = 2,
        East     = 3,
        South    = 4,
        West     = 5,
        All      = 6,
        Sides    = 7,
        Diagonal = 8,
        Count    = 9,
    };

    struct WeightedBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 184, ::BlockDescriptor> mBlockDescriptor;
        ::ll::TypedStorage<4, 4, float>               mWeight;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~WeightedBlockDescriptor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    using PlacementConditions =
        ::Bedrock::DenseEnumMap<::SingleBlockFeature::CheckDirection, ::std::vector<::BlockDescriptor>, 9>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SingleBlockFeature::WeightedBlockDescriptor>> mPossibleBlocks;
    ::ll::TypedStorage<
        8,
        216,
        ::Bedrock::DenseEnumMap<::SingleBlockFeature::CheckDirection, ::std::vector<::BlockDescriptor>, 9>>
        mMayAttachTo;
    ::ll::TypedStorage<
        8,
        216,
        ::Bedrock::DenseEnumMap<::SingleBlockFeature::CheckDirection, ::std::vector<::BlockDescriptor>, 9>>
                                                                mMayNotAttachTo;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayReplace;
    ::ll::TypedStorage<4, 4, int>                               mMinAttachedSides;
    ::ll::TypedStorage<1, 1, bool>                              mEnforcePlacementRules;
    ::ll::TypedStorage<1, 1, bool>                              mEnforceSurvivabilityRules;
    ::ll::TypedStorage<1, 1, bool>                              mAutoRotate;
    ::ll::TypedStorage<1, 1, bool>                              mRandomRotation;
    ::ll::TypedStorage<1, 1, bool>                              mEnforceAttachmentRules;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SingleBlockFeature() /*override*/;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Block const*
    _mayAttach(::BlockDescriptor const& blockDescriptor, ::IBlockWorldGenAPI& target, ::BlockPos const& pos) const;

    MCAPI bool _mayNotAttach(::IBlockWorldGenAPI& target, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
