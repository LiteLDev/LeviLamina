#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/pos_rules/AlwaysTrue.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/AxisAlignedLinear.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::PosRules {

struct Test : public ::br::worldgen::processors::PosRules::TestType {
public:
    // Test inner types define
    using Type = ::std::variant<::br::worldgen::processors::PosRules::AlwaysTrue, ::br::worldgen::processors::PosRules::AxisAlignedLinear>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::std::variant<::br::worldgen::processors::PosRules::AlwaysTrue, ::br::worldgen::processors::PosRules::AxisAlignedLinear>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    Test& operator=(Test const&);
    Test();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::BlockPos inTemplatePos, ::BlockPos worldPos, ::BlockPos worldReference, ::IRandom& random) const /*override*/;

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
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
