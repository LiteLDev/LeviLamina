#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/Description.h"
#include "mc/deps/shared_types/v1_26_60/block/BlockComponents.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_26_20::BlockDefinition { struct DeprecatedDefinitionEvent; }
namespace SharedTypes::v1_26_60::BlockDefinition { struct BlockPermutation; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60::BlockDefinition {

struct BlockDefinitionDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 496, ::SharedTypes::v1_26_20::BlockDefinition::Description>                    mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_60::BlockDefinition::BlockComponents>                 mComponents;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_26_60::BlockDefinition::BlockPermutation>> mPermutations;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::SharedTypes::v1_26_20::BlockDefinition::DeprecatedDefinitionEvent>>
                                                            mDeprecatedEventHandlers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mOrderedV1CustomComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDefinitionDocument(::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument&&);

    MCNAPI BlockDefinitionDocument(::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument const&);

    MCNAPI ::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument&
    operator=(::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument&&);

    MCNAPI ::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument&
    operator=(::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument const&) const;

    MCNAPI ~BlockDefinitionDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument&&);

    MCNAPI void* $ctor(::SharedTypes::v1_26_60::BlockDefinition::BlockDefinitionDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::BlockDefinition
