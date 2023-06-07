/**
 * @file  ItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemComponent.
 *
 */
class ItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMCOMPONENT
public:
    class ItemComponent& operator=(class ItemComponent const &) = delete;
    ItemComponent(class ItemComponent const &) = delete;
    ItemComponent() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?buildNetworkTag\@ItemComponent\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMCOMPONENT
    /**
     * @symbol ?_canUseOn\@ItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    MCVAPI bool _canUseOn(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
    /**
     * @symbol ?_useOn\@ItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    MCVAPI bool _useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ?checkComponentDataForContentErrors\@ItemComponent\@\@UEBA_NXZ
     */
    MCVAPI bool checkComponentDataForContentErrors() const;
    /**
     * @symbol ?handleVersionBasedInitialization\@ItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    MCVAPI void handleVersionBasedInitialization(class SemVersion const &);
    /**
     * @symbol ?initializeFromNetwork\@ItemComponent\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    MCVAPI bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @symbol ?isNetworkComponent\@ItemComponent\@\@UEBA_NXZ
     */
    MCVAPI bool isNetworkComponent() const;
    /**
     * @symbol ?writeSettings\@ItemComponent\@\@UEAAXXZ
     */
    MCVAPI void writeSettings();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemComponent();
#endif
    /**
     * @symbol ??0ItemComponent\@\@QEAA\@PEAVComponentItem\@\@\@Z
     */
    MCAPI ItemComponent(class ComponentItem *);
    /**
     * @symbol ?useOn\@ItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    MCAPI bool useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /**
     * @symbol ?bindItemComponentType\@ItemComponent\@\@SAXXZ
     */
    MCAPI static void bindItemComponentType();
    /**
     * @symbol ?registerVersionUpgrades\@ItemComponent\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};
