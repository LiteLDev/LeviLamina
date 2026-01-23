#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct BlockMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<0>> mBlockName;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMatch(BlockMatch const&);
    BlockMatch();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockMatch&&);

    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockMatch const&);

    MCAPI ~BlockMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
