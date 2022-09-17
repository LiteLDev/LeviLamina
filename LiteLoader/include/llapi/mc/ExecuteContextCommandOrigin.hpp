/**
 * @file  ExecuteContextCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "CommandOrigin.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ExecuteContextCommandOrigin.
 *
 */
class ExecuteContextCommandOrigin : public CommandOrigin {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXECUTECONTEXTCOMMANDORIGIN
public:
    class ExecuteContextCommandOrigin& operator=(class ExecuteContextCommandOrigin const &) = delete;
    ExecuteContextCommandOrigin(class ExecuteContextCommandOrigin const &) = delete;
    ExecuteContextCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -395219515
     */
    virtual ~ExecuteContextCommandOrigin();
    /**
     * @vftbl  1
     * @symbol ?getRequestId@ExecuteContextCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1089102869
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@ExecuteContextCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   118639796
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?getBlockPosition@ExecuteContextCommandOrigin@@UEBA?AVBlockPos@@XZ
     * @hash   -1997181263
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol ?getWorldPosition@ExecuteContextCommandOrigin@@UEBA?AVVec3@@XZ
     * @hash   -120444610
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol ?getRotation@ExecuteContextCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
     * @hash   -14172099
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  6
     * @symbol ?getLevel@ExecuteContextCommandOrigin@@UEBAPEAVLevel@@XZ
     * @hash   -1634497225
     */
    virtual class Level * getLevel() const;
    /**
     * @vftbl  7
     * @symbol ?getDimension@ExecuteContextCommandOrigin@@UEBAPEAVDimension@@XZ
     * @hash   158992119
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vftbl  8
     * @symbol ?getEntity@ExecuteContextCommandOrigin@@UEBAPEAVActor@@XZ
     * @hash   1444638193
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  9
     * @symbol ?getPermissionsLevel@ExecuteContextCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
     * @hash   -974160699
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol ?clone@ExecuteContextCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     * @hash   774539339
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  23
     * @symbol ?getOriginType@ExecuteContextCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     * @hash   -1687090870
     */
    virtual enum CommandOriginType getOriginType() const;
    /**
     * @vftbl  27
     * @symbol ?updateValues@ExecuteContextCommandOrigin@@UEAAXXZ
     * @hash   1116836427
     */
    virtual void updateValues();
    /**
     * @vftbl  28
     * @symbol ?getExecutePosition@ExecuteContextCommandOrigin@@UEBA?BVVec3@@HAEBVCommandPositionFloat@@@Z
     * @hash   553411432
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const &) const;
    /**
     * @vftbl  29
     * @symbol ?serialize@ExecuteContextCommandOrigin@@UEBA?AVCompoundTag@@XZ
     * @hash   2039536737
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol ?isValid@ExecuteContextCommandOrigin@@UEBA_NXZ
     * @hash   1026388659
     */
    virtual bool isValid() const;
    /**
     * @symbol ??0ExecuteContextCommandOrigin@@QEAA@UActorUniqueID@@AEBVVec3@@AEBV?$optional@VVec2@@@std@@00W4ActorLocation@@V?$AutomaticID@VDimension@@H@@AEAVLevel@@@Z
     * @hash   2027317012
     */
    MCAPI ExecuteContextCommandOrigin(struct ActorUniqueID, class Vec3 const &, class std::optional<class Vec2> const &, struct ActorUniqueID, struct ActorUniqueID, enum ActorLocation, class AutomaticID<class Dimension, int>, class Level &);
    /**
     * @symbol ?setDimension@ExecuteContextCommandOrigin@@QEAAXAEAVDimension@@@Z
     * @hash   133583490
     */
    MCAPI void setDimension(class Dimension &);
    /**
     * @symbol ?setExecutionEntity@ExecuteContextCommandOrigin@@QEAAXAEBVActor@@@Z
     * @hash   -1467626842
     */
    MCAPI void setExecutionEntity(class Actor const &);
    /**
     * @symbol ?setPosition@ExecuteContextCommandOrigin@@QEAAXAEBVVec3@@@Z
     * @hash   -1388496502
     */
    MCAPI void setPosition(class Vec3 const &);
    /**
     * @symbol ?setPositionEntity@ExecuteContextCommandOrigin@@QEAAXAEBVActor@@@Z
     * @hash   -382915686
     */
    MCAPI void setPositionEntity(class Actor const &);
    /**
     * @symbol ?setRotationEntity@ExecuteContextCommandOrigin@@QEAAXAEBVActor@@@Z
     * @hash   974365776
     */
    MCAPI void setRotationEntity(class Actor const &);
    /**
     * @symbol ?load@ExecuteContextCommandOrigin@@SA?AV?$unique_ptr@VExecuteContextCommandOrigin@@U?$default_delete@VExecuteContextCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
     * @hash   -362546584
     */
    MCAPI static std::unique_ptr<class ExecuteContextCommandOrigin> load(class CompoundTag const &, class ServerLevel &);

};