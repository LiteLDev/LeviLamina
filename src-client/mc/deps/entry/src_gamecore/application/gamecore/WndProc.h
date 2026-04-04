#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class Platform_GameCore; }
// clang-format on

namespace MainGameCore {

class WndProc {
public:
    // WndProc inner types declare
    // clang-format off
    struct WndProcParams;
    // clang-format on

    // WndProc inner types define
    struct WndProcParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Bedrock::Platform_GameCore*> platform;
        ::ll::TypedStorage<8, 8, ::HWND__*>                     hwnd;
        ::ll::TypedStorage<4, 4, uint>                          uMsg;
        ::ll::TypedStorage<8, 8, uint64>                        wParam;
        ::ll::TypedStorage<8, 8, int64>                         lParam;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WndProc() = default;

    virtual ::std::optional<int64> onClose(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onDestroy(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onShow(::MainGameCore::WndProc::WndProcParams params);

    virtual ::std::optional<int64> onSize(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onSessionChange(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onSettingChange(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onEnterSizeMove(::MainGameCore::WndProc::WndProcParams params);

    virtual ::std::optional<int64> onExitSizeMove(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onGetMinMaxInfo(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onDPIChange(::MainGameCore::WndProc::WndProcParams params);

    virtual ::std::optional<int64> onCompacting(::MainGameCore::WndProc::WndProcParams params);

    virtual ::std::optional<int64> onSysCommand(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onActivateApp(::MainGameCore::WndProc::WndProcParams params);

    virtual ::std::optional<int64> onFocusChange(::MainGameCore::WndProc::WndProcParams params);

    virtual ::std::optional<int64> onPointerAction(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onMouseAction(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onKeyboardAction(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onRawInput(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onMouseMove(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onMouseLeave(::MainGameCore::WndProc::WndProcParams);

    virtual ::std::optional<int64> onChar(::MainGameCore::WndProc::WndProcParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<int64> $onShow(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onEnterSizeMove(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onDPIChange(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onCompacting(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onActivateApp(::MainGameCore::WndProc::WndProcParams params);

    MCAPI ::std::optional<int64> $onFocusChange(::MainGameCore::WndProc::WndProcParams params);
    // NOLINTEND
};

} // namespace MainGameCore
