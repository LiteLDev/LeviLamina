/**
 * @file  MC/RenderOffsetsItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RenderOffsetsItemComponent.
 *
 */
class RenderOffsetsItemComponent {

#define AFTER_EXTRA
// Add Member There
public:
struct TRS {
    TRS() = delete;
    TRS(TRS const&) = delete;
    TRS(TRS const&&) = delete;
};
struct ItemTransforms {
    ItemTransforms() = delete;
    ItemTransforms(ItemTransforms const&) = delete;
    ItemTransforms(ItemTransforms const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDEROFFSETSITEMCOMPONENT
public:
    class RenderOffsetsItemComponent& operator=(class RenderOffsetsItemComponent const &) = delete;
    RenderOffsetsItemComponent(class RenderOffsetsItemComponent const &) = delete;
    RenderOffsetsItemComponent() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RenderOffsetsItemComponent();
    /**
     * @hash   438282897
     * @vftbl  1
     * @symbol ?isNetworkComponent@?$NetworkedItemComponent@VRenderOffsetsItemComponent@@@@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   -1125078294
     * @symbol ?_fromString@RenderOffsetsItemComponent@@CAXAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static void _fromString(class RenderOffsetsItemComponent &, std::string const &);
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @hash   -702510653
     * @vftbl  5
     * @symbol ?buildNetworkTag@?$NetworkedItemComponent@VRenderOffsetsItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   503792317
     * @vftbl  6
     * @symbol ?initializeFromNetwork@?$NetworkedItemComponent@VRenderOffsetsItemComponent@@@@UEAA_NAEBVCompoundTag@@@Z
     */
    virtual bool initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   104487203
     * @symbol ?bindType@RenderOffsetsItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   2022408776
     * @symbol ?getIdentifier@RenderOffsetsItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @hash   -1125078294
     * @symbol ?_fromString@RenderOffsetsItemComponent@@CAXAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static void _fromString(class RenderOffsetsItemComponent &, std::string const &);

private:
    /**
     * @hash   756630482
     * @symbol ?Main_Hand_Defaults@RenderOffsetsItemComponent@@0UItemTransforms@1@A
     */
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Main_Hand_Defaults;
    /**
     * @hash   -949463272
     * @symbol ?Off_Hand_Defaults@RenderOffsetsItemComponent@@0UItemTransforms@1@A
     */
    MCAPI static struct RenderOffsetsItemComponent::ItemTransforms Off_Hand_Defaults;

};