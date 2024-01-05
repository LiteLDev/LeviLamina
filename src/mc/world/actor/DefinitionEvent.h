#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DefinitionEvent {
public:
    // prevent constructor by default
    DefinitionEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0DefinitionEvent@@QEAA@$$QEAV0@@Z
    MCAPI DefinitionEvent(class DefinitionEvent&&);

    // symbol: ??0DefinitionEvent@@QEAA@AEBV0@@Z
    MCAPI DefinitionEvent(class DefinitionEvent const&);

    // symbol:
    // ?evaluateEvent@DefinitionEvent@@QEBAXAEAVRenderParams@@AEAV?$vector@UDefinitionModifier@@V?$allocator@UDefinitionModifier@@@std@@@std@@@Z
    MCAPI void evaluateEvent(class RenderParams& params, std::vector<struct DefinitionModifier>& modifications) const;

    // symbol: ??4DefinitionEvent@@QEAAAEAV0@AEBV0@@Z
    MCAPI class DefinitionEvent& operator=(class DefinitionEvent const&);

    // symbol: ??1DefinitionEvent@@QEAA@XZ
    MCAPI ~DefinitionEvent();

    // NOLINTEND
};
