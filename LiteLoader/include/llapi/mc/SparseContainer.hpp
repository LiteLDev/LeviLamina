/**
 * @file  SparseContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SparseContainer.
 *
 */
class SparseContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPARSECONTAINER
public:
    class SparseContainer& operator=(class SparseContainer const &) = delete;
    SparseContainer(class SparseContainer const &) = delete;
    SparseContainer() = delete;
#endif

public:
    /**
     * @hash   1198004075
     * @symbol ?_isSlotInRange@SparseContainer@@QEBA_NH@Z
     */
    MCAPI bool _isSlotInRange(int) const;
    /**
     * @hash   1977677787
     * @symbol ?addItemNetworkChangedCallback@SparseContainer@@QEAAXW4ContainerEnumName@@V?$function@$$A6AXHAEBVItemStack@@0@Z@std@@@Z
     */
    MCAPI void addItemNetworkChangedCallback(enum ContainerEnumName, class std::function<void (int, class ItemStack const &, class ItemStack const &)>);
    /**
     * @hash   1552003036
     * @symbol ?isUsingLegacyScreenTransactions@SparseContainer@@QEBA_NXZ
     */
    MCAPI bool isUsingLegacyScreenTransactions() const;
    /**
     * @hash   -643521686
     * @symbol ?removeItemNetworkChangedCallback@SparseContainer@@QEAAXW4ContainerEnumName@@@Z
     */
    MCAPI void removeItemNetworkChangedCallback(enum ContainerEnumName);

//protected:
    /**
     * @hash   -322691162
     * @symbol ?_onItemNetworkChanged@SparseContainer@@IEAAXHAEBVItemStack@@0@Z
     */
    MCAPI void _onItemNetworkChanged(int, class ItemStack const &, class ItemStack const &);
    /**
     * @hash   1630969150
     * @symbol ?_setBackingContainerSlot@SparseContainer@@IEAAXHAEBVItemStack@@@Z
     */
    MCAPI void _setBackingContainerSlot(int, class ItemStack const &);

protected:

};