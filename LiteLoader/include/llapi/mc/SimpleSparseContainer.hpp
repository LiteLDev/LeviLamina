/**
 * @file  SimpleSparseContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1135492905
     * @symbol  ?containerContentChanged\@SimpleSparseContainer\@\@EEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int);
    /**
     * @hash   780716680
     * @symbol  ?getContainerSize\@SimpleSparseContainer\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   500649571
     * @symbol  ?getItem\@SimpleSparseContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   1040997831
     * @symbol  ?getMaxStackSize\@SimpleSparseContainer\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1036757114
     * @symbol  ?serverInitItemStackIds\@SimpleSparseContainer\@\@EEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   84597458
     * @symbol  ?setItem\@SimpleSparseContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   2123302479
     * @symbol  ?startOpen\@SimpleSparseContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -1237242097
     * @symbol  ?stopOpen\@SimpleSparseContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
#endif
    /**
     * @hash   -1460931252
     * @symbol  ??0SimpleSparseContainer\@\@QEAA\@AEAVContainer\@\@W4SparseContainerBackingSetType\@\@V?$unique_ptr\@VISparseContainerSetListener\@\@U?$default_delete\@VISparseContainerSetListener\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VIPlayerContainerSetter\@\@U?$default_delete\@VIPlayerContainerSetter\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI SimpleSparseContainer(class Container &, enum class SparseContainerBackingSetType, std::unique_ptr<class ISparseContainerSetListener>, std::unique_ptr<class IPlayerContainerSetter>);
    /**
     * @hash   1992200038
     * @symbol  ?clearItem\@SimpleSparseContainer\@\@QEAAXH\@Z
     */
    MCAPI void clearItem(int);
    /**
     * @hash   -309895387
     * @symbol  ?pushAllToBackingContainer\@SimpleSparseContainer\@\@QEAAXXZ
     */
    MCAPI void pushAllToBackingContainer();

//private:
    /**
     * @hash   -1273204967
     * @symbol  ?_setBackingContainerSlot\@SimpleSparseContainer\@\@AEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void _setBackingContainerSlot(int, class ItemStack const &);

private:

};