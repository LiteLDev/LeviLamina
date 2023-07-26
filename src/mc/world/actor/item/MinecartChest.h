#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/item/Minecart.h"

class MinecartChest : public ::Minecart {

public:
    // prevent constructor by default
    MinecartChest& operator=(MinecartChest const&) = delete;
    MinecartChest(MinecartChest const&)            = delete;
    MinecartChest()                                = delete;

public:
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
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
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
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
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?destroy\@MinecartChest\@\@UEAAXAEBVActorDamageSource\@\@_N\@Z
     */
    virtual void destroy(class ActorDamageSource const&, bool); // NOLINT
    /**
     * @vftbl 255
     * @symbol ?getType\@MinecartChest\@\@UEAA?AW4MinecartType\@\@XZ
     */
    virtual enum class MinecartType getType(); // NOLINT
    /**
     * @vftbl 256
     * @symbol ?getDefaultDisplayBlock\@MinecartChest\@\@UEBAPEBVBlock\@\@XZ
     */
    virtual class Block const* getDefaultDisplayBlock() const; // NOLINT
    /**
     * @vftbl 257
     * @symbol __unk_vfn_257
     */
    virtual void __unk_vfn_257(); // NOLINT
    /**
     * @vftbl 259
     * @symbol ?applyNaturalSlowdown\@MinecartChest\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void applyNaturalSlowdown(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ??0MinecartChest\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    MinecartChest(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT

    // private:

private:
    /**
     * @symbol ?ITEMS_SIZE\@MinecartChest\@\@0HB
     */
    MCAPI static int const ITEMS_SIZE; // NOLINT
};
