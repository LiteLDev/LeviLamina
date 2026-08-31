#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_26_20/block/BlockComponents.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct BlockPermutation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                     mCondition;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::BlockDefinition::BlockComponents> mComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mOrderedV1CustomComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPermutation& operator=(BlockPermutation const&);
    BlockPermutation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPermutation(::SharedTypes::v1_26_20::BlockDefinition::BlockPermutation const&);

    MCAPI ~BlockPermutation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::BlockPermutation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
