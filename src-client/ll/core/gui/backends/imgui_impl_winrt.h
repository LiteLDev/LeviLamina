#pragma once
#include <windows.h>

#pragma warning(push)
#pragma warning(disable : 4265)
#pragma warning(disable : 5204)
#include <Windows.UI.Core.h>
#include <wrl.h>
#pragma warning(pop)

#include "imgui.h"

class ImGuiInputEventHandler {
public:
    ImGuiInputEventHandler(ABI::Windows::UI::Core::ICoreWindow* window);
    ~ImGuiInputEventHandler();

private:
    Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>                  window;
    Microsoft::WRL::ComPtr<ABI::Windows::Graphics::Display::IDisplayInformation> displayInfo;
    EventRegistrationToken pointerMovedToken, pointerExitedToken, pointerPressedToken, pointerReleasedToken,
        pointerWheelChangedToken;
    EventRegistrationToken keyDownToken, keyUpToken;
    EventRegistrationToken characterReceivedToken;
    EventRegistrationToken dpiChangedToken;
    float                  dpi;

    void updateMouseButtonState(ABI::Windows::UI::Core::IPointerEventArgs* args);
    HRESULT
    onPointerMoved(ABI::Windows::UI::Core::ICoreWindow* sender, ABI::Windows::UI::Core::IPointerEventArgs* args);
    HRESULT
    onPointerExited(ABI::Windows::UI::Core::ICoreWindow* sender, ABI::Windows::UI::Core::IPointerEventArgs* args);
    HRESULT
    onPointerPressed(ABI::Windows::UI::Core::ICoreWindow* sender, ABI::Windows::UI::Core::IPointerEventArgs* args);
    HRESULT
    onPointerReleased(ABI::Windows::UI::Core::ICoreWindow* sender, ABI::Windows::UI::Core::IPointerEventArgs* args);
    HRESULT
    onPointerWheelChanged(ABI::Windows::UI::Core::ICoreWindow* sender, ABI::Windows::UI::Core::IPointerEventArgs* args);
    HRESULT onKeyDown(ABI::Windows::UI::Core::ICoreWindow* sender, ABI::Windows::UI::Core::IKeyEventArgs* args);
    HRESULT onKeyUp(ABI::Windows::UI::Core::ICoreWindow* sender, ABI::Windows::UI::Core::IKeyEventArgs* args);
    HRESULT onCharacterReceived(
        ABI::Windows::UI::Core::ICoreWindow*                 sender,
        ABI::Windows::UI::Core::ICharacterReceivedEventArgs* args
    );
    HRESULT onDpiChanged(ABI::Windows::Graphics::Display::IDisplayInformation* sender, IInspectable* args);
};

struct ImGui_ImplWinRT_Data {
    ImGuiInputEventHandler* InputEventHandler;
    HWND                    hWnd;
    INT64                   Time;
    INT64                   TicksPerSecond;
    float                   DPI;
    bool                    DPIChanged;

    ImGui_ImplWinRT_Data() { memset((void*)this, 0, sizeof(*this)); }
};

bool ImGui_ImplWinRT_Init(IUnknown* CoreWindow);
void ImGui_ImplWinRT_Shutdown();
void ImGui_ImplWinRT_NewFrame();
