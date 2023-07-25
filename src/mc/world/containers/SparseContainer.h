#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SparseContainer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARSECONTAINER
public:
    SparseContainer& operator=(SparseContainer const&) = delete;
    SparseContainer(SparseContainer const&)            = delete;
    SparseContainer()                                  = delete;
#endif

public:
    /**
     * @symbol
     * ?addItemNetworkChangedCallback\@SparseContainer\@\@QEAAXW4ContainerEnumName\@\@V?$function\@$$A6AXHAEBVItemStack\@\@0\@Z\@std\@\@\@Z
     */
    MCAPI void
        addItemNetworkChangedCallback(enum class ContainerEnumName, class std::function<void(int, class ItemStack const&, class ItemStack const&)>);
    /**
     * @symbol ?isUsingLegacyScreenTransactions\@SparseContainer\@\@QEBA_NXZ
     */
    MCAPI bool isUsingLegacyScreenTransactions() const;
    /**
     * @symbol ?removeItemNetworkChangedCallback\@SparseContainer\@\@QEAAXW4ContainerEnumName\@\@\@Z
     */
    MCAPI void removeItemNetworkChangedCallback(enum class ContainerEnumName);

    // protected:
    /**
     * @symbol ?_onItemNetworkChanged\@SparseContainer\@\@IEAAXHAEBVItemStack\@\@0\@Z
     */
    MCAPI void _onItemNetworkChanged(int, class ItemStack const&, class ItemStack const&);
    /**
     * @symbol ?_setBackingContainerSlot\@SparseContainer\@\@IEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void _setBackingContainerSlot(int, class ItemStack const&);

protected:
};
