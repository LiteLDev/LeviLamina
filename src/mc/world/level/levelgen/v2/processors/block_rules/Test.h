#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_rules/AlwaysTrue.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/BlockMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/RandomBlockMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/TagMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockRules {

struct Test : public ::br::worldgen::processors::BlockRules::TestType {
public:
    // Test inner types define
    using Type = ::std::variant<
        ::br::worldgen::processors::BlockRules::AlwaysTrue,
        ::br::worldgen::processors::BlockRules::BlockMatch,
        ::br::worldgen::processors::BlockRules::RandomBlockMatch,
        ::br::worldgen::processors::BlockRules::TagMatch>;

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
            ::br::worldgen::processors::BlockRules::TagMatch>>
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
    MCNAPI Test(::br::worldgen::processors::BlockRules::Test&&);

    MCNAPI Test(::br::worldgen::processors::BlockRules::Test const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::br::worldgen::processors::BlockRules::Test&&);

    MCNAPI void* $ctor(::br::worldgen::processors::BlockRules::Test const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::Block const& block, ::IRandom& random) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockRules
