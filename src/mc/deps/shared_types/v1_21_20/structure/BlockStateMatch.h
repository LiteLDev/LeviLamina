#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct BlockStateMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk823036;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateMatch(BlockStateMatch const&);
    BlockStateMatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockStateMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockStateMatch const&);

    MCNAPI ~BlockStateMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
