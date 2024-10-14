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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
