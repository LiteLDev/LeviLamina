#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockRules {

struct BlockStateMatch : public ::br::worldgen::processors::BlockRules::TestType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*> mBlockState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const& block, ::IRandom&) const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~BlockStateMatch() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::Block const& block, ::IRandom&) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockRules
