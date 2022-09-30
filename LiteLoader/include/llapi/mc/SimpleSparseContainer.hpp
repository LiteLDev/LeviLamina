/**
 * @file  SimpleSparseContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SimpleSparseContainer.
 *
 */
class SimpleSparseContainer {

#define AFTER_EXTRA
// Add Member There
public:
inline class ItemStack const& getItem(int a0) const
{
    class ItemStack const& (SimpleSparseContainer::*rv)(int) const;
    *((void**)&rv) = dlsym("?getItem@SimpleSparseContainer@@UEBAAEBVItemStack@@H@Z");
    return (this->*rv)(std::forward<int>(a0));
}
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLESPARSECONTAINER
public:
    class SimpleSparseContainer& operator=(class SimpleSparseContainer const &) = delete;
    SimpleSparseContainer(class SimpleSparseContainer const &) = delete;
    SimpleSparseContainer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLESPARSECONTAINER
    /**
     * @hash   -1839769287
     * @symbol ?containerContentChanged@SimpleSparseContainer@@EEAAXH@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @hash   2100406408
     * @symbol ?getContainerSize@SimpleSparseContainer@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   1820323923
     * @symbol ?getItem@SimpleSparseContainer@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -1934310489
     * @symbol ?getMaxStackSize@SimpleSparseContainer@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1296534634
     * @symbol ?serverInitItemStackIds@SimpleSparseContainer@@EEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1404225682
     * @symbol ?setItem@SimpleSparseContainer@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -852067345
     * @symbol ?startOpen@SimpleSparseContainer@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   82355375
     * @symbol ?stopOpen@SimpleSparseContainer@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
#endif
    /**
     * @hash   -141180020
     * @symbol ??0SimpleSparseContainer@@QEAA@AEAVContainer@@W4SparseContainerBackingSetType@@V?$unique_ptr@VISparseContainerSetListener@@U?$default_delete@VISparseContainerSetListener@@@std@@@std@@V?$unique_ptr@VIPlayerContainerSetter@@U?$default_delete@VIPlayerContainerSetter@@@std@@@4@@Z
     */
    MCAPI SimpleSparseContainer(class Container &, enum class SparseContainerBackingSetType, std::unique_ptr<class ISparseContainerSetListener>, std::unique_ptr<class IPlayerContainerSetter>);
    /**
     * @hash   -983062154
     * @symbol ?clearItem@SimpleSparseContainer@@QEAAXH@Z
     */
    MCAPI void clearItem(int);
    /**
     * @hash   1009748213
     * @symbol ?pushAllToBackingContainer@SimpleSparseContainer@@QEAAXXZ
     */
    MCAPI void pushAllToBackingContainer();

//private:
    /**
     * @hash   46515513
     * @symbol ?_setBackingContainerSlot@SimpleSparseContainer@@AEAAXHAEBVItemStack@@@Z
     */
    MCAPI void _setBackingContainerSlot(int, class ItemStack const &);

private:

};