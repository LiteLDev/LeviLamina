#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_26_20/block/BlockComponents.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    MCNAPI BlockPermutation(::SharedTypes::v1_26_20::BlockDefinition::BlockPermutation const&);

    MCNAPI ~BlockPermutation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::BlockPermutation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
