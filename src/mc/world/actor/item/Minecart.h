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
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Minecart\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Minecart\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 29
     * @symbol ?getInterpolatedBodyYaw\@Minecart\@\@UEBAMM\@Z
     */
    virtual float getInterpolatedBodyYaw(float) const; // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 68
     * @symbol ?getShadowHeightOffs\@Minecart\@\@UEAAMXZ
     */
    virtual float getShadowHeightOffs(); // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Minecart\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 82
     * @symbol ?isPickable\@Minecart\@\@UEAA_NXZ
     */
    virtual bool isPickable(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Minecart\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 125
     * @symbol ?onBounceStarted\@Minecart\@\@UEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void onBounceStarted(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 166
     * @symbol ?getControllingPlayer\@Minecart\@\@UEBA?AUActorUniqueID\@\@XZ
     */
    virtual struct ActorUniqueID getControllingPlayer() const; // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 223
     * @symbol ?kill\@Minecart\@\@MEAAXXZ
     */
    virtual void kill(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Minecart\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Minecart\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Minecart\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Minecart\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?destroy\@Minecart\@\@UEAAXAEBVActorDamageSource\@\@_N\@Z
     */
    virtual void destroy(class ActorDamageSource const&, bool); // NOLINT
    /**
     * @vftbl 255
     * @symbol ?getType\@MinecartChest\@\@UEAA?AW4MinecartType\@\@XZ
     */
    virtual enum class MinecartType getType() = 0; // NOLINT
    /**
     * @vftbl 256
     * @symbol ?getDefaultDisplayBlock\@Minecart\@\@UEBAPEBVBlock\@\@XZ
     */
    virtual class Block const* getDefaultDisplayBlock() const; // NOLINT
    /**
     * @vftbl 257
     * @symbol __unk_vfn_257
     */
    virtual void __unk_vfn_257(); // NOLINT
    /**
     * @vftbl 258
     * @symbol ?getDefaultDisplayOffset\@Minecart\@\@UEBAHXZ
     */
    virtual int getDefaultDisplayOffset() const; // NOLINT
    /**
     * @vftbl 259
     * @symbol ?applyNaturalSlowdown\@Minecart\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource&); // NOLINT
    /**
     * @vftbl 260
     * @symbol ?_lazyInitDisplayBlock\@Minecart\@\@EEAAXXZ
     */
    virtual void _lazyInitDisplayBlock(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINECART
    /**
     * @symbol ?canMakeStepSound\@Minecart\@\@EEBA_NXZ
     */
    MCVAPI bool canMakeStepSound() const; // NOLINT
    /**
     * @symbol ?getDefaultDisplayData\@Minecart\@\@UEBAHXZ
     */
    MCVAPI int getDefaultDisplayData() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Minecart(); // NOLINT
#endif
    /**
     * @symbol
     * ??0Minecart\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    Minecart(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol
     * ?dropMinecartWithContentsAndRemove\@Minecart\@\@QEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI void dropMinecartWithContentsAndRemove(
        class std::basic_string_view<char, struct std::char_traits<char>>,
        bool
    ); // NOLINT
    /**
     * @symbol ?postNormalTick\@Minecart\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void postNormalTick(class BlockPos const&); // NOLINT
    /**
     * @symbol ?preNormalTick\@Minecart\@\@QEAA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos preNormalTick(); // NOLINT
    /**
     * @symbol ?setDisplayBlock\@Minecart\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void setDisplayBlock(class Block const&); // NOLINT

    // private:
    /**
     * @symbol ?_registerLoopingSounds\@Minecart\@\@AEAAXXZ
     */
    MCAPI void _registerLoopingSounds(); // NOLINT

private:
};
