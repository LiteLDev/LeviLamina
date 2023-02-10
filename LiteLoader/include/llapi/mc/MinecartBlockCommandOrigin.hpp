/**
 * @file  MinecartBlockCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   1778431393
     * @vftbl  3
     * @symbol  ?getBlockPosition\@MinecartBlockCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   563191182
     * @vftbl  4
     * @symbol  ?getWorldPosition\@MinecartBlockCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   955544845
     * @vftbl  5
     * @symbol  ?getRotation\@MinecartBlockCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   154214385
     * @vftbl  8
     * @symbol  ?getEntity\@MinecartBlockCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   978896059
     * @vftbl  10
     * @symbol  ?clone\@MinecartBlockCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   1191723081
     * @vftbl  17
     * @symbol  ?canUseCommandsWithoutCheatsEnabled\@MinecartBlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @hash   -1153562214
     * @vftbl  23
     * @symbol  ?getOriginType\@MinecartBlockCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   1339857153
     * @vftbl  29
     * @symbol  ?serialize\@MinecartBlockCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   -1667023901
     * @vftbl  30
     * @symbol  ?isValid\@MinecartBlockCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   -512515107
     * @vftbl  32
     * @symbol  ?_getBaseCommandBlock\@MinecartBlockCommandOrigin\@\@MEBAPEAVBaseCommandBlock\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class BaseCommandBlock * _getBaseCommandBlock(class BlockSource &) const;
    /**
     * @hash   1798666262
     * @vftbl  33
     * @symbol  ?_getBlockEntity\@MinecartBlockCommandOrigin\@\@MEBAPEAVCommandBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    virtual class CommandBlockActor * _getBlockEntity(class BlockSource &) const;
    /**
     * @hash   -1736871369
     * @symbol  ??0MinecartBlockCommandOrigin\@\@QEAA\@AEAVBlockSource\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI MinecartBlockCommandOrigin(class BlockSource &, struct ActorUniqueID const &);
    /**
     * @hash   765181288
     * @symbol  ?load\@MinecartBlockCommandOrigin\@\@SA?AV?$unique_ptr\@VMinecartBlockCommandOrigin\@\@U?$default_delete\@VMinecartBlockCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class MinecartBlockCommandOrigin> load(class CompoundTag const &, class Level &);

};