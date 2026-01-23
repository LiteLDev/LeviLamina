#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/block/BlockComponents.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct BlockPermutation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mCondition;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents> mComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                               mOrderedV1CustomComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPermutation(BlockPermutation const&);
    BlockPermutation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation&&);

    MCAPI ::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
