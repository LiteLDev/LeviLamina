#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Puv::v1_20_50 {

struct DefinitionTrigger {
public:
    // prevent constructor by default
    DefinitionTrigger& operator=(DefinitionTrigger const&);
    DefinitionTrigger(DefinitionTrigger const&);
    DefinitionTrigger();

public:
    // NOLINTBEGIN
    // symbol: ?bindType@DefinitionTrigger@v1_20_50@Puv@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};

}; // namespace Puv::v1_20_50
