#pragma once
#include "windows.h"

#pragma warning(push)
#pragma warning(disable : 4265)
#include "Windows.Graphics.Display.h"
#include "Windows.UI.Core.h"
#include "wrl.h"
#pragma warning(pop)

#include "EventToken.h"
#include "inspectable.h"

#include "imgui.h"

class ImGuiInputEventHandler {
    using ICoreWindow                 = ABI::Windows::UI::Core::ICoreWindow;
    using IDisplayInformation         = ABI::Windows::Graphics::Display::IDisplayInformation;
    using IKeyEventArgs               = ABI::Windows::UI::Core::IKeyEventArgs;
    using IPointerEventArgs           = ABI::Windows::UI::Core::IPointerEventArgs;
    using ICharacterReceivedEventArgs = ABI::Windows::UI::Core::ICharacterReceivedEventArgs;

public:
    ImGuiInputEventHandler(ICoreWindow* window);
    ~ImGuiInputEventHandler();

private:
    Microsoft::WRL::ComPtr<ICoreWindow>         window;
    Microsoft::WRL::ComPtr<IDisplayInformation> displayInfo;
    EventRegistrationToken                      pointerMovedToken;
    EventRegistrationToken                      pointerExitedToken;
    EventRegistrationToken                      pointerPressedToken;
    EventRegistrationToken                      pointerReleasedToken;
    EventRegistrationToken                      pointerWheelChangedToken;
    EventRegistrationToken                      keyDownToken;
    EventRegistrationToken                      keyUpToken;
    EventRegistrationToken                      characterReceivedToken;
    EventRegistrationToken                      dpiChangedToken;
    float                                       dpi;

    void    updateMouseButtonState(IPointerEventArgs* args);
    HRESULT onPointerMoved(ICoreWindow* sender, IPointerEventArgs* args);
    HRESULT onPointerExited(ICoreWindow* sender, IPointerEventArgs* args);
    HRESULT onPointerPressed(ICoreWindow* sender, IPointerEventArgs* args);
    HRESULT onPointerReleased(ICoreWindow* sender, IPointerEventArgs* args);
    HRESULT onPointerWheelChanged(ICoreWindow* sender, IPointerEventArgs* args);
    HRESULT onKeyDown(ICoreWindow* sender, IKeyEventArgs* args);
    HRESULT onKeyUp(ICoreWindow* sender, IKeyEventArgs* args);
    HRESULT onCharacterReceived(ICoreWindow* sender, ICharacterReceivedEventArgs* args);
    HRESULT onDpiChanged(IDisplayInformation* sender, IInspectable* args);
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
