/**
 * @file  ShooterItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShooterItemComponent.
 *
 */
class ShooterItemComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTERITEMCOMPONENT
public:
    ShooterItemComponent() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?checkComponentDataForContentErrors\@ShooterItemComponent\@\@UEBA_NXZ
     */
    virtual bool checkComponentDataForContentErrors() const;
    /**
     * @vftbl 2
     * @symbol ?writeSettings\@ItemComponent\@\@UEAAXXZ
     */
    virtual void writeSettings();
    /**
     * @vftbl 3
     * @symbol ?isNetworkComponent\@InteractButtonItemComponent\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 4
     * @symbol ?buildNetworkTag\@ItemComponent\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx &) const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@ItemComponent\@\@UEAA_NAEBVCompoundTag\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &, struct cereal::ReflectionCtx &);
    /**
     * @vftbl 6
     * @symbol ?handleVersionBasedInitialization\@ItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const &);
    /**
     * @vftbl 7
     * @symbol ?_canUseOn\@ItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool _canUseOn(class ItemStack const &, class Actor &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl 8
     * @symbol ?_useOn\@ItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos const &, unsigned char, class Vec3 const &) const;
    /**
     * @vftbl 9
     * @symbol ?_initializeComponent\@ItemComponent\@\@MEBAXXZ
     */
    virtual void _initializeComponent() const;
    /**
     * @symbol ??0ShooterItemComponent\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ShooterItemComponent(class ShooterItemComponent const &);
    /**
     * @symbol ??4ShooterItemComponent\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ShooterItemComponent & operator=(class ShooterItemComponent const &);
    /**
     * @symbol ??4ShooterItemComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ShooterItemComponent & operator=(class ShooterItemComponent &&);
    /**
     * @symbol ?releaseUsing\@ShooterItemComponent\@\@QEBA_NAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI bool releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @symbol ?bindType\@ShooterItemComponent\@\@SAXAEAUReflectionCtx\@cereal\@\@AEBV?$vector\@W4AllExperiments\@\@V?$allocator\@W4AllExperiments\@\@\@std\@\@\@std\@\@V?$optional\@VSemVersion\@\@\@5\@\@Z
     */
    MCAPI static void bindType(struct cereal::ReflectionCtx &, std::vector<enum class AllExperiments> const &, class std::optional<class SemVersion>);
    /**
     * @symbol ?getIdentifier\@ShooterItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @symbol ?_consumeAmmunition\@ShooterItemComponent\@\@AEBAXPEAVPlayer\@\@AEBVItemStack\@\@H_N2\@Z
     */
    MCAPI void _consumeAmmunition(class Player *, class ItemStack const &, int, bool, bool) const;
    /**
     * @symbol ?_getAmmunition\@ShooterItemComponent\@\@AEBAHPEBVPlayer\@\@_NAEAVItemStack\@\@AEA_N\@Z
     */
    MCAPI int _getAmmunition(class Player const *, bool, class ItemStack &, bool &) const;
    /**
     * @symbol ?_getMaxUseDuration\@ShooterItemComponent\@\@AEBAHAEBVItemStack\@\@\@Z
     */
    MCAPI int _getMaxUseDuration(class ItemStack const &) const;
    /**
     * @symbol ?_shootProjectiles\@ShooterItemComponent\@\@AEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI void _shootProjectiles(class ItemStack &, class Player *, int) const;

private:

};
