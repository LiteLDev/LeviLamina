#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

class HorseContainerManagerModel : public ::LevelContainerManagerModel {

public:
    // prevent constructor by default
    HorseContainerManagerModel& operator=(HorseContainerManagerModel const&) = delete;
    HorseContainerManagerModel(HorseContainerManagerModel const&)            = delete;
    HorseContainerManagerModel()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 6
     * @symbol
     * ?getItemCopies\@HorseContainerManagerModel\@\@UEBA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl 7
     * @symbol ?setSlot\@HorseContainerManagerModel\@\@UEAAXHAEBVItemStack\@\@_N\@Z
     */
    virtual void setSlot(int, class ItemStack const&, bool);
    /**
     * @vftbl 8
     * @symbol ?getSlot\@HorseContainerManagerModel\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    virtual class ItemStack const& getSlot(int) const;
    /**
     * @vftbl 17
     * @symbol ?_postInit\@HorseContainerManagerModel\@\@MEAA?AVContainerScreenContext\@\@XZ
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0HorseContainerManagerModel\@\@QEAA\@W4ContainerID\@\@AEAVPlayer\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI HorseContainerManagerModel(enum class ContainerID, class Player&, struct ActorUniqueID const&);
    // NOLINTEND
};
