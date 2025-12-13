#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Axis.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::PosRules {

struct AxisAlignedLinear : public ::br::worldgen::processors::PosRules::TestType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          mMinChance;
    ::ll::TypedStorage<4, 4, float>          mMaxChance;
    ::ll::TypedStorage<4, 4, int>            mMinDist;
    ::ll::TypedStorage<4, 4, int>            mMaxDist;
    ::ll::TypedStorage<4, 4, ::Facing::Axis> mAxis;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::BlockPos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~AxisAlignedLinear() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::BlockPos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::PosRules
