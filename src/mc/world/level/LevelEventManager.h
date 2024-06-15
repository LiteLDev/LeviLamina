#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"
#include "mc/events/LevelEvent.h"

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

    // symbol:
    // ?broadcastLevelEvent@LevelEventManager@@QEAAXW4LevelEvent@@AEBVVec3@@HPEBVUserEntityIdentifierComponent@@@Z
    MCAPI void broadcastLevelEvent(::LevelEvent, class Vec3 const&, int, class UserEntityIdentifierComponent const*);

    // symbol: ?broadcastLocalEvent@LevelEventManager@@QEAAXAEAVIDimension@@W4LevelEvent@@AEBVVec3@@H@Z
    MCAPI void broadcastLocalEvent(class IDimension&, ::LevelEvent, class Vec3 const&, int);

    // NOLINTEND
};
