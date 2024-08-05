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
    // vIndex: 0
    virtual ~LevelEventManager() = default;

    // vIndex: 1
    virtual class Bedrock::PubSub::Connector<void(::LevelEvent, class Vec3 const&, int)>& getLevelEventDataConnector();

    // vIndex: 2
    virtual class Bedrock::PubSub::Connector<void(::LevelEvent, class CompoundTag const&)>&
    getLevelEventCompoundTagConnector();

    MCAPI void broadcastLevelEvent(::LevelEvent, class Vec3 const&, int, class UserEntityIdentifierComponent const*);

    MCAPI void broadcastLocalEvent(class IDimension&, ::LevelEvent, class Vec3 const&, int);

    // NOLINTEND
};
