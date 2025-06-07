#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ILocalServerPauseCommunication.h"

class LocalServerPauseCommunication : public ::ILocalServerPauseCommunication {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk76b4a2;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalServerPauseCommunication& operator=(LocalServerPauseCommunication const&);
    LocalServerPauseCommunication(LocalServerPauseCommunication const&);
    LocalServerPauseCommunication();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~LocalServerPauseCommunication() = default;

    // vIndex: 0
    virtual bool requestInGamePause(bool) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
