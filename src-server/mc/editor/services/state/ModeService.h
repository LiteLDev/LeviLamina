#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/Mode.h"
#include "mc/editor/serviceproviders/ModeServiceProvider.h"
#include "mc/editor/services/IEditorService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Network { class ModeChangedPayload; }
// clang-format on

namespace Editor::Services {

class ModeService : public ::Editor::Services::IEditorService, public ::Editor::Services::ModeServiceProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk74980a;
    ::ll::UntypedStorage<8, 16> mUnkcd1e6b;
    ::ll::UntypedStorage<4, 4> mUnk4d8d86;
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
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 1
    virtual ::Editor::Mode getMode() const /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> trySetMode(::Editor::Mode newMode) /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> listenForModeChange(::std::function<void(::Editor::Mode, ::Editor::Mode)> func) /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<void> _doSwitchMode(::Editor::Mode) = 0;

    // vIndex: 8
    virtual void _handleModeChangedPayload(::Editor::Network::ModeChangedPayload const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Editor::Mode $getMode() const;

    MCNAPI ::Scripting::Result_deprecated<void> $trySetMode(::Editor::Mode newMode);

    MCNAPI ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> $listenForModeChange(::std::function<void(::Editor::Mode, ::Editor::Mode)> func);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForModeServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND

};

}
