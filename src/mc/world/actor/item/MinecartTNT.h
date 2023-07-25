#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/item/Minecart.h"

class MinecartTNT : public ::Minecart {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTTNT
public:
    MinecartTNT& operator=(MinecartTNT const&) = delete;
    MinecartTNT(MinecartTNT const&)            = delete;
    MinecartTNT()                              = delete;
#endif

public:
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 43
     * @symbol ?normalTick\@MinecartTNT\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vftbl 127
     * @symbol ?handleEntityEvent\@MinecartTNT\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int);
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 168
     * @symbol ?causeFallDamage\@MinecartTNT\@\@MEAAXMMVActorDamageSource\@\@\@Z
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
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
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@MinecartTNT\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 254
     * @symbol ?destroy\@MinecartTNT\@\@UEAAXAEBVActorDamageSource\@\@_N\@Z
     */
    virtual void destroy(class ActorDamageSource const&, bool);
    /**
     * @vftbl 255
     * @symbol ?getType\@MinecartTNT\@\@UEAA?AW4MinecartType\@\@XZ
     */
    virtual enum class MinecartType getType();
    /**
     * @vftbl 256
     * @symbol ?getDefaultDisplayBlock\@MinecartTNT\@\@UEBAPEBVBlock\@\@XZ
     */
    virtual class Block const* getDefaultDisplayBlock() const;
    /**
     * @vftbl 257
     * @symbol __unk_vfn_257
     */
    virtual void __unk_vfn_257();
    /**
     * @symbol
     * ??0MinecartTNT\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI MinecartTNT(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);
    /**
     * @symbol ?primeFuse\@MinecartTNT\@\@QEAAXW4ActorDamageCause\@\@\@Z
     */
    MCAPI void primeFuse(enum class ActorDamageCause);

    // private:

private:
    /**
     * @symbol ?DEFAULT_FUSE_LENGTH\@MinecartTNT\@\@0HB
     */
    MCAPI static int const DEFAULT_FUSE_LENGTH;
};
