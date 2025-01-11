#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/Mode.h"
#include "mc/editor/serviceproviders/ModeServiceProvider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class ModeChangedPayload; }
// clang-format on

namespace Editor::Services {

class ModeService : public ::Editor::Services::IEditorService, public ::Editor::Services::ModeServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk5225b4;
    ::ll::UntypedStorage<8, 16> mUnkcd1e6b;
    ::ll::UntypedStorage<4, 4>  mUnk4d8d86;
    // NOLINTEND

public:
    // prevent constructor by default
    ModeService& operator=(ModeService const&);
    ModeService(ModeService const&);
    ModeService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ModeService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 1
    virtual ::Editor::Mode getMode() const /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> trySetMode(::Editor::Mode newMode) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    listenForModeChange(::std::function<void(::Editor::Mode, ::Editor::Mode)> func) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> _doSwitchMode(::Editor::Mode) = 0;

    // vIndex: 8
    virtual void _handleModeChangedPayload(::Editor::Network::ModeChangedPayload const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ModeService(::Editor::ServiceProviderCollection& providers);

    MCAPI void _dispatchModeChangedEvent(::Editor::Mode from, ::Editor::Mode to);

    MCAPI void _setCurrentMode(::Editor::Mode mode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::Scripting::Result<void> $quit();

    MCFOLD ::Editor::Mode $getMode() const;

    MCAPI ::Scripting::Result<void> $trySetMode(::Editor::Mode newMode);

    MCFOLD ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
    $listenForModeChange(::std::function<void(::Editor::Mode, ::Editor::Mode)> func);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForModeServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
