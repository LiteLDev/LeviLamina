#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
// clang-format on

class ILevelStorageManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelStorageManagerConnector() = default;

    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveGameDataConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveLevelDataConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(bool&)>& getOnCanStartGameSaveTimerCheckConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnStartLeaveGameConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnAppSuspendConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
