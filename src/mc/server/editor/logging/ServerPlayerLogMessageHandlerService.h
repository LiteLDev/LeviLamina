#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/runtime/Result.h"

namespace Editor::Services {

class ServerPlayerLogMessageHandlerService : public ::Editor::Services::IEditorService {
public:
    // prevent constructor by default
    ServerPlayerLogMessageHandlerService& operator=(ServerPlayerLogMessageHandlerService const&);
    ServerPlayerLogMessageHandlerService(ServerPlayerLogMessageHandlerService const&);
    ServerPlayerLogMessageHandlerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPlayerLogMessageHandlerService() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $ready();

    MCAPI ::Scripting::Result<void> $quit();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
