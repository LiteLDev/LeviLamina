#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DiggerItemComponent {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0BlockInfo\@DiggerItemComponent\@\@QEAA\@XZ
         */
        MCAPI BlockInfo();
        /**
         * @symbol ??0BlockInfo\@DiggerItemComponent\@\@QEAA\@AEBU01\@\@Z
         */
        MCAPI BlockInfo(struct DiggerItemComponent::BlockInfo const&);
        /**
         * @symbol ??4BlockInfo\@DiggerItemComponent\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct DiggerItemComponent::BlockInfo& operator=(struct DiggerItemComponent::BlockInfo const&);
        /**
         * @symbol ??4BlockInfo\@DiggerItemComponent\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct DiggerItemComponent::BlockInfo& operator=(struct DiggerItemComponent::BlockInfo&&);
        /**
         * @symbol ??8BlockInfo\@DiggerItemComponent\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct DiggerItemComponent::BlockInfo const&) const;
        /**
         * @symbol ??1BlockInfo\@DiggerItemComponent\@\@QEAA\@XZ
         */
        MCAPI ~BlockInfo();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    DiggerItemComponent& operator=(DiggerItemComponent const&) = delete;
    DiggerItemComponent(DiggerItemComponent const&)            = delete;
    DiggerItemComponent()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?checkComponentDataForContentErrors\@ItemComponent\@\@UEBA_NXZ
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
     * @symbol ?mineBlock\@DiggerItemComponent\@\@QEAA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    MCAPI bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*);
    /**
     * @symbol ?bindType\@DiggerItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@DiggerItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    // NOLINTEND
};
