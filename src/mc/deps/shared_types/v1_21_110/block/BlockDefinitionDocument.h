#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/block/BlockComponents.h"
#include "mc/deps/shared_types/v1_21_110/block/Description.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_110::BlockDefinition { struct BlockPermutation; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct BlockDefinitionDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 408, ::SharedTypes::v1_21_110::BlockDefinition::Description>                    mDescription;
    ::ll::TypedStorage<8, 56, ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents>                 mComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_110::BlockDefinition::BlockPermutation>> mPermutations;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_S static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
