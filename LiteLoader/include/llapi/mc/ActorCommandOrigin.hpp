/**
 * @file  ActorCommandOrigin.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~ActorCommandOrigin();
    /**
     * @hash   -61839184
     * @vftbl  1
     * @symbol ?getRequestId@ActorCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @hash   331403327
     * @vftbl  2
     * @symbol ?getName@ActorCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   593937868
     * @vftbl  3
     * @symbol ?getBlockPosition@ActorCommandOrigin@@UEBA?AVBlockPos@@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @hash   1951338329
     * @vftbl  4
     * @symbol ?getWorldPosition@ActorCommandOrigin@@UEBA?AVVec3@@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @hash   416672744
     * @vftbl  5
     * @symbol ?getRotation@ActorCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @hash   1513877090
     * @vftbl  6
     * @symbol ?getLevel@ActorCommandOrigin@@UEBAPEAVLevel@@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @hash   -1679029678
     * @vftbl  7
     * @symbol ?getDimension@ActorCommandOrigin@@UEBAPEAVDimension@@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @hash   3219500
     * @vftbl  8
     * @symbol ?getEntity@ActorCommandOrigin@@UEBAPEAVActor@@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @hash   1506202976
     * @vftbl  9
     * @symbol ?getPermissionsLevel@ActorCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @hash   -1754376602
     * @vftbl  10
     * @symbol ?clone@ActorCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @hash   -630471506
     * @vftbl  18
     * @symbol ?isSelectorExpansionAllowed@ActorCommandOrigin@@UEBA_NXZ
     */
    virtual bool isSelectorExpansionAllowed() const;
    /**
     * @hash   394527429
     * @vftbl  23
     * @symbol ?getOriginType@ActorCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @hash   1873863052
     * @vftbl  29
     * @symbol ?serialize@ActorCommandOrigin@@UEBA?AVCompoundTag@@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @hash   -1289843010
     * @vftbl  30
     * @symbol ?isValid@ActorCommandOrigin@@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @hash   1269574263
     * @symbol ??0ActorCommandOrigin@@QEAA@AEAVActor@@@Z
     */
    MCAPI ActorCommandOrigin(class Actor &);
    /**
     * @hash   -1432911650
     * @symbol ?load@ActorCommandOrigin@@SA?AV?$unique_ptr@VActorCommandOrigin@@U?$default_delete@VActorCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI static std::unique_ptr<class ActorCommandOrigin> load(class CompoundTag const &, class Level &);

};