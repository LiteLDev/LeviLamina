#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLightEmissionDescription {

public:
    // prevent constructor by default
    BlockLightEmissionDescription& operator=(BlockLightEmissionDescription const&) = delete;
    BlockLightEmissionDescription(BlockLightEmissionDescription const&)            = delete;
    BlockLightEmissionDescription()                                                = delete;

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
     * ?getName\@BlockLightEmissionDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol ?initializeComponent\@BlockLightEmissionDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponent(class BlockComponentStorage&) const;
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
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
     * @symbol ?isNetworkComponent\@BlockLightEmissionDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 7
     * @symbol
     * ?buildNetworkTag\@BlockLightEmissionDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 8
     * @symbol ?initializeFromNetwork\@BlockLightEmissionDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ?bindType\@BlockLightEmissionDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?NameID\@BlockLightEmissionDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    // NOLINTEND
};
