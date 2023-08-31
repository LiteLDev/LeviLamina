#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SparseContainerBackingSetType.h"

class SimpleSparseContainer {

public:
#define ENABLE_VIRTUAL_FAKESYMBOL_SIMPLESPARSECONTAINER

    // prevent constructor by default
    SimpleSparseContainer& operator=(SimpleSparseContainer const&) = delete;
    SimpleSparseContainer(SimpleSparseContainer const&)            = delete;
    SimpleSparseContainer()                                        = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLESPARSECONTAINER
    /**
     * @symbol ?containerContentChanged\@SimpleSparseContainer\@\@EEAAXH\@Z
     */
    MCVAPI void containerContentChanged(int32_t);
    /**
     * @symbol ?getContainerSize\@SimpleSparseContainer\@\@UEBAHXZ
     */
    MCVAPI int32_t getContainerSize() const;
    /**
     * @symbol ?getItem\@SimpleSparseContainer\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int32_t) const;
    /**
     * @symbol ?getMaxStackSize\@SimpleSparseContainer\@\@UEBAHXZ
     */
    MCVAPI int32_t getMaxStackSize() const;
    /**
     * @symbol
     * ?serverInitItemStackIds\@SimpleSparseContainer\@\@EEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int32_t, int32_t, std::function<void(int32_t, class ItemStack const&)>);
    /**
     * @symbol ?setItem\@SimpleSparseContainer\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int32_t, class ItemStack const&);
    /**
     * @symbol ?startOpen\@SimpleSparseContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&);
    /**
     * @symbol ?stopOpen\@SimpleSparseContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&);
#endif
    /**
     * @symbol
     * ??0SimpleSparseContainer\@\@QEAA\@AEAVContainer\@\@W4SparseContainerBackingSetType\@\@V?$unique_ptr\@VISparseContainerSetListener\@\@U?$default_delete\@VISparseContainerSetListener\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VIPlayerContainerSetter\@\@U?$default_delete\@VIPlayerContainerSetter\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI
    SimpleSparseContainer(class Container&, enum class SparseContainerBackingSetType, std::unique_ptr<class ISparseContainerSetListener>, std::unique_ptr<class IPlayerContainerSetter>);
    /**
     * @symbol ?clearItem\@SimpleSparseContainer\@\@QEAAXH\@Z
     */
    MCAPI void clearItem(int32_t);
    /**
     * @symbol ?pushAllToBackingContainer\@SimpleSparseContainer\@\@QEAAXXZ
     */
    MCAPI void pushAllToBackingContainer();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_setBackingContainerSlot\@SimpleSparseContainer\@\@AEAAXHAEBVItemStack\@\@\@Z
     */
    MCAPI void _setBackingContainerSlot(int32_t, class ItemStack const&);
    // NOLINTEND
};
