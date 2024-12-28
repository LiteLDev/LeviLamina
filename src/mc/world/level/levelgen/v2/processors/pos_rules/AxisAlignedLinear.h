#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<4, 4> mUnkc28b6e;
    ::ll::UntypedStorage<4, 4> mUnkb8a9f6;
    ::ll::UntypedStorage<4, 4> mUnk9f49d3;
    ::ll::UntypedStorage<4, 4> mUnkb4448d;
    ::ll::UntypedStorage<4, 4> mUnk9f8710;
    // NOLINTEND

public:
    // prevent constructor by default
    AxisAlignedLinear& operator=(AxisAlignedLinear const&);
    AxisAlignedLinear(AxisAlignedLinear const&);
    AxisAlignedLinear();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::BlockPos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~AxisAlignedLinear() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::BlockPos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::PosRules
