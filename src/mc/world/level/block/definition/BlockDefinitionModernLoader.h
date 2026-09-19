#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/definition/block_definition_loader_traits/Loader.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct BlockDefinition;
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockDefinitionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDefinitionModernLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 272, ::BlockDefinitionLoaderTraits::Loader> mLoader;
    ::ll::TypedStorage<1, 1, bool>                                    mUpcomingCreatorFeaturesEnabled;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockDefinition blockDefinitionDocumentToBlockDefinitionTransformer(
        ::cereal::ReflectionCtx const&                                      ctx,
        ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument&& source,
        ::SemVersion                                                        originalJsonVersion
    );
    // NOLINTEND
};
