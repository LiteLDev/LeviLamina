#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShooterItemComponent {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    class DrawDuration;
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponent inner types define
    class DrawDuration {

    public:
        // prevent constructor by default
        DrawDuration& operator=(DrawDuration const&) = delete;
        DrawDuration(DrawDuration const&)            = delete;
        DrawDuration()                               = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?setValue\@DrawDuration\@ShooterItemComponent\@\@QEAAXM\@Z
         */
        MCAPI void setValue(float);
        // NOLINTEND
    };

    struct ShooterAmmunitionEntry {

    public:
        // prevent constructor by default
        ShooterAmmunitionEntry(ShooterAmmunitionEntry const&) = delete;
        ShooterAmmunitionEntry()                              = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??4ShooterAmmunitionEntry\@ShooterItemComponent\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponent::ShooterAmmunitionEntry const&);
        /**
         * @symbol ??4ShooterAmmunitionEntry\@ShooterItemComponent\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponent::ShooterAmmunitionEntry&&);
        /**
         * @symbol ??8ShooterAmmunitionEntry\@ShooterItemComponent\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct ShooterItemComponent::ShooterAmmunitionEntry const&) const;
        /**
         * @symbol ??1ShooterAmmunitionEntry\@ShooterItemComponent\@\@QEAA\@XZ
         */
        MCAPI ~ShooterAmmunitionEntry();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ShooterItemComponent& operator=(ShooterItemComponent const&) = delete;
    ShooterItemComponent(ShooterItemComponent const&)            = delete;
    ShooterItemComponent()                                       = delete;

public:
    // NOLINTBEGIN
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
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol ?isNetworkComponent\@ChargeableItemComponent\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@ChargeableItemComponent\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol ?initializeFromNetwork\@ChargeableItemComponent\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @vftbl 6
     * @symbol ?handleVersionBasedInitialization\@ItemComponent\@\@UEAAXAEBVSemVersion\@\@\@Z
     */
    virtual void handleVersionBasedInitialization(class SemVersion const&);
    /**
     * @vftbl 7
     * @symbol ?initializeComponent\@ItemComponent\@\@UEBAXXZ
     */
    virtual void initializeComponent() const;
    /**
     * @vftbl 8
     * @symbol ?_canUseOn\@ItemComponent\@\@MEBA_NAEBVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, unsigned char) const;
    /**
     * @vftbl 9
     * @symbol ?_useOn\@ItemComponent\@\@MEBA_NAEAVItemStack\@\@AEAVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&) const;
    /**
     * @symbol ?releaseUsing\@ShooterItemComponent\@\@QEBA_NAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI bool releaseUsing(class ItemStack&, class Player*, int) const;
    /**
     * @symbol ?use\@ShooterItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack&, class Player&) const;
    /**
     * @symbol ?useTimeDepleted\@ShooterItemComponent\@\@QEBAXAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void useTimeDepleted(class ItemStack&, class Player&) const;
    /**
     * @symbol ?bindType\@ShooterItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@ShooterItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_consumeAmmunition\@ShooterItemComponent\@\@AEBAXPEAVPlayer\@\@AEBVItemStack\@\@H_N2\@Z
     */
    MCAPI void _consumeAmmunition(class Player*, class ItemStack const&, int, bool, bool) const;
    /**
     * @symbol ?_getAmmunition\@ShooterItemComponent\@\@AEBAHPEBVPlayer\@\@_NAEAVItemStack\@\@AEA_N\@Z
     */
    MCAPI int _getAmmunition(class Player const*, bool, class ItemStack&, bool&) const;
    /**
     * @symbol ?_shootProjectiles\@ShooterItemComponent\@\@AEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI void _shootProjectiles(class ItemStack&, class Player*, int) const;
    // NOLINTEND
};
