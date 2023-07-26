#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimpleSparseContainer {

public:
    // prevent constructor by default
    SimpleSparseContainer& operator=(SimpleSparseContainer const&) = delete;
    SimpleSparseContainer(SimpleSparseContainer const&)            = delete;
    SimpleSparseContainer()                                        = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLESPARSECONTAINER
    /**
     * @symbol ?containerContentChanged\@SimpleSparseContainer\@\@EEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int); // NOLINT
    /**
     * @symbol ?getContainerSize\@SimpleSparseContainer\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@SimpleSparseContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@SimpleSparseContainer\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?serverInitItemStackIds\@SimpleSparseContainer\@\@EEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@SimpleSparseContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@SimpleSparseContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@SimpleSparseContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
#endif
    /**
     * @symbol
     * ??0SimpleSparseContainer\@\@QEAA\@AEAVContainer\@\@W4SparseContainerBackingSetType\@\@V?$unique_ptr\@VISparseContainerSetListener\@\@U?$default_delete\@VISparseContainerSetListener\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VIPlayerContainerSetter\@\@U?$default_delete\@VIPlayerContainerSetter\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI
    SimpleSparseContainer(class Container&, enum class SparseContainerBackingSetType, std::unique_ptr<class ISparseContainerSetListener>, std::unique_ptr<class IPlayerContainerSetter>); // NOLINT
    /**
     * @symbol ?clearItem\@SimpleSparseContainer\@\@QEAAXH\@Z
     */
    MCAPI void clearItem(int); // NOLINT
    /**
     * @symbol ?pushAllToBackingContainer\@SimpleSparseContainer\@\@QEAAXXZ
     */
    MCAPI void pushAllToBackingContainer(); // NOLINT

    // private:
    /**
     * @symbol ?_setBackingContainerSlot\@SimpleSparseContainer\@\@AEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void _setBackingContainerSlot(int, class ItemStack const&); // NOLINT

private:
};
