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
     * @vftbl 29
     * @symbol ?getInterpolatedBodyYaw\@Minecart\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const;
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 67
     * @symbol ?getShadowHeightOffs\@Minecart\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 68
     * @symbol ?getShadowRadius\@Minecart\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl 81
     * @symbol ?isPickable\@Minecart\@\@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 119
     * @symbol ?isInvulnerableTo\@Minecart\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 123
     * @symbol ?onBounceStarted\@Minecart\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const &, class Block const &);
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 164
     * @symbol ?getControllingPlayer\@Minecart\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 219
     * @symbol ?kill\@Minecart\@\@MEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 236
     * @symbol ?_hurt\@Minecart\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 239
     * @symbol ?readAdditionalSaveData\@Minecart\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 240
     * @symbol ?addAdditionalSaveData\@Minecart\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 247
     * @symbol ?_onSizeUpdated\@Minecart\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 249
     * @symbol ?destroy\@Minecart\@\@UEAAXAEBVActorDamageSource\@\@_N\@Z
     */
    virtual void destroy(class ActorDamageSource const &, bool);
    /**
     * @vftbl 250
     * @symbol ?getType\@MinecartChest\@\@UEAA?AW4MinecartType\@\@XZ
     */
    virtual enum class MinecartType getType() = 0;
    /**
     * @vftbl 251
     * @symbol ?getDefaultDisplayBlock\@Minecart\@\@UEBAPEBVBlock\@\@XZ
     */
    virtual class Block const * getDefaultDisplayBlock() const;
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?getDefaultDisplayOffset\@Minecart\@\@UEBAHXZ
     */
    virtual int getDefaultDisplayOffset() const;
    /**
     * @vftbl 254
     * @symbol ?applyNaturalSlowdown\@Minecart\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource &);
    /**
     * @vftbl 255
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
