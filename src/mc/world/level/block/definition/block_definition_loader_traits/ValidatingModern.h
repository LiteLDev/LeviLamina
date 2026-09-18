#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/resource_processing/category/SharedSlicesTraits.h"

// auto generated forward declare list
// clang-format off
namespace BlockDefinitionValidate { struct ValidateContext; }
namespace Puv { class Logger; }
namespace SharedTypes::v1_26_20::BlockDefinition { struct BlockDefinitionDocument; }
// clang-format on

namespace BlockDefinitionLoaderTraits {

struct ValidatingModern : public ::Bedrock::Resources::SharedSlicesTraits<11> {
public:
    // ValidatingModern inner types define
    using CustomValidateData = ::BlockDefinitionValidate::ValidateContext;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void validateFunction(
        ::SharedTypes::v1_26_20::BlockDefinition::BlockDefinitionDocument const& document,
        ::BlockDefinitionValidate::ValidateContext const&                        validateContext,
        ::Puv::Logger&                                                           logger
    );
    // NOLINTEND
};

} // namespace BlockDefinitionLoaderTraits
