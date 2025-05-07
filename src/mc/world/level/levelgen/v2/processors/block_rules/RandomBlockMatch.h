#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockRules {

struct RandomBlockMatch : public ::br::worldgen::processors::BlockRules::TestType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockLegacy const*> mBlock;
    ::ll::TypedStorage<4, 4, float>                mProbability;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool test(::Block const& block, ::IRandom& random) const /*override*/;

    // vIndex: 2
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~RandomBlockMatch() /*override*/ = default;
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
