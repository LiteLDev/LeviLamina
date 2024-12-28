#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class LogMessage; }
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

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LogMessageListPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LogMessageListPayload();

    MCAPI explicit LogMessageListPayload(::std::vector<::Editor::LogMessage> const& message);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::vector<::Editor::LogMessage> const& message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
