#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

namespace Editor::Network {

class LogMessageListPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::LogMessageListPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk87fe68;
    // NOLINTEND

public:
    // prevent constructor by default
    LogMessageListPayload& operator=(LogMessageListPayload const&);
    LogMessageListPayload(LogMessageListPayload const&);
    LogMessageListPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LogMessageListPayload() /*override*/;
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
