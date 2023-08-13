#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class CompoundTag;
// clang-format on

namespace BlockTrait {

class ITrait {

public:
    // prevent constructor by default
    ITrait& operator=(ITrait const&) = delete;
    ITrait(ITrait const&)            = delete;
    ITrait()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applyToBlockLegacy\@PlacementPosition\@BlockTrait\@\@UEBAXAEAVBlockLegacy\@\@\@Z
     */
    virtual void applyToBlockLegacy(class BlockLegacy&) const = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?buildNetworkTag\@PlacementPosition\@BlockTrait\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const = 0;
    /**
     * @vftbl 3
     * @symbol ?initializeFromNetwork\@PlacementPosition\@BlockTrait\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&) = 0;
    /**
     * @symbol ?bindType\@ITrait\@BlockTrait\@\@SAXXZ
     */
    MCAPI static void bindType();
    // NOLINTEND
};

}; // namespace BlockTrait
