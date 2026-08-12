#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class SemVersion;
struct BlockDefinition;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockDefinitionDocument; }
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
            ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument>>
        mLoader;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockDefinition blockDefinitionDocumentToBlockDefinitionTransformer(
        ::cereal::ReflectionCtx const&                                      ctx,
        ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&& source,
        ::SemVersion                                                        originalJsonVersion
    );

    MCAPI static ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument
    nonCerealizedBlockDefinitionUpgrader(::BlockDefinition&& source);
    // NOLINTEND
};
