#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSelectionBoxDescription {

public:
    // prevent constructor by default
    BlockSelectionBoxDescription& operator=(BlockSelectionBoxDescription const&) = delete;
    BlockSelectionBoxDescription(BlockSelectionBoxDescription const&)            = delete;
    BlockSelectionBoxDescription()                                               = delete;

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
     * ?getName\@BlockSelectionBoxDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getName() const;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?initializeComponent\@BlockSelectionBoxDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext&) const;
    /**
     * @vftbl 4
     * @symbol ?initializeComponentFromCode\@BlockSelectionBoxDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponentFromCode(class EntityContext&) const;
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?isNetworkComponent\@BlockSelectionBoxDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 7
     * @symbol
     * ?buildNetworkTag\@BlockSelectionBoxDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 8
     * @symbol ?initializeFromNetwork\@BlockSelectionBoxDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKSELECTIONBOXDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockSelectionBoxDescription();
#endif
    /**
     * @symbol ??0BlockSelectionBoxDescription\@\@QEAA\@_N\@Z
     */
    MCAPI BlockSelectionBoxDescription(bool);
    /**
     * @symbol ??0BlockSelectionBoxDescription\@\@QEAA\@AEBVVec3\@\@0\@Z
     */
    MCAPI BlockSelectionBoxDescription(class Vec3 const&, class Vec3 const&);
    /**
     * @symbol ?bindType\@BlockSelectionBoxDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades\@BlockSelectionBoxDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);
    /**
     * @symbol
     * ?NameID\@BlockSelectionBoxDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    // NOLINTEND
};
