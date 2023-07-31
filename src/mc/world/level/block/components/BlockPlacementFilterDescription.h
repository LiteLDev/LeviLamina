#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementFilterDescription {

public:
    // prevent constructor by default
    BlockPlacementFilterDescription& operator=(BlockPlacementFilterDescription const&) = delete;
    BlockPlacementFilterDescription(BlockPlacementFilterDescription const&)            = delete;
    BlockPlacementFilterDescription()                                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockPlacementFilterDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockPlacementFilterDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const;
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?isNetworkComponent\@BlockPlacementFilterDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 7
     * @symbol
     * ?buildNetworkTag\@BlockPlacementFilterDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 8
     * @symbol ?initializeFromNetwork\@BlockPlacementFilterDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ?bindType\@BlockPlacementFilterDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?NameID\@BlockPlacementFilterDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    // NOLINTEND
};
