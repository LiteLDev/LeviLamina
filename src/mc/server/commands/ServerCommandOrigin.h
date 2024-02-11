#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

class ServerLevel;

class ServerCommandOrigin : public ::CommandOrigin {
public:
    ServerLevel*           mServerLevel;
    std::string            mRequestId;
    CommandPermissionLevel mCommandPermissionLevel;
    DimensionType          mDimensionType;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ServerCommandOrigin@@UEAA@XZ
    virtual ~ServerCommandOrigin();

    // vIndex: 1, symbol:
    // ?getRequestId@ServerCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@ServerCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?getBlockPosition@ServerCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@ServerCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@ServerCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6, symbol: ?getLevel@ServerCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const;

    // vIndex: 7, symbol: ?getDimension@ServerCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const;

    // vIndex: 8, symbol: ?getEntity@ServerCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 9, symbol: ?getPermissionsLevel@ServerCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@ServerCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 17, symbol: ?canUseCommandsWithoutCheatsEnabled@ServerCommandOrigin@@UEBA_NXZ
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@ServerCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23, symbol: ?getOriginType@ServerCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29, symbol: ?serialize@ServerCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@ServerCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol:
    // ??0ServerCommandOrigin@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVServerLevel@@W4CommandPermissionLevel@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI ServerCommandOrigin(
        std::string const&       requestId,
        class ServerLevel&       level,
        ::CommandPermissionLevel permission,
        DimensionType            dimensionType
    );

    // symbol:
    // ?load@ServerCommandOrigin@@SA?AV?$unique_ptr@VServerCommandOrigin@@U?$default_delete@VServerCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVServerLevel@@@Z
    MCAPI static std::unique_ptr<class ServerCommandOrigin>
    load(class CompoundTag const& tag, class ServerLevel& level);

    // NOLINTEND
};
