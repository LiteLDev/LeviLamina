#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/level/block/LevelEvent.h"

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

    MCAPI void broadcastLevelEvent(
        ::LevelEvent                               type,
        class Vec3 const&                          pos,
        int                                        data,
        class UserEntityIdentifierComponent const* userIdentifier
    );

    MCAPI void broadcastLocalEvent(class IDimension& dimension, ::LevelEvent type, class Vec3 const& pos, int data);

    // NOLINTEND
};
