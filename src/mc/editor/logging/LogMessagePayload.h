#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class LogMessagePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::LogMessagePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk50f857;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessagePayload& operator=(LogMessagePayload const&);
    LogMessagePayload(LogMessagePayload const&);
    LogMessagePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LogMessagePayload() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
