#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class GrindstoneContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    GrindstoneContainerScreenValidator& operator=(GrindstoneContainerScreenValidator const&);
    GrindstoneContainerScreenValidator(GrindstoneContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GrindstoneContainerScreenValidator() = default;

    MCAPI GrindstoneContainerScreenValidator();

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
