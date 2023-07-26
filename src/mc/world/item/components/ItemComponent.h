#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemComponent {

public:
    // prevent constructor by default
    ItemComponent& operator=(ItemComponent const&) = delete;
    ItemComponent(ItemComponent const&)            = delete;
    ItemComponent()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@ItemComponent\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMCOMPONENT
    /**
     * @symbol ?_canUseOn\@ItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @symbol ?_useOn\@ItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    MCVAPI bool
    _useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?checkComponentDataForContentErrors\@ItemComponent\@\@UEBA_NXZ
     */
    MCVAPI bool checkComponentDataForContentErrors() const; // NOLINT
    /**
     * @symbol ?handleVersionBasedInitialization\@ItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    MCVAPI void handleVersionBasedInitialization(class SemVersion const&); // NOLINT
    /**
     * @symbol ?initializeComponent\@ItemComponent\@\@UEBAXXZ
     */
    MCVAPI void initializeComponent() const; // NOLINT
    /**
     * @symbol ?initializeFromNetwork\@ItemComponent\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCVAPI bool initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?isNetworkComponent\@ItemComponent\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkComponent() const; // NOLINT
    /**
     * @symbol ?writeSettings\@ItemComponent\@\@UEAAXXZ
     */
    MCVAPI void writeSettings(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemComponent(); // NOLINT
#endif
    /**
     * @symbol ??0ItemComponent\@\@QEAA\@PEAVComponentItem\@\@\@Z
     */
    MCAPI ItemComponent(class ComponentItem*); // NOLINT
    /**
     * @symbol ?useOn\@ItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    MCAPI bool
    useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?bindItemComponentType\@ItemComponent\@\@SAXXZ
     */
    MCAPI static void bindItemComponentType(); // NOLINT
    /**
     * @symbol ?registerVersionUpgrades\@ItemComponent\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&); // NOLINT
};
