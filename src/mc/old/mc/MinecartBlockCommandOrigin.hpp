/**
 * @file  MinecartBlockCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
#include "BlockCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartBlockCommandOrigin.
 *
 */
class MinecartBlockCommandOrigin : public BlockCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTBLOCKCOMMANDORIGIN
public:
    class MinecartBlockCommandOrigin& operator=(class MinecartBlockCommandOrigin const &) = delete;
    MinecartBlockCommandOrigin(class MinecartBlockCommandOrigin const &) = delete;
    MinecartBlockCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MinecartBlockCommandOrigin();
    /**
     * @vftbl  3
     * @symbol  ?getBlockPosition\@MinecartBlockCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol  ?getWorldPosition\@MinecartBlockCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol  ?getRotation\@MinecartBlockCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  8
     * @symbol  ?getEntity\@MinecartBlockCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  10
     * @symbol  ?clone\@MinecartBlockCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@MinecartBlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  23
     * @symbol  ?getOriginType\@MinecartBlockCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl  29
     * @symbol  ?serialize\@MinecartBlockCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol  ?isValid\@MinecartBlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl  32
     * @symbol  ?_getBaseCommandBlock\@MinecartBlockCommandOrigin\@\@MEBAPEAVBaseCommandBlock\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class BaseCommandBlock * _getBaseCommandBlock(class BlockSource &) const;
    /**
     * @vftbl  33
     * @symbol  ?_getBlockEntity\@MinecartBlockCommandOrigin\@\@MEBAPEAVCommandBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class CommandBlockActor * _getBlockEntity(class BlockSource &) const;
    /**
     * @symbol  ??0MinecartBlockCommandOrigin\@\@QEAA\@AEAVBlockSource\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI MinecartBlockCommandOrigin(class BlockSource &, struct ActorUniqueID const &);
    /**
     * @symbol  ?load\@MinecartBlockCommandOrigin\@\@SA?AV?$unique_ptr\@VMinecartBlockCommandOrigin\@\@U?$default_delete\@VMinecartBlockCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class MinecartBlockCommandOrigin> load(class CompoundTag const &, class Level &);

};