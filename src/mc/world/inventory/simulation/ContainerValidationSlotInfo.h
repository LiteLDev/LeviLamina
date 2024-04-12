#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationSlotInfo {
public:
    // prevent constructor by default
    ContainerValidationSlotInfo& operator=(ContainerValidationSlotInfo const&);
    ContainerValidationSlotInfo(ContainerValidationSlotInfo const&);
    ContainerValidationSlotInfo();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ContainerValidationSlotInfo@@QEAA@AEBUContainerValidationSlotData@@V?$shared_ptr@VSimpleSparseContainer@@@std@@V?$shared_ptr@$$CBVContainerValidationBase@@@3@@Z
    MCAPI ContainerValidationSlotInfo(
        struct ContainerValidationSlotData const&,
        std::shared_ptr<class SimpleSparseContainer>         container,
        std::shared_ptr<class ContainerValidationBase const> validator
    );

    // symbol: ?getItem@ContainerValidationSlotInfo@@QEBAAEBVItemStack@@XZ
    MCAPI class ItemStack const& getItem() const;

    // symbol: ??BContainerValidationSlotInfo@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // symbol: ?setItem@ContainerValidationSlotInfo@@QEAAXAEBVItemStack@@@Z
    MCAPI void setItem(class ItemStack const& item);

    // symbol: ??1ContainerValidationSlotInfo@@QEAA@XZ
    MCAPI ~ContainerValidationSlotInfo();

    // NOLINTEND
};
