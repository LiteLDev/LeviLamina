#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/BlockComponents.h"
#include "mc/deps/shared_types/v1_26_20/block/Description.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockPermutation; }
namespace SharedTypes::v1_26_20::BlockDefinition { struct DeprecatedDefinitionEvent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20::BlockDefinition {

struct BlockDefinitionDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 456, ::SharedTypes::v1_26_20::BlockDefinition::Description>                    mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::BlockDefinition::BlockComponents>                 mComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_20::BlockDefinition::BlockPermutation>> mPermutations;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent>>
                                                            mDeprecatedEventHandlers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mOrderedV1CustomComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinitionDocument();

    MCAPI BlockDefinitionDocument(::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument const&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&&);

    MCAPI ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&
    operator=(::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument const&);

    MCAPI ~BlockDefinitionDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
