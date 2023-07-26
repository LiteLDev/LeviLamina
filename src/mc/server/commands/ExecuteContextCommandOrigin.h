#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/websockets/CommandOrigin.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ExecuteContextCommandOrigin : public ::CommandOrigin {

public:
    // prevent constructor by default
    ExecuteContextCommandOrigin& operator=(ExecuteContextCommandOrigin const&) = delete;
    ExecuteContextCommandOrigin(ExecuteContextCommandOrigin const&)            = delete;
    ExecuteContextCommandOrigin()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?getRequestId\@ExecuteContextCommandOrigin\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getRequestId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ExecuteContextCommandOrigin\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?getBlockPosition\@ExecuteContextCommandOrigin\@\@UEBA?AVBlockPos\@\@XZ
     */
    virtual class BlockPos getBlockPosition() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?getWorldPosition\@ExecuteContextCommandOrigin\@\@UEBA?AVVec3\@\@XZ
     */
    virtual class Vec3 getWorldPosition() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getRotation\@ExecuteContextCommandOrigin\@\@UEBA?AV?$optional\@VVec2\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec2> getRotation() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getLevel\@ExecuteContextCommandOrigin\@\@UEBAPEAVLevel\@\@XZ
     */
    virtual class Level* getLevel() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getDimension\@ExecuteContextCommandOrigin\@\@UEBAPEAVDimension\@\@XZ
     */
    virtual class Dimension* getDimension() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getEntity\@ExecuteContextCommandOrigin\@\@UEBAPEAVActor\@\@XZ
     */
    virtual class Actor* getEntity() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getPermissionsLevel\@ExecuteContextCommandOrigin\@\@UEBA?AW4CommandPermissionLevel\@\@XZ
     */
    virtual enum class CommandPermissionLevel getPermissionsLevel() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?clone\@ExecuteContextCommandOrigin\@\@UEBA?AV?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?getOriginType\@ExecuteContextCommandOrigin\@\@UEBA?AW4CommandOriginType\@\@XZ
     */
    virtual enum class CommandOriginType getOriginType() const; // NOLINT
    /**
     * @vftbl 27
     * @symbol ?updateValues\@ExecuteContextCommandOrigin\@\@UEAAXXZ
     */
    virtual void updateValues(); // NOLINT
    /**
     * @vftbl 28
     * @symbol ?getExecutePosition\@ExecuteContextCommandOrigin\@\@UEBA?BVVec3\@\@HAEBVCommandPositionFloat\@\@\@Z
     */
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const&) const; // NOLINT
    /**
     * @vftbl 29
     * @symbol ?serialize\@ExecuteContextCommandOrigin\@\@UEBA?AVCompoundTag\@\@XZ
     */
    virtual class CompoundTag serialize() const; // NOLINT
    /**
     * @vftbl 30
     * @symbol ?isValid\@ExecuteContextCommandOrigin\@\@UEBA_NXZ
     */
    virtual bool isValid() const; // NOLINT
    /**
     * @symbol
     * ??0ExecuteContextCommandOrigin\@\@QEAA\@UActorUniqueID\@\@AEBVVec3\@\@AEBV?$optional\@VVec2\@\@\@std\@\@00W4ActorLocation\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVLevel\@\@H\@Z
     */
    MCAPI ExecuteContextCommandOrigin(
        struct ActorUniqueID,
        class Vec3 const&,
        class std::optional<class Vec2> const&,
        struct ActorUniqueID,
        struct ActorUniqueID,
        enum class ActorLocation,
        class AutomaticID<class Dimension, int>,
        class Level&,
        int
    ); // NOLINT
    /**
     * @symbol ?getPositionEntity\@ExecuteContextCommandOrigin\@\@QEAAPEBVActor\@\@XZ
     */
    MCAPI class Actor const* getPositionEntity(); // NOLINT
    /**
     * @symbol ?setDimension\@ExecuteContextCommandOrigin\@\@QEAAXAEBV?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void setDimension(class AutomaticID<class Dimension, int> const&); // NOLINT
    /**
     * @symbol ?setDimension\@ExecuteContextCommandOrigin\@\@QEAAXAEBVDimension\@\@\@Z
     */
    MCAPI void setDimension(class Dimension const&); // NOLINT
    /**
     * @symbol ?setExecutionEntity\@ExecuteContextCommandOrigin\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void setExecutionEntity(class Actor const&); // NOLINT
    /**
     * @symbol ?setPosition\@ExecuteContextCommandOrigin\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void setPosition(class Vec3 const&); // NOLINT
    /**
     * @symbol ?setPositionEntity\@ExecuteContextCommandOrigin\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void setPositionEntity(class Actor const&); // NOLINT
    /**
     * @symbol ?setRotation\@ExecuteContextCommandOrigin\@\@QEAAXAEBVVec2\@\@\@Z
     */
    MCAPI void setRotation(class Vec2 const&); // NOLINT
    /**
     * @symbol ?setRotationEntity\@ExecuteContextCommandOrigin\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void setRotationEntity(class Actor const&); // NOLINT
    /**
     * @symbol
     * ?load\@ExecuteContextCommandOrigin\@\@SA?AV?$unique_ptr\@VExecuteContextCommandOrigin\@\@U?$default_delete\@VExecuteContextCommandOrigin\@\@\@std\@\@\@std\@\@AEBVCompoundTag\@\@AEAVServerLevel\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ExecuteContextCommandOrigin>
    load(class CompoundTag const&, class ServerLevel&); // NOLINT
};
