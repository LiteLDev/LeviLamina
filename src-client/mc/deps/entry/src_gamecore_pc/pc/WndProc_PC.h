#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/entry/src_gamecore/application/gamecore/WndProc.h"
#include "mc/deps/input/TouchContactPoints.h"

// auto generated forward declare list
// clang-format off
class WindowState;
// clang-format on

namespace MainGameCore {

class WndProc_PC : public ::MainGameCore::WndProc {
public:
    // WndProc_PC inner types declare
    // clang-format off
    struct InputState;
    // clang-format on

    // WndProc_PC inner types define
    struct InputState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 48, ::TouchContactPoints> touchContactPoints;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::MainGameCore::WndProc_PC::InputState> mInputState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WindowState>>        mWindowState;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WndProc_PC() /*override*/ = default;

    virtual ::std::optional<int64> onClose(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onDestroy(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onSize(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onSessionChange(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onSettingChange(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onExitSizeMove(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onGetMinMaxInfo(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onSysCommand(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onPointerAction(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onMouseAction(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onKeyboardAction(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onRawInput(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onMouseMove(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onMouseLeave(::MainGameCore::WndProc::WndProcParams params) /*override*/;

    virtual ::std::optional<int64> onChar(::MainGameCore::WndProc::WndProcParams params) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<int64> $onClose(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onDestroy(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onSize(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onSessionChange(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onSettingChange(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onExitSizeMove(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onGetMinMaxInfo(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onSysCommand(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onPointerAction(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onMouseAction(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onKeyboardAction(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onRawInput(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onMouseMove(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onMouseLeave(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onChar(::MainGameCore::WndProc::WndProcParams params);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace MainGameCore
