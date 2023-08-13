#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

class Minecart : public ::Actor {

public:
    // prevent constructor by default
    Minecart& operator=(Minecart const&) = delete;
    Minecart(Minecart const&)            = delete;
    Minecart()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Minecart\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&);
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Minecart\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&);
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
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@Minecart\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Minecart\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 82
     * @symbol ?isPickable\@Minecart\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Minecart\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /**
     * @vftbl 125
     * @symbol ?onBounceStarted\@Minecart\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@Minecart\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 223
     * @symbol ?kill\@Minecart\@\@MEAAXXZ
     */
    virtual void kill();
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Minecart\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Minecart\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Minecart\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Minecart\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 254
     * @symbol ?destroy\@Minecart\@\@UEAAXAEBVActorDamageSource\@\@_N\@Z
     */
    virtual void destroy(class ActorDamageSource const&, bool);
    /**
     * @vftbl 255
     * @symbol ?getType\@MinecartTNT\@\@UEAA?AW4MinecartType\@\@XZ
     */
    virtual enum class MinecartType getType() = 0;
    /**
     * @vftbl 256
     * @symbol ?getDefaultDisplayBlock\@Minecart\@\@UEBAPEBVBlock\@\@XZ
     */
    virtual class Block const* getDefaultDisplayBlock() const;
    /**
     * @vftbl 257
     * @symbol __unk_vfn_257
     */
    virtual void __unk_vfn_257();
    /**
     * @vftbl 258
     * @symbol ?getDefaultDisplayOffset\@Minecart\@\@UEBAHXZ
     */
    virtual int getDefaultDisplayOffset() const;
    /**
     * @vftbl 259
     * @symbol ?applyNaturalSlowdown\@Minecart\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource&);
    /**
     * @vftbl 260
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
     * @symbol
     * ??0Minecart\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Minecart(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol
     * ?dropMinecartWithContentsAndRemove\@Minecart\@\@QEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void dropMinecartWithContentsAndRemove(std::string_view, bool);
    /**
     * @symbol ?postNormalTick\@Minecart\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void postNormalTick(class BlockPos const&);
    /**
     * @symbol ?preNormalTick\@Minecart\@\@QEAA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos preNormalTick();
    /**
     * @symbol ?setDisplayBlock\@Minecart\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setDisplayBlock(class Block const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_registerLoopingSounds\@Minecart\@\@AEAAXXZ
     */
    MCAPI void _registerLoopingSounds();
    // NOLINTEND
};
