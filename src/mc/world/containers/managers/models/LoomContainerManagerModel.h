#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/ContainerManagerModel.h"

class LoomContainerManagerModel : public ::ContainerManagerModel {

public:
    // prevent constructor by default
    LoomContainerManagerModel& operator=(LoomContainerManagerModel const&) = delete;
    LoomContainerManagerModel(LoomContainerManagerModel const&)            = delete;
    LoomContainerManagerModel()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@LoomContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?setSlot\@LoomContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getSlot\@LoomContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?setData\@LoomContainerManagerModel\@\@UEAAXHH\@Z
     */
    virtual void setData(int, int); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?broadcastChanges\@LoomContainerManagerModel\@\@UEAAXXZ
     */
    virtual void broadcastChanges(); // NOLINT
    /**
     * @vftbl 16
     * @symbol ?isValid\@LoomContainerManagerModel\@\@UEAA_NM\@Z
     */
    virtual bool isValid(float); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?_postInit\@LoomContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit(); // NOLINT
    /**
     * @symbol ??0LoomContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI LoomContainerManagerModel(enum class ContainerID, class Player&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?BANNER_SLOT\@LoomContainerManagerModel\@\@2HB
     */
    MCAPI static int const BANNER_SLOT; // NOLINT
    /**
     * @symbol ?DYE_SLOT\@LoomContainerManagerModel\@\@2HB
     */
    MCAPI static int const DYE_SLOT; // NOLINT
    /**
     * @symbol ?MATERIAL_SLOT\@LoomContainerManagerModel\@\@2HB
     */
    MCAPI static int const MATERIAL_SLOT; // NOLINT
    /**
     * @symbol ?RESULT_SLOT\@LoomContainerManagerModel\@\@2HB
     */
    MCAPI static int const RESULT_SLOT; // NOLINT
};
