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
    // prevent constructor by default
    ILevelStorageManagerConnector& operator=(ILevelStorageManagerConnector const&);
    ILevelStorageManagerConnector(ILevelStorageManagerConnector const&);
    ILevelStorageManagerConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelStorageManagerConnector() = default;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveConnector() = 0;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveGameDataConnector() = 0;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnSaveLevelDataConnector() = 0;

    // vIndex: 4
    virtual ::Bedrock::PubSub::Connector<void(bool&)>& getOnCanStartGameSaveTimerCheckConnector() = 0;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void(::LevelStorage&)>& getOnStartLeaveGameConnector() = 0;

    // vIndex: 6
    virtual ::Bedrock::PubSub::Connector<void()>& getOnAppSuspendConnector() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
