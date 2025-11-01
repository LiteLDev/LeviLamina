#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct BlockMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk65018c;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMatch& operator=(BlockMatch const&);
    BlockMatch(BlockMatch const&);
    BlockMatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockMatch& operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockMatch&&);

    MCNAPI ~BlockMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
