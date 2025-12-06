#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/BlockStateMatch.h"
#include "mc/world/level/levelgen/v2/processors/RandomBlockStateMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/AlwaysTrue.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/BlockMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/RandomBlockMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/TagMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
namespace Util { struct XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockRules {

struct Test : public ::br::worldgen::processors::BlockRules::TestType {
public:
    // Test inner types define
    using Type = ::std::variant<
        ::br::worldgen::processors::BlockRules::AlwaysTrue,
        ::br::worldgen::processors::BlockRules::BlockMatch,
        ::br::worldgen::processors::BlockRules::RandomBlockMatch,
        ::br::worldgen::processors::BlockRules::TagMatch,
        ::br::worldgen::processors::BlockRules::BlockStateMatch,
        ::br::worldgen::processors::BlockRules::RandomBlockStateMatch>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::variant<
            ::br::worldgen::processors::BlockRules::AlwaysTrue,
            ::br::worldgen::processors::BlockRules::BlockMatch,
            ::br::worldgen::processors::BlockRules::RandomBlockMatch,
            ::br::worldgen::processors::BlockRules::TagMatch,
            ::br::worldgen::processors::BlockRules::BlockStateMatch,
            ::br::worldgen::processors::BlockRules::RandomBlockStateMatch>>
        mData;
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockRules
