#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLightEmissionDescription {

public:
    // prevent constructor by default
    BlockLightEmissionDescription& operator=(BlockLightEmissionDescription const&) = delete;
    BlockLightEmissionDescription(BlockLightEmissionDescription const&)            = delete;
    BlockLightEmissionDescription()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockLightEmissionDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeComponent\@BlockLightEmissionDescription\@\@UEBAXAEAVBlockComponentStorage\@\@\@Z
     */
    virtual void initializeComponent(class BlockComponentStorage&) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?isNetworkComponent\@BlockLightEmissionDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?buildNetworkTag\@BlockLightEmissionDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?initializeFromNetwork\@BlockLightEmissionDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?bindType\@BlockLightEmissionDescription\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?NameID\@BlockLightEmissionDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID; // NOLINT
};
