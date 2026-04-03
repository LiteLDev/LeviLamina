#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentGroupDescription;
namespace SharedTypes::v1_26_10::BlockDefinition { struct BlockComponents; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockDefinitionDocumentComponentTransformer {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void transform(
        ::cereal::ReflectionCtx const&                                   ctx,
        ::std::string const&                                             name,
        ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
        ::BlockComponentGroupDescription&                                blockComponentGroupDescription
    );
    // NOLINTEND
};
