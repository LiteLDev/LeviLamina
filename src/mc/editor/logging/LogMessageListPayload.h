#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    virtual ~LogMessageListPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
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
