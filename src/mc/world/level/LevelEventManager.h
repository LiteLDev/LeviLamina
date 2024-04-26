#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"
#include "mc/events/LevelEvent.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LevelEventManager {
public:
    // prevent constructor by default
    LevelEventManager& operator=(LevelEventManager const&);
    LevelEventManager(LevelEventManager const&);
    LevelEventManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LevelEventManager@@UEAA@XZ
    virtual ~LevelEventManager() = default;

    // vIndex: 1, symbol:
    // ?getLevelEventDataConnector@LevelEventManager@@UEAAAEAV?$Connector@$$A6AXW4LevelEvent@@AEBVVec3@@H@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<void(::LevelEvent, class Vec3 const&, int)>& getLevelEventDataConnector();

    // vIndex: 2, symbol:
    // ?getLevelEventCompoundTagConnector@LevelEventManager@@UEAAAEAV?$Connector@$$A6AXW4LevelEvent@@AEBVCompoundTag@@@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<void(::LevelEvent, class CompoundTag const&)>&
    getLevelEventCompoundTagConnector();

    // symbol: ??0LevelEventManager@@QEAA@_NAEBV?$not_null@V?$StackRefResult@VLevelEventCoordinator@@@@@gsl@@@Z
    MCAPI LevelEventManager(bool, gsl::not_null<class StackRefResult<class LevelEventCoordinator>> const&);

    // symbol:
    // ?broadcastLevelEvent@LevelEventManager@@QEAAXW4LevelEvent@@AEBVCompoundTag@@PEBVUserEntityIdentifierComponent@@@Z
    MCAPI void broadcastLevelEvent(::LevelEvent, class CompoundTag const&, class UserEntityIdentifierComponent const*);

    // symbol:
    // ?broadcastLevelEvent@LevelEventManager@@QEAAXW4LevelEvent@@AEBVVec3@@HPEBVUserEntityIdentifierComponent@@@Z
    MCAPI void broadcastLevelEvent(::LevelEvent, class Vec3 const&, int, class UserEntityIdentifierComponent const*);

    // symbol: ?broadcastLocalEvent@LevelEventManager@@QEAAXAEAVIDimension@@W4LevelEvent@@AEBVVec3@@AEBVBlock@@@Z
    MCAPI void broadcastLocalEvent(class IDimension&, ::LevelEvent, class Vec3 const&, class Block const&);

    // symbol: ?broadcastLocalEvent@LevelEventManager@@QEAAXAEAVIDimension@@W4LevelEvent@@AEBVVec3@@H@Z
    MCAPI void broadcastLocalEvent(class IDimension&, ::LevelEvent, class Vec3 const&, int);

    // symbol: ?handleLevelEvent@LevelEventManager@@QEAAXW4LevelEvent@@AEBVCompoundTag@@@Z
    MCAPI void handleLevelEvent(::LevelEvent, class CompoundTag const&);

    // symbol: ?handleLevelEvent@LevelEventManager@@QEAAXW4LevelEvent@@AEBVVec3@@H@Z
    MCAPI void handleLevelEvent(::LevelEvent, class Vec3 const&, int);

    // symbol: ?potionSplash@LevelEventManager@@QEAAXAEBVVec3@@AEBVColor@mce@@_N@Z
    MCAPI void potionSplash(class Vec3 const&, class mce::Color const&, bool);

    // symbol: ?setPacketSender@LevelEventManager@@QEAAXAEAVPacketSender@@@Z
    MCAPI void setPacketSender(class PacketSender&);

    // NOLINTEND
};
