#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ExecuteContextCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    ExecuteContextCommandOrigin& operator=(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ExecuteContextCommandOrigin();

    // vIndex: 1, symbol:
    // ?getRequestId@ExecuteContextCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@ExecuteContextCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?getBlockPosition@ExecuteContextCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@ExecuteContextCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@ExecuteContextCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6, symbol: ?getLevel@ExecuteContextCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const;

    // vIndex: 7, symbol: ?getDimension@ExecuteContextCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const;

    // vIndex: 8, symbol: ?getEntity@ExecuteContextCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 9, symbol: ?getPermissionsLevel@ExecuteContextCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@ExecuteContextCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 23, symbol: ?getOriginType@ExecuteContextCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 27, symbol: ?updateValues@ExecuteContextCommandOrigin@@UEAAXXZ
    virtual void updateValues();

    // vIndex: 28, symbol: ?getExecutePosition@ExecuteContextCommandOrigin@@UEBA?BVVec3@@HAEBVCommandPositionFloat@@@Z
    virtual class Vec3 const getExecutePosition(int, class CommandPositionFloat const&) const;

    // vIndex: 29, symbol: ?serialize@ExecuteContextCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@ExecuteContextCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol:
    // ??0ExecuteContextCommandOrigin@@QEAA@UActorUniqueID@@AEBVVec3@@AEBV?$optional@VVec2@@@std@@00W4ActorLocation@@V?$AutomaticID@VDimension@@H@@AEAVLevel@@H@Z
    MCAPI ExecuteContextCommandOrigin(
        struct ActorUniqueID,
        class Vec3 const&,
        std::optional<class Vec2> const&,
        struct ActorUniqueID,
        struct ActorUniqueID,
        ::ActorLocation,
        DimensionType,
        class Level&,
        int
    );

    // symbol: ?getPositionEntity@ExecuteContextCommandOrigin@@QEAAPEBVActor@@XZ
    MCAPI class Actor const* getPositionEntity();

    // symbol: ?setDimension@ExecuteContextCommandOrigin@@QEAAXAEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI void setDimension(DimensionType const&);

    // symbol: ?setDimension@ExecuteContextCommandOrigin@@QEAAXAEBVDimension@@@Z
    MCAPI void setDimension(class Dimension const&);

    // symbol: ?setExecutionEntity@ExecuteContextCommandOrigin@@QEAAXAEBVActor@@@Z
    MCAPI void setExecutionEntity(class Actor const&);

    // symbol: ?setPosition@ExecuteContextCommandOrigin@@QEAAXAEBVVec3@@@Z
    MCAPI void setPosition(class Vec3 const&);

    // symbol: ?setPositionEntity@ExecuteContextCommandOrigin@@QEAAXAEBVActor@@@Z
    MCAPI void setPositionEntity(class Actor const&);

    // symbol: ?setRotation@ExecuteContextCommandOrigin@@QEAAXAEBVVec2@@@Z
    MCAPI void setRotation(class Vec2 const&);

    // symbol: ?setRotationEntity@ExecuteContextCommandOrigin@@QEAAXAEBVActor@@@Z
    MCAPI void setRotationEntity(class Actor const&);

    // symbol:
    // ?load@ExecuteContextCommandOrigin@@SA?AV?$unique_ptr@VExecuteContextCommandOrigin@@U?$default_delete@VExecuteContextCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
    MCAPI static std::unique_ptr<class ExecuteContextCommandOrigin> load(class CompoundTag const&, class ServerLevel&);

    // NOLINTEND
};
