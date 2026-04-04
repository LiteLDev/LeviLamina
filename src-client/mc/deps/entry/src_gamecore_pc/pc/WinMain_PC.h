#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/entry/src_gamecore_pc/application/gamecore/WinMain.h"

// auto generated forward declare list
// clang-format off
class WindowState;
namespace Bedrock { class ApplicationInitHandler; }
namespace MainGameCore { class WndProc; }
// clang-format on

namespace MainGameCore {

class WinMain_PC : public ::MainGameCore::WinMain {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WindowState>> mWindowState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WinMain_PC() /*override*/ = default;

    virtual ::std::unique_ptr<::MainGameCore::WndProc> _createWndProcInstance() /*override*/;

    virtual void _prepareForWindowCreation() /*override*/;

    virtual ::tagWNDCLASSEXW _createWindowClass(::HINSTANCE__* hInstance) /*override*/;

    virtual ::tagRECT _getInitialClientAreaAndShowCommand(int& showCommand) /*override*/;

    virtual void _postWindowCreationSetup(::HWND__* hwnd) /*override*/;

    virtual ::gsl::not_null<::Bedrock::ApplicationInitHandler*> _getAppInitHandler() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::MainGameCore::WndProc> $_createWndProcInstance();

    MCAPI void $_prepareForWindowCreation();

    MCAPI ::tagWNDCLASSEXW $_createWindowClass(::HINSTANCE__* hInstance);

    MCAPI ::tagRECT $_getInitialClientAreaAndShowCommand(int& showCommand);

    MCAPI void $_postWindowCreationSetup(::HWND__* hwnd);

    MCAPI ::gsl::not_null<::Bedrock::ApplicationInitHandler*> $_getAppInitHandler();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace MainGameCore
