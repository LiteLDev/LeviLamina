/**
 * @file  ActorCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorCommandOrigin.
 *
 */
class ActorCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCOMMANDORIGIN
public:
    class ActorCommandOrigin& operator=(class ActorCommandOrigin const &) = delete;
    ActorCommandOrigin(class ActorCommandOrigin const &) = delete;
    ActorCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   121877542
     */
    virtual ~ActorCommandOrigin();
    /**
     * @vftbl  1
     * @symbol ?getRequestId@ActorCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -61839184
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ActorCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   331403327
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?getBlockPosition@ActorCommandOrigin@@UEBA?AVBlockPos@@XZ
     * @hash   593937868
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol ?getWorldPosition@ActorCommandOrigin@@UEBA?AVVec3@@XZ
     * @hash   1951338329
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol ?getRotation@ActorCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     * @hash   416672744
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  6
     * @symbol ?getLevel@ActorCommandOrigin@@UEBAPEAVLevel@@XZ
     * @hash   1513877090
     */
    virtual class Level * getLevel() const;
    /**
     * @vftbl  7
     * @symbol ?getDimension@ActorCommandOrigin@@UEBAPEAVDimension@@XZ
     * @hash   -1679029678
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vftbl  8
     * @symbol ?getEntity@ActorCommandOrigin@@UEBAPEAVActor@@XZ
     * @hash   3219500
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  9
     * @symbol ?getPermissionsLevel@ActorCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     * @hash   1506202976
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol ?clone@ActorCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     * @hash   -1754376602
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@ActorCommandOrigin@@UEBA_NXZ
     * @hash   -630471506
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @vftbl  23
     * @symbol ?getOriginType@ActorCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     * @hash   394527429
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @vftbl  29
     * @symbol ?serialize@ActorCommandOrigin@@UEBA?AVCompoundTag@@XZ
     * @hash   1873863052
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol ?isValid@ActorCommandOrigin@@UEBA_NXZ
     * @hash   -1289843010
     */
    virtual bool isValid() const;
    /**
     * @symbol ??0ActorCommandOrigin@@QEAA@AEAVActor@@@Z
     * @hash   1269574263
     */
    MCAPI ActorCommandOrigin(class Actor &);
    /**
     * @symbol ?load@ActorCommandOrigin@@SA?AV?$unique_ptr@VActorCommandOrigin@@U?$default_delete@VActorCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     * @hash   -1432911650
     */
    MCAPI static std::unique_ptr<class ActorCommandOrigin> load(class CompoundTag const &, class Level &);

};