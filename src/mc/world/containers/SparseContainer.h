#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SparseContainer {

public:
    // prevent constructor by default
    SparseContainer& operator=(SparseContainer const&) = delete;
    SparseContainer(SparseContainer const&)            = delete;
    SparseContainer()                                  = delete;

public:
    /**
     * @symbol
     * ?addItemNetworkChangedCallback\@SparseContainer\@\@QEAAXW4ContainerEnumName\@\@V?$function\@$$A6AXHAEBVItemStack\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI void
        addItemNetworkChangedCallback(enum class ContainerEnumName, class std::function<void(int, class ItemStack const&, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?isUsingLegacyScreenTransactions\@SparseContainer\@\@QEBA_NXZ
     */
    MCAPI bool isUsingLegacyScreenTransactions() const; // NOLINT
    /**
     * @symbol ?removeItemNetworkChangedCallback\@SparseContainer\@\@QEAAXW4ContainerEnumName\@\@\@Z
     */
    MCAPI void removeItemNetworkChangedCallback(enum class ContainerEnumName); // NOLINT

    // protected:
    /**
     * @symbol ?_onItemNetworkChanged\@SparseContainer\@\@IEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void _onItemNetworkChanged(int, class ItemStack const&, class ItemStack const&); // NOLINT
    /**
     * @symbol ?_setBackingContainerSlot\@SparseContainer\@\@IEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void _setBackingContainerSlot(int, class ItemStack const&); // NOLINT

protected:
};
