/**
 * @file  Minecart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Minecart\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Minecart\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 33
     * @symbol ?getInterpolatedBodyYaw\@Minecart\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 79
     * @symbol ?getShadowHeightOffs\@Minecart\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 80
     * @symbol ?getShadowRadius\@Minecart\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 95
     * @symbol ?isPickable\@Minecart\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 134
     * @symbol ?isInvulnerableTo\@Minecart\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 139
     * @symbol ?onBounceStarted\@Minecart\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 180
     * @symbol ?getControllingPlayer\@Minecart\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 244
     * @symbol ?kill\@Minecart\@\@MEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@Minecart\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 264
     * @symbol ?readAdditionalSaveData\@Minecart\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@Minecart\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 274
     * @symbol ?_onSizeUpdated\@Minecart\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 276
     * @symbol ?destroy\@Minecart\@\@UEAAXAEBVActorDamageSource\@\@_N\@Z
     */
    virtual void destroy(class ActorDamageSource const &, bool);
    /**
     * @vftbl 277
     * @symbol ?getType\@MinecartRideable\@\@UEAA?AW4MinecartType\@\@XZ
     */
    virtual enum class MinecartType getType() = 0;
    /**
     * @vftbl 278
     * @symbol ?getDefaultDisplayBlock\@Minecart\@\@UEBAPEBVBlock\@\@XZ
     */
    virtual class Block const * getDefaultDisplayBlock() const;
    /**
     * @vftbl 279
     * @symbol __unk_vfn_279
     */
    virtual void __unk_vfn_279();
    /**
     * @vftbl 280
     * @symbol ?getDefaultDisplayOffset\@Minecart\@\@UEBAHXZ
     */
    virtual int getDefaultDisplayOffset() const;
    /**
     * @vftbl 281
     * @symbol ?applyNaturalSlowdown\@Minecart\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource &);
    /**
     * @vftbl 282
     * @symbol ?_lazyInitDisplayBlock\@Minecart\@\@EEAAXXZ
     */
    virtual void _lazyInitDisplayBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECART
    /**
     * @symbol ?canMakeStepSound\@Minecart\@\@EEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const;
    /**
     * @symbol ?getDefaultDisplayData\@Minecart\@\@UEBAHXZ
     */
    MCVAPI int getDefaultDisplayData() const;
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Minecart();
#endif
    /**
     * @symbol ??0Minecart\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Minecart(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?dropMinecartWithContentsAndRemove\@Minecart\@\@QEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void dropMinecartWithContentsAndRemove(class std::basic_string_view<char, struct std::char_traits<char>>, bool);
    /**
     * @symbol ?postNormalTick\@Minecart\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void postNormalTick(class BlockPos const &);
    /**
     * @symbol ?preNormalTick\@Minecart\@\@QEAA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos preNormalTick();
    /**
     * @symbol ?setCustomDisplay\@Minecart\@\@QEAAX_N\@Z
     */
    MCAPI void setCustomDisplay(bool);
    /**
     * @symbol ?setDisplayBlock\@Minecart\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setDisplayBlock(class Block const &);

//private:
    /**
     * @symbol ?_registerLoopingSounds\@Minecart\@\@AEAAXXZ
     */
    MCAPI void _registerLoopingSounds();

private:

};
