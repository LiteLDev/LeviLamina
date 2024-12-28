#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace br::worldgen::processors::BlockEntity { struct Modifier; }
namespace br::worldgen::processors::BlockRules { struct Test; }
namespace br::worldgen::processors::PosRules { struct Test; }
// clang-format on

namespace br::worldgen::processors {

struct RuleSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk139138;
    ::ll::UntypedStorage<8, 72> mUnk62294c;
    ::ll::UntypedStorage<4, 48> mUnk3022cc;
    ::ll::UntypedStorage<8, 8>  mUnk4fa241;
    ::ll::UntypedStorage<8, 56> mUnka4d452;
    // NOLINTEND

public:
    // prevent constructor by default
    RuleSet& operator=(RuleSet const&);
    RuleSet();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RuleSet(::br::worldgen::processors::RuleSet const&);

    MCAPI RuleSet(::br::worldgen::processors::RuleSet&&);

    MCAPI ::br::worldgen::processors::RuleSet& operator=(::br::worldgen::processors::RuleSet&&);

    MCAPI ::br::worldgen::processors::RuleSet withLoc(::br::worldgen::processors::BlockRules::Test loc);

    MCAPI ::br::worldgen::processors::RuleSet withModifier(::br::worldgen::processors::BlockEntity::Modifier modifier);

    MCAPI ::br::worldgen::processors::RuleSet withPos(::br::worldgen::processors::PosRules::Test pos);

    MCAPI ~RuleSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::processors::RuleSet
    from(::br::worldgen::processors::BlockRules::Test input, ::Block const& output);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::br::worldgen::processors::RuleSet const&);

    MCAPI void* $ctor(::br::worldgen::processors::RuleSet&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen::processors
