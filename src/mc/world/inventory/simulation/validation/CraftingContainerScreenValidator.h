#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class CraftingContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    CraftingContainerScreenValidator& operator=(CraftingContainerScreenValidator const&);
    CraftingContainerScreenValidator(CraftingContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftingContainerScreenValidator() = default;

    MCAPI CraftingContainerScreenValidator();

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
