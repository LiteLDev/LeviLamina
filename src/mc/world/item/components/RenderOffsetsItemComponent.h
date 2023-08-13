#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RenderOffsetsItemComponent {
public:
    // RenderOffsetsItemComponent inner types declare
    // clang-format off
    struct ItemTransforms;
    struct TRS;
    // clang-format on

    // RenderOffsetsItemComponent inner types define
    struct ItemTransforms {

    public:
        // prevent constructor by default
        ItemTransforms& operator=(ItemTransforms const&) = delete;
        ItemTransforms(ItemTransforms const&)            = delete;
        ItemTransforms()                                 = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??8ItemTransforms\@RenderOffsetsItemComponent\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct RenderOffsetsItemComponent::ItemTransforms const&) const;
        // NOLINTEND
    };

    struct TRS {

    public:
        // prevent constructor by default
        TRS& operator=(TRS const&) = delete;
        TRS(TRS const&)            = delete;
        TRS()                      = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??8TRS\@RenderOffsetsItemComponent\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct RenderOffsetsItemComponent::TRS const&) const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RenderOffsetsItemComponent& operator=(RenderOffsetsItemComponent const&) = delete;
    RenderOffsetsItemComponent(RenderOffsetsItemComponent const&)            = delete;
    RenderOffsetsItemComponent()                                             = delete;

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
     * @symbol ?bindType\@RenderOffsetsItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@RenderOffsetsItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?Main_Hand_Defaults\@RenderOffsetsItemComponent\@\@0UItemTransforms\@1\@A
     */
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Main_Hand_Defaults;
    /**
     * @symbol ?Off_Hand_Defaults\@RenderOffsetsItemComponent\@\@0UItemTransforms\@1\@A
     */
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Off_Hand_Defaults;
    // NOLINTEND
};
