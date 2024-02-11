#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StructureTemplateRegistrationContext {
public:
    // prevent constructor by default
    StructureTemplateRegistrationContext& operator=(StructureTemplateRegistrationContext const&);
    StructureTemplateRegistrationContext();

public:
    // NOLINTBEGIN
    // symbol: ??0StructureTemplateRegistrationContext@@QEAA@$$QEAU0@@Z
    MCAPI StructureTemplateRegistrationContext(struct StructureTemplateRegistrationContext&&);

    // symbol: ??0StructureTemplateRegistrationContext@@QEAA@AEBU0@@Z
    MCAPI StructureTemplateRegistrationContext(struct StructureTemplateRegistrationContext const&);

    // symbol: ??1StructureTemplateRegistrationContext@@QEAA@XZ
    MCAPI ~StructureTemplateRegistrationContext();

    // NOLINTEND
};
