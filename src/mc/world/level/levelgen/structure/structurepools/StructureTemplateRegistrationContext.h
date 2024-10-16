#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StructureTemplateRegistrationContext {
public:
    // prevent constructor by default
    StructureTemplateRegistrationContext& operator=(StructureTemplateRegistrationContext const&);
    StructureTemplateRegistrationContext();

public:
    // NOLINTBEGIN
    MCAPI StructureTemplateRegistrationContext(struct StructureTemplateRegistrationContext&&);

    MCAPI StructureTemplateRegistrationContext(struct StructureTemplateRegistrationContext const&);

    MCAPI ~StructureTemplateRegistrationContext();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct StructureTemplateRegistrationContext&&);

    MCAPI void* ctor$(struct StructureTemplateRegistrationContext const&);

    MCAPI void dtor$();

    // NOLINTEND
};
