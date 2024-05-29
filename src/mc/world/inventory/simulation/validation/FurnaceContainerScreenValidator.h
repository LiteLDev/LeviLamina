#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/simulation/ContainerScreenValidatorBase.h"

class FurnaceContainerScreenValidator : public ::ContainerScreenValidatorBase {
public:
    // prevent constructor by default
    FurnaceContainerScreenValidator& operator=(FurnaceContainerScreenValidator const&);
    FurnaceContainerScreenValidator(FurnaceContainerScreenValidator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FurnaceContainerScreenValidator@@UEAA@XZ
    virtual ~FurnaceContainerScreenValidator();

    // vIndex: 1, symbol:
    // ?postCommitItemRemoved@FurnaceContainerScreenValidator@@UEAA?AV?$shared_ptr@VContainerValidationCommitObject@@@std@@W4ContainerEnumName@@HAEBVItemStack@@@Z
    virtual std::shared_ptr<class ContainerValidationCommitObject>
    postCommitItemRemoved(::ContainerEnumName containerEnumName, int slot, class ItemStack const& item);

    // symbol: ??0FurnaceContainerScreenValidator@@QEAA@XZ
    MCAPI FurnaceContainerScreenValidator();

    // NOLINTEND
};
