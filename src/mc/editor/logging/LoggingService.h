#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/script/LoggingServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class LogMessage; }
// clang-format on

namespace Editor::Services {

class LoggingService : public ::Editor::Services::IEditorService, public ::Editor::Services::LoggingServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkb9e713;
    // NOLINTEND

public:
    // prevent constructor by default
    LoggingService& operator=(LoggingService const&);
    LoggingService(LoggingService const&);
    LoggingService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoggingService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    listenForLogMessage(::std::function<void(::Editor::LogMessage const&)> func) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Scripting::Result<void> $init();

    MCFOLD ::Scripting::Result<void> $quit();

    MCFOLD ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $listenForLogMessage(::std::function<void(::Editor::LogMessage const&)> func);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForLoggingServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
