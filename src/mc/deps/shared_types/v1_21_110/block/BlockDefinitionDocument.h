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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mOrderedV1CustomComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionDocument& operator=(BlockDefinitionDocument const&);
    BlockDefinitionDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinitionDocument(::SharedTypes::v1_21_110::BlockDefinition::BlockDefinitionDocument const&);

    MCAPI ~BlockDefinitionDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_110::BlockDefinition::BlockDefinitionDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
