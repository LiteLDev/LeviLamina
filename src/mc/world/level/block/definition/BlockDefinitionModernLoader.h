#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/puv/LoadResult.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class BlockDefinitionGroup;
class PackLoadContext;
class SemVersion;
struct BlockDefinition;
namespace Bedrock::Resources { class MinecraftDocumentInput; }
namespace SharedTypes::v1_26_10::BlockDefinition { struct BlockDefinitionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDefinitionModernLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_26_10::BlockDefinition::BlockDefinitionDocument,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_26_10::BlockDefinition::BlockDefinitionDocument>>
        mLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionModernLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockDefinitionModernLoader(
        ::gsl::not_null<::BlockDefinitionGroup*>                  group,
        ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
        ::std::string                                             resourcePackLocation,
        ::gsl::not_null<::PackLoadContext*>                       packLoadContext,
        ::cereal::ReflectionCtx const&                            ctx
    );

    MCAPI ::Puv::LoadResult<::SharedTypes::v1_26_10::BlockDefinition::BlockDefinitionDocument>
    load(::Bedrock::Resources::MinecraftDocumentInput const& input) const;

    MCAPI ~BlockDefinitionModernLoader();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockDefinition blockDefinitionDocumentToBlockDefinitionTransformer(
        ::cereal::ReflectionCtx const&                                      ctx,
        ::SharedTypes::v1_26_10::BlockDefinition::BlockDefinitionDocument&& source,
        ::SemVersion                                                        originalJsonVersion
    );

    MCAPI static ::SharedTypes::v1_26_10::BlockDefinition::BlockDefinitionDocument
    nonCerealizedBlockDefinitionUpgrader(::BlockDefinition&& source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::gsl::not_null<::BlockDefinitionGroup*>                  group,
        ::gsl::not_null<::Core::PathBuffer<::std::string> const*> heapPathBuffer,
        ::std::string                                             resourcePackLocation,
        ::gsl::not_null<::PackLoadContext*>                       packLoadContext,
        ::cereal::ReflectionCtx const&                            ctx
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
