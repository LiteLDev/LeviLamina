#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/pos_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
namespace br::worldgen::processors::PosRules { struct AlwaysTrue; }
namespace br::worldgen::processors::PosRules { struct AxisAlignedLinear; }
// clang-format on

namespace br::worldgen::processors::PosRules {

struct Test : public ::br::worldgen::processors::PosRules::TestType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 40> mUnk36986d;
    // NOLINTEND

public:
    // prevent constructor by default
    Test& operator=(Test const&);
    Test();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::BlockPos inTemplatePos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const
        /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~Test() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Test(::br::worldgen::processors::PosRules::Test const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::br::worldgen::processors::PosRules::Test const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::BlockPos inTemplatePos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::PosRules
