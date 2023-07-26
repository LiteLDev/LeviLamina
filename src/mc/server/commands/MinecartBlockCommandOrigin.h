#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/BlockCommandOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class MinecartBlockCommandOrigin : public ::BlockCommandOrigin {

public:
    // prevent constructor by default
    MinecartBlockCommandOrigin& operator=(MinecartBlockCommandOrigin const&) = delete;
    MinecartBlockCommandOrigin(MinecartBlockCommandOrigin const&)            = delete;
    MinecartBlockCommandOrigin()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getBlockPosition\@MinecartBlockCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getWorldPosition\@MinecartBlockCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getRotation\@MinecartBlockCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getEntity\@MinecartBlockCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor* getEntity() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@MinecartBlockCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const; // NOLINT
    /**
     * @vftbl 17
     * @symbol ?canUseCommandsWithoutCheatsEnabled\@MinecartBlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@MinecartBlockCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const; // NOLINT
    /**
     * @vftbl 29
     * @symbol ?serialize\@MinecartBlockCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol ?isValid\@MinecartBlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const; // NOLINT
    /**
     * @vftbl 32
     * @symbol ?_getBaseCommandBlock\@MinecartBlockCommandOrigin\@\@MEBAPEAVBaseCommandBlock\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class BaseCommandBlock* _getBaseCommandBlock(class BlockSource&) const; // NOLINT
    /**
     * @vftbl 33
     * @symbol ?_getBlockEntity\@MinecartBlockCommandOrigin\@\@MEBAPEAVCommandBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class CommandBlockActor* _getBlockEntity(class BlockSource&) const; // NOLINT
    /**
     * @symbol ??0MinecartBlockCommandOrigin\@\@QEAA\@AEAVBlockSource\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI MinecartBlockCommandOrigin(class BlockSource&, struct ActorUniqueID const&); // NOLINT
};
