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
        /**
         * @symbol ?setValue\@DrawDuration\@ShooterItemComponent\@\@QEAAXM\@Z
         */
        MCAPI void setValue(float); // NOLINT
    };

    struct ShooterAmmunitionEntry {

    public:
        // prevent constructor by default
        ShooterAmmunitionEntry(ShooterAmmunitionEntry const&) = delete;
        ShooterAmmunitionEntry()                              = delete;

    public:
        /**
         * @symbol ??4ShooterAmmunitionEntry\@ShooterItemComponent\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponent::ShooterAmmunitionEntry const&); // NOLINT
        /**
         * @symbol ??4ShooterAmmunitionEntry\@ShooterItemComponent\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponent::ShooterAmmunitionEntry&&); // NOLINT
        /**
         * @symbol ??8ShooterAmmunitionEntry\@ShooterItemComponent\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct ShooterItemComponent::ShooterAmmunitionEntry const&) const; // NOLINT
        /**
         * @symbol ??1ShooterAmmunitionEntry\@ShooterItemComponent\@\@QEAA\@XZ
         */
        MCAPI ~ShooterAmmunitionEntry(); // NOLINT
    };

public:
    // prevent constructor by default
    ShooterItemComponent& operator=(ShooterItemComponent const&) = delete;
    ShooterItemComponent(ShooterItemComponent const&)            = delete;
    ShooterItemComponent()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?checkComponentDataForContentErrors\@ShooterItemComponent\@\@UEBA_NXZ
     */
    virtual bool checkComponentDataForContentErrors() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VShooterItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VShooterItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VShooterItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?releaseUsing\@ShooterItemComponent\@\@QEBA_NAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI bool releaseUsing(class ItemStack&, class Player*, int) const; // NOLINT
    /**
     * @symbol ?use\@ShooterItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @symbol ?useTimeDepleted\@ShooterItemComponent\@\@QEBAXAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI void useTimeDepleted(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @symbol ?bindType\@ShooterItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?getIdentifier\@ShooterItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier(); // NOLINT

    // private:
    /**
     * @symbol ?_consumeAmmunition\@ShooterItemComponent\@\@AEBAXPEAVPlayer\@\@AEBVItemStack\@\@H_N2\@Z
     */
    MCAPI void _consumeAmmunition(class Player*, class ItemStack const&, int, bool, bool) const; // NOLINT
    /**
     * @symbol ?_getAmmunition\@ShooterItemComponent\@\@AEBAHPEBVPlayer\@\@_NAEAVItemStack\@\@AEA_N\@Z
     */
    MCAPI int _getAmmunition(class Player const*, bool, class ItemStack&, bool&) const; // NOLINT
    /**
     * @symbol ?_shootProjectiles\@ShooterItemComponent\@\@AEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    MCAPI void _shootProjectiles(class ItemStack&, class Player*, int) const; // NOLINT

private:
};
