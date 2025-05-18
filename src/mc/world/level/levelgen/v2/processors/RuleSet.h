#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_entity/Modifier.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/Test.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/Test.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors {

struct RuleSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::br::worldgen::processors::BlockRules::Test>      mInputPredicate;
    ::ll::TypedStorage<8, 72, ::br::worldgen::processors::BlockRules::Test>      mLocPredicate;
    ::ll::TypedStorage<4, 48, ::br::worldgen::processors::PosRules::Test>        mPosPredicate;
    ::ll::TypedStorage<8, 8, ::Block const*>                                     mOutputState;
    ::ll::TypedStorage<8, 56, ::br::worldgen::processors::BlockEntity::Modifier> mBlockEntityModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    RuleSet& operator=(RuleSet const&);
    RuleSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RuleSet(::br::worldgen::processors::RuleSet const&);

    MCNAPI RuleSet(::br::worldgen::processors::RuleSet&&);

    MCNAPI void appendMetadataKey(::Util::XXHash& hash) const;

    MCNAPI ::br::worldgen::processors::RuleSet& operator=(::br::worldgen::processors::RuleSet&&);

    MCNAPI ::br::worldgen::processors::RuleSet withLoc(::br::worldgen::processors::BlockRules::Test loc);

    MCNAPI ::br::worldgen::processors::RuleSet withModifier(::br::worldgen::processors::BlockEntity::Modifier modifier);

    MCNAPI ::br::worldgen::processors::RuleSet withPos(::br::worldgen::processors::PosRules::Test pos);

    MCNAPI ~RuleSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::processors::RuleSet
    from(::br::worldgen::processors::BlockRules::Test input, ::Block const& output);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::br::worldgen::processors::RuleSet const&);

    MCNAPI void* $ctor(::br::worldgen::processors::RuleSet&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen::processors
