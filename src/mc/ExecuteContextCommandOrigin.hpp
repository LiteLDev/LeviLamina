/**
 * @file  ExecuteContextCommandOrigin.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ExecuteContextCommandOrigin();
    /**
     * @vftbl  1
     * @symbol  ?getRequestId\@ExecuteContextCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getRequestId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ExecuteContextCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?getBlockPosition\@ExecuteContextCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol  ?getWorldPosition\@ExecuteContextCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  5
     * @symbol  ?getRotation\@ExecuteContextCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const;
    /**
     * @vftbl  6
     * @symbol  ?getLevel\@ExecuteContextCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level * getLevel() const;
    /**
     * @vftbl  7
     * @symbol  ?getDimension\@ExecuteContextCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension * getDimension() const;
    /**
     * @vftbl  8
     * @symbol  ?getEntity\@ExecuteContextCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  9
     * @symbol  ?getPermissionsLevel\@ExecuteContextCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const;
    /**
     * @vftbl  10
     * @symbol  ?clone\@ExecuteContextCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  23
     * @symbol  ?getOriginType\@ExecuteContextCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl  27
     * @symbol  ?updateValues\@ExecuteContextCommandOrigin\@\@UEAAXXZ
     */
    virtual void updateValues();
    /**
     * @vftbl  28
     * @symbol  ?getExecutePosition\@ExecuteContextCommandOrigin\@\@UEBA?BVVec3\@\@HAEBVCommandPositionFloat\@\@\@Z
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const &) const;
    /**
     * @vftbl  29
     * @symbol  ?serialize\@ExecuteContextCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol  ?isValid\@ExecuteContextCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @symbol  ??0ExecuteContextCommandOrigin\@\@QEAA\@UActorUniqueID\@\@AEBVVec3\@\@AEBV?$optional\@VVec2\@\@\@std\@\@00W4ActorLocation\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVLevel\@\@\@Z
     */
    MCAPI ExecuteContextCommandOrigin(struct ActorUniqueID, class Vec3 const &, class std::optional<class Vec2> const &, struct ActorUniqueID, struct ActorUniqueID, enum class ActorLocation, class AutomaticID<class Dimension, int>, class Level &);
    /**
     * @symbol  ?getPositionEntity\@ExecuteContextCommandOrigin\@\@QEAAPEBVActor\@\@XZ
     */
    MCAPI class Actor const * getPositionEntity();
    /**
     * @symbol  ?setDimension\@ExecuteContextCommandOrigin\@\@QEAAXAEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setDimension(class AutomaticID<class Dimension, int> const &);
    /**
     * @symbol  ?setDimension\@ExecuteContextCommandOrigin\@\@QEAAXAEBVDimension\@\@\@Z
     */
    MCAPI void setDimension(class Dimension const &);
    /**
     * @symbol  ?setExecutionEntity\@ExecuteContextCommandOrigin\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void setExecutionEntity(class Actor const &);
    /**
     * @symbol  ?setPosition\@ExecuteContextCommandOrigin\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPosition(class Vec3 const &);
    /**
     * @symbol  ?setPositionEntity\@ExecuteContextCommandOrigin\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void setPositionEntity(class Actor const &);
    /**
     * @symbol  ?setRotation\@ExecuteContextCommandOrigin\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotation(class Vec2 const &);
    /**
     * @symbol  ?setRotationEntity\@ExecuteContextCommandOrigin\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void setRotationEntity(class Actor const &);
    /**
     * @symbol  ?load\@ExecuteContextCommandOrigin\@\@SA?AV?$unique_ptr\@VExecuteContextCommandOrigin\@\@U?$default_delete\@VExecuteContextCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVServerLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ExecuteContextCommandOrigin> load(class CompoundTag const &, class ServerLevel &);

};