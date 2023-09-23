#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DefinitionTrigger {
public:
    // prevent constructor by default
    DefinitionTrigger(DefinitionTrigger const&);
    DefinitionTrigger();

public:
    // NOLINTBEGIN
    // symbol: ?canTrigger@DefinitionTrigger@@QEBA_NAEAVRenderParams@@@Z
    MCAPI bool canTrigger(class RenderParams&) const;

    // symbol: ??4DefinitionTrigger@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class DefinitionTrigger& operator=(class DefinitionTrigger&&);

    // symbol: ??4DefinitionTrigger@@QEAAAEAV0@AEBV0@@Z
    MCAPI class DefinitionTrigger& operator=(class DefinitionTrigger const&);

    // symbol: ??1DefinitionTrigger@@QEAA@XZ
    MCAPI ~DefinitionTrigger();

    // symbol: ?bindType@DefinitionTrigger@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
