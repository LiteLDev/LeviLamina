#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstancesDescription {

public:
    // prevent constructor by default
    BlockMaterialInstancesDescription& operator=(BlockMaterialInstancesDescription const&) = delete;
    BlockMaterialInstancesDescription(BlockMaterialInstancesDescription const&)            = delete;
    BlockMaterialInstancesDescription()                                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getName\@BlockMaterialInstancesDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockMaterialInstancesDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?initializeComponentFromCode\@BlockMaterialInstancesDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponentFromCode(class EntityContext&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?isNetworkComponent\@BlockMaterialInstancesDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?buildNetworkTag\@BlockMaterialInstancesDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?initializeFromNetwork\@BlockMaterialInstancesDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKMATERIALINSTANCESDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockMaterialInstancesDescription(); // NOLINT
#endif
    /**
     * @symbol
     * ??0BlockMaterialInstancesDescription\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockRenderLayer\@\@_N2\@Z
     */
    MCAPI BlockMaterialInstancesDescription(std::string const&, enum class BlockRenderLayer, bool, bool); // NOLINT
    /**
     * @symbol ?bindType\@BlockMaterialInstancesDescription\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?NameID\@BlockMaterialInstancesDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID; // NOLINT
};
