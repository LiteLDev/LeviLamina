#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/validation/ContainerScreenValidatorBase.h"

class FurnaceContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    FurnaceContainerScreenValidator& operator=(FurnaceContainerScreenValidator const&);
    FurnaceContainerScreenValidator(FurnaceContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FurnaceContainerScreenValidator();

    // vIndex: 1
    virtual std::shared_ptr<class ContainerValidationCommitObject>
    postCommitItemRemoved(::ContainerEnumName containerEnumName, int slot, class ItemStack const& item);

    MCAPI FurnaceContainerScreenValidator();

    // NOLINTEND
};
