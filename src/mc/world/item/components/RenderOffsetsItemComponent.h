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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDEROFFSETSITEMCOMPONENT_ITEMTRANSFORMS
    public:
        ItemTransforms& operator=(ItemTransforms const&) = delete;
        ItemTransforms(ItemTransforms const&)            = delete;
        ItemTransforms()                                 = delete;
#endif

    public:
        /**
         * @symbol ??8ItemTransforms\@RenderOffsetsItemComponent\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct RenderOffsetsItemComponent::ItemTransforms const&) const;
    };

    struct TRS {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDEROFFSETSITEMCOMPONENT_TRS
    public:
        TRS& operator=(TRS const&) = delete;
        TRS(TRS const&)            = delete;
        TRS()                      = delete;
#endif

    public:
        /**
         * @symbol ??8TRS\@RenderOffsetsItemComponent\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct RenderOffsetsItemComponent::TRS const&) const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDEROFFSETSITEMCOMPONENT
public:
    RenderOffsetsItemComponent& operator=(RenderOffsetsItemComponent const&) = delete;
    RenderOffsetsItemComponent(RenderOffsetsItemComponent const&)            = delete;
    RenderOffsetsItemComponent()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isNetworkComponent\@?$NetworkedItemComponent\@VRenderOffsetsItemComponent\@\@\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
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
     * @symbol
     * ?buildNetworkTag\@?$NetworkedItemComponent\@VRenderOffsetsItemComponent\@\@\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 5
     * @symbol
     * ?initializeFromNetwork\@?$NetworkedItemComponent\@VRenderOffsetsItemComponent\@\@\@\@UEAA_NAEBVCompoundTag\@\@\@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const&);
    /**
     * @symbol ?bindType\@RenderOffsetsItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier\@RenderOffsetsItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();

    // private:

private:
    /**
     * @symbol ?Main_Hand_Defaults\@RenderOffsetsItemComponent\@\@0UItemTransforms\@1\@A
     */
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Main_Hand_Defaults;
    /**
     * @symbol ?Off_Hand_Defaults\@RenderOffsetsItemComponent\@\@0UItemTransforms\@1\@A
     */
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Off_Hand_Defaults;
};
