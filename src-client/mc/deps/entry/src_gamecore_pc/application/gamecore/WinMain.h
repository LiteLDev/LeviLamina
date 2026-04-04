#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class ActivationArguments; }
namespace Bedrock { class ApplicationInitHandler; }
namespace Bedrock { class Platform_GameCore; }
namespace MainGameCore { class WndProc; }
// clang-format on

namespace MainGameCore {

class WinMain {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::Platform_GameCore>> mPlatform;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::MainGameCore::WndProc>>       mWndProcHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WinMain() = default;

    virtual void _processProtocolActivationArguments(::Bedrock::ActivationArguments& args);

    virtual ::std::unique_ptr<::MainGameCore::WndProc> _createWndProcInstance() = 0;

    virtual void _prepareForWindowCreation() = 0;

    virtual ::tagWNDCLASSEXW _createWindowClass(::HINSTANCE__*) = 0;

    virtual ::tagRECT _getInitialClientAreaAndShowCommand(int&) = 0;

    virtual void _postWindowCreationSetup(::HWND__*) = 0;

    virtual ::gsl::not_null<::Bedrock::ApplicationInitHandler*> _getAppInitHandler() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_processProtocolActivationArguments(::Bedrock::ActivationArguments& args);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace MainGameCore
