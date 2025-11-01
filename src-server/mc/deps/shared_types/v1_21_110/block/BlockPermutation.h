#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct BlockPermutation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk17002f;
    ::ll::UntypedStorage<8, 56> mUnk3ab6ef;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPermutation(BlockPermutation const&);
    BlockPermutation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation&&);

    MCNAPI ::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation&
    operator=(::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
