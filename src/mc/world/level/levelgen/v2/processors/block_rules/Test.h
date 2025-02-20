#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
namespace Util { class XXHash; }
namespace br::worldgen::processors::BlockRules { struct AlwaysTrue; }
namespace br::worldgen::processors::BlockRules { struct BlockMatch; }
namespace br::worldgen::processors::BlockRules { struct RandomBlockMatch; }
namespace br::worldgen::processors::BlockRules { struct TagMatch; }
// clang-format on

namespace br::worldgen::processors::BlockRules {

struct Test : public ::br::worldgen::processors::BlockRules::TestType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb7493f;
    // NOLINTEND

public:
    // prevent constructor by default
    Test& operator=(Test const&);
    Test();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::Block const& block, ::IRandom& random) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~Test() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Test(::br::worldgen::processors::BlockRules::Test&&);

    MCAPI Test(::br::worldgen::processors::BlockRules::Test const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::br::worldgen::processors::BlockRules::Test&&);

    MCAPI void* $ctor(::br::worldgen::processors::BlockRules::Test const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::Block const& block, ::IRandom& random) const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockRules
