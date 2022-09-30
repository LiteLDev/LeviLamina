/**
 * @file  Minecart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Minecart.
 *
 */
class Minecart : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECART
public:
    class Minecart& operator=(class Minecart const &) = delete;
    Minecart(class Minecart const &) = delete;
    Minecart() = delete;
#endif

public:
    /**
     * @hash   1421120170
     * @vftbl  8
     * @symbol ?reloadHardcoded@Minecart@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   2061563333
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@Minecart@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Minecart();
    /**
     * @hash   -835735631
     * @vftbl  32
     * @symbol ?getInterpolatedBodyYaw@Minecart@@UEBAMM@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   451764552
     * @vftbl  48
     * @symbol ?normalTick@Minecart@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -1115419875
     * @vftbl  78
     * @symbol ?getShadowHeightOffs@Minecart@@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @hash   2138043875
     * @vftbl  79
     * @symbol ?getShadowRadius@Minecart@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   417661883
     * @vftbl  94
     * @symbol ?isPickable@Minecart@@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   -764877999
     * @vftbl  134
     * @symbol ?isInvulnerableTo@Minecart@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   231816704
     * @vftbl  139
     * @symbol ?onBounceStarted@Minecart@@UEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @hash   -445054892
     * @vftbl  183
     * @symbol ?getControllingPlayer@Minecart@@UEBA?AUActorUniqueID@@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   1348780859
     * @vftbl  252
     * @symbol ?kill@Minecart@@MEAAXXZ
     */
    virtual void kill();
    /**
     * @hash   2108101720
     * @vftbl  260
     * @symbol ?interpolatorTick@Minecart@@UEAAXXZ
     */
    virtual void interpolatorTick();
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   500490125
     * @vftbl  271
     * @symbol ?_hurt@Minecart@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   342561997
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Minecart@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -785783136
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Minecart@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   1358479202
     * @vftbl  284
     * @symbol ?_onSizeUpdated@Minecart@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -1612220992
     * @vftbl  286
     * @symbol ?destroy@Minecart@@UEAAXAEBVActorDamageSource@@_N@Z
     */
    virtual void destroy(class ActorDamageSource const &, bool);
    /**
     * @hash   1753602812
     * @vftbl  287
     * @symbol ?getType@MinecartTNT@@UEAA?AW4MinecartType@@XZ
     */
    virtual enum class MinecartType getType() = 0;
    /**
     * @hash   -1977633817
     * @vftbl  288
     * @symbol ?getDefaultDisplayBlock@Minecart@@UEBAPEBVBlock@@XZ
     */
    virtual class Block const * getDefaultDisplayBlock() const;
    /**
     * @vftbl  289
     * @symbol __unk_vfn_289
     */
    virtual void __unk_vfn_289();
    /**
     * @hash   -636255614
     * @vftbl  290
     * @symbol ?getDefaultDisplayOffset@Minecart@@UEBAHXZ
     */
    virtual int getDefaultDisplayOffset() const;
    /**
     * @hash   -1338590663
     * @vftbl  291
     * @symbol ?applyNaturalSlowdown@Minecart@@MEAAXAEAVBlockSource@@@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource &);
    /**
     * @hash   -906046236
     * @vftbl  292
     * @symbol ?_lazyInitDisplayBlock@Minecart@@EEAAXXZ
     */
    virtual void _lazyInitDisplayBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECART
    /**
     * @hash   -1332684068
     * @symbol ?canMakeStepSound@Minecart@@EEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @hash   -1686623959
     * @symbol ?getDefaultDisplayData@Minecart@@UEBAHXZ
     */
    MCVAPI int getDefaultDisplayData() const;
#endif
    /**
     * @hash   1710010591
     * @symbol ??0Minecart@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Minecart(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   383727047
     * @symbol ?dropMinecartWithContentsAndRemove@Minecart@@QEAAXV?$basic_string_span@$$CBD$0?0@gsl@@_N@Z
     */
    MCAPI void dropMinecartWithContentsAndRemove(class gsl::basic_string_span<char const, -1>, bool);
    /**
     * @hash   921326730
     * @symbol ?postNormalTick@Minecart@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void postNormalTick(class BlockPos const &);
    /**
     * @symbol ?preNormalTick@Minecart@@QEAA?AVBlockPos@@XZ
     */
    MCAPI class BlockPos preNormalTick();
    /**
     * @hash   -1537015706
     * @symbol ?setCustomDisplay@Minecart@@QEAAX_N@Z
     */
    MCAPI void setCustomDisplay(bool);
    /**
     * @hash   -1813836472
     * @symbol ?setDisplayBlock@Minecart@@QEAAXAEBVBlock@@@Z
     */
    MCAPI void setDisplayBlock(class Block const &);

//private:
    /**
     * @hash   -1556830071
     * @symbol ?_registerLoopingSounds@Minecart@@AEAAXXZ
     */
    MCAPI void _registerLoopingSounds();

private:

};