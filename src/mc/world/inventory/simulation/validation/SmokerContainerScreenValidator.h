#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/FurnaceContainerScreenValidator.h"

class SmokerContainerScreenValidator : public ::FurnaceContainerScreenValidator {
public:
    // prevent constructor by default
    SmokerContainerScreenValidator& operator=(SmokerContainerScreenValidator const&);
    SmokerContainerScreenValidator(SmokerContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SmokerContainerScreenValidator() = default;

    MCAPI SmokerContainerScreenValidator();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
