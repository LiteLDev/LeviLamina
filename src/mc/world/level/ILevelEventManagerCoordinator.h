#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/level/block/LevelEvent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
// clang-format on

class ILevelEventManagerCoordinator {
public:
    // prevent constructor by default
    ILevelEventManagerCoordinator& operator=(ILevelEventManagerCoordinator const&);
    ILevelEventManagerCoordinator(ILevelEventManagerCoordinator const&);
    ILevelEventManagerCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelEventManagerCoordinator();

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::LevelEvent, ::Vec3 const&, int)>& getLevelEventDataConnector() = 0;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::LevelEvent, ::CompoundTag const&)>&
    getLevelEventCompoundTagConnector() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
