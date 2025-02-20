#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
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

    enum class AttachCondition : uchar {
        MayAttachTo    = 0,
        MayNotAttachTo = 1,
    };

    struct WeightedBlockDescriptor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 184> mUnk32ff74;
        ::ll::UntypedStorage<4, 4>   mUnkb978f3;
        // NOLINTEND

    public:
        // prevent constructor by default
        WeightedBlockDescriptor& operator=(WeightedBlockDescriptor const&);
        WeightedBlockDescriptor(WeightedBlockDescriptor const&);
        WeightedBlockDescriptor();

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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk555a95;
    ::ll::UntypedStorage<1, 1>   mUnk3fe127;
    ::ll::UntypedStorage<1, 1>   mUnkcbde6a;
    ::ll::UntypedStorage<1, 1>   mUnk59b549;
    ::ll::UntypedStorage<1, 1>   mUnke1aa00;
    ::ll::UntypedStorage<1, 1>   mUnk770dd3;
    ::ll::UntypedStorage<4, 4>   mUnk947893;
    ::ll::UntypedStorage<8, 216> mUnk1d8d80;
    ::ll::UntypedStorage<8, 216> mUnk7888e6;
    ::ll::UntypedStorage<8, 24>  mUnke73e15;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleBlockFeature& operator=(SingleBlockFeature const&);
    SingleBlockFeature(SingleBlockFeature const&);
    SingleBlockFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SingleBlockFeature() /*override*/;

    // vIndex: 1
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
