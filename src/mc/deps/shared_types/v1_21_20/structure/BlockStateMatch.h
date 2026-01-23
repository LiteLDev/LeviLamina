#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_60/block/BlockSpecifier.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct BlockStateMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::SharedTypes::v1_20_60::BlockSpecifier> mBlockState;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateMatch(BlockStateMatch const&);
    BlockStateMatch();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockStateMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockStateMatch const&);

    MCAPI ~BlockStateMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
