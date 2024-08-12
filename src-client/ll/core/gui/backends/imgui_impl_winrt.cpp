#include "imgui_impl_winrt.h"
#include "imgui.h"

#include <cmath>
#include <cstdio>

#include <CoreWindow.h>

using ABI::Windows::UI::Core::ICharacterReceivedEventArgs;
using ABI::Windows::UI::Core::ICoreWindow;
using ABI::Windows::UI::Core::IKeyEventArgs;
using ABI::Windows::UI::Core::IPointerEventArgs;

using Microsoft::WRL::Callback;
using Microsoft::WRL::ComPtr;
using Microsoft::WRL::Wrappers::HStringReference;

static ImGui_ImplWinRT_Data* ImGui_ImplWinRT_GetBackendData() {
    return ImGui::GetCurrentContext() ? (ImGui_ImplWinRT_Data*)ImGui::GetIO().BackendPlatformUserData : nullptr;
}

bool ImGui_ImplWinRT_Init(IUnknown* window) {
    ImGuiIO& io = ImGui::GetIO();
    IM_ASSERT(io.BackendPlatformUserData == nullptr && "Already initialized a platform backend!");

    ComPtr<ICoreWindow> coreWindow;
    if (FAILED(window->QueryInterface(coreWindow.GetAddressOf()))) {
        printf("Query ICoreWindow FAILED\n");
        return false;
    }

    ComPtr<ICoreWindowInterop> coreWindowInterop;
    if (FAILED(window->QueryInterface(coreWindowInterop.GetAddressOf()))) {
        printf("Query ICoreWindowInterop FAILED\n");
        return false;
    }

    HWND hWnd;
    if (FAILED(coreWindowInterop->get_WindowHandle(&hWnd))) {
        printf("get_WindowHandle FAILED\n");
        return false;
    }

    INT64 perf_frequency, perf_counter;
    if (!::QueryPerformanceFrequency((LARGE_INTEGER*)&perf_frequency)) return false;
    if (!::QueryPerformanceCounter((LARGE_INTEGER*)&perf_counter)) return false;

    // Setup backend capabilities flags
    ImGui_ImplWinRT_Data* bd   = IM_NEW(ImGui_ImplWinRT_Data)();
    io.BackendPlatformUserData = (void*)bd;
    io.BackendPlatformName     = "imgui_impl_winrt";

    bd->InputEventHandler = IM_NEW(ImGuiInputEventHandler)(coreWindow.Get());
    bd->hWnd              = hWnd;
    bd->TicksPerSecond    = perf_frequency;
    bd->Time              = perf_counter;

    // Set platform dependent data in viewport
    ImGui::GetMainViewport()->PlatformHandleRaw = (void*)hWnd;

    return true;
}

void ImGui_ImplWinRT_Shutdown() {
    ImGui_ImplWinRT_Data* bd = ImGui_ImplWinRT_GetBackendData();
    IM_ASSERT(bd != nullptr && "No platform backend to shutdown, or already shutdown?");

    ImGuiIO& io                = ImGui::GetIO();
    io.BackendPlatformName     = nullptr;
    io.BackendPlatformUserData = nullptr;

    IM_DELETE(bd->InputEventHandler);
    IM_DELETE(bd);
}

void ImGui_ImplWinRT_NewFrame() {
    ImGuiIO&              io = ImGui::GetIO();
    ImGui_ImplWinRT_Data* bd = ImGui_ImplWinRT_GetBackendData();
    IM_ASSERT(bd != nullptr && "Did you call ImGui_ImplWinRT_Init()?");

    // Setup display size (every frame to accommodate for window resizing)
    RECT rect = {0, 0, 0, 0};
    ::GetClientRect(bd->hWnd, &rect);
    io.DisplaySize = ImVec2((float)(rect.right - rect.left), (float)(rect.bottom - rect.top));

    // Setup time step
    INT64 current_time = 0;
    ::QueryPerformanceCounter((LARGE_INTEGER*)&current_time);
    io.DeltaTime = (float)(current_time - bd->Time) / bd->TicksPerSecond;
    bd->Time     = current_time;
}

// Map ABI::Windows::System::VirtualKey to ImGuiKey.
static ImGuiKey ImGui_ImplWinRT_VirtualKeyToImGuiKey(ABI::Windows::System::VirtualKey vk) {
    using ABI::Windows::System::VirtualKey;
    switch (vk) {
    case VirtualKey::VirtualKey_Tab:
        return ImGuiKey_Tab;
    case VirtualKey::VirtualKey_Left:
        return ImGuiKey_LeftArrow;
    case VirtualKey::VirtualKey_Right:
        return ImGuiKey_RightArrow;
    case VirtualKey::VirtualKey_Up:
        return ImGuiKey_UpArrow;
    case VirtualKey::VirtualKey_Down:
        return ImGuiKey_DownArrow;
    case VirtualKey::VirtualKey_PageUp:
        return ImGuiKey_PageUp;
    case VirtualKey::VirtualKey_PageDown:
        return ImGuiKey_PageDown;
    case VirtualKey::VirtualKey_Home:
        return ImGuiKey_Home;
    case VirtualKey::VirtualKey_End:
        return ImGuiKey_End;
    case VirtualKey::VirtualKey_Insert:
        return ImGuiKey_Insert;
    case VirtualKey::VirtualKey_Delete:
        return ImGuiKey_Delete;
    case VirtualKey::VirtualKey_Back:
        return ImGuiKey_Backspace;
    case VirtualKey::VirtualKey_Space:
        return ImGuiKey_Space;
    case VirtualKey::VirtualKey_Enter:
        return ImGuiKey_Enter;
    case VirtualKey::VirtualKey_Escape:
        return ImGuiKey_Escape;
    // case VK_OEM_7: return ImGuiKey_Apostrophe;
    // case VK_OEM_COMMA: return ImGuiKey_Comma;
    // case VK_OEM_MINUS: return ImGuiKey_Minus;
    // case VK_OEM_PERIOD: return ImGuiKey_Period;
    // case VK_OEM_2: return ImGuiKey_Slash;
    // case VK_OEM_1: return ImGuiKey_Semicolon;
    // case VK_OEM_PLUS: return ImGuiKey_Equal;
    // case VK_OEM_4: return ImGuiKey_LeftBracket;
    // case VK_OEM_5: return ImGuiKey_Backslash;
    // case VK_OEM_6: return ImGuiKey_RightBracket;
    // case VK_OEM_3: return ImGuiKey_GraveAccent;
    case VirtualKey::VirtualKey_CapitalLock:
        return ImGuiKey_CapsLock;
    case VirtualKey::VirtualKey_Scroll:
        return ImGuiKey_ScrollLock;
    case VirtualKey::VirtualKey_NumberKeyLock:
        return ImGuiKey_NumLock;
    case VirtualKey::VirtualKey_Snapshot:
        return ImGuiKey_PrintScreen;
    case VirtualKey::VirtualKey_Pause:
        return ImGuiKey_Pause;
    case VirtualKey::VirtualKey_NumberPad0:
        return ImGuiKey_Keypad0;
    case VirtualKey::VirtualKey_NumberPad1:
        return ImGuiKey_Keypad1;
    case VirtualKey::VirtualKey_NumberPad2:
        return ImGuiKey_Keypad2;
    case VirtualKey::VirtualKey_NumberPad3:
        return ImGuiKey_Keypad3;
    case VirtualKey::VirtualKey_NumberPad4:
        return ImGuiKey_Keypad4;
    case VirtualKey::VirtualKey_NumberPad5:
        return ImGuiKey_Keypad5;
    case VirtualKey::VirtualKey_NumberPad6:
        return ImGuiKey_Keypad6;
    case VirtualKey::VirtualKey_NumberPad7:
        return ImGuiKey_Keypad7;
    case VirtualKey::VirtualKey_NumberPad8:
        return ImGuiKey_Keypad8;
    case VirtualKey::VirtualKey_NumberPad9:
        return ImGuiKey_Keypad9;
    case VirtualKey::VirtualKey_Decimal:
        return ImGuiKey_KeypadDecimal;
    case VirtualKey::VirtualKey_Divide:
        return ImGuiKey_KeypadDivide;
    case VirtualKey::VirtualKey_Multiply:
        return ImGuiKey_KeypadMultiply;
    case VirtualKey::VirtualKey_Subtract:
        return ImGuiKey_KeypadSubtract;
    case VirtualKey::VirtualKey_Add:
        return ImGuiKey_KeypadAdd;
    case VirtualKey::VirtualKey_LeftShift:
        return ImGuiKey_LeftShift;
    case VirtualKey::VirtualKey_LeftControl:
        return ImGuiKey_LeftCtrl;
    // case VK_LMENU: return ImGuiKey_LeftAlt;
    // case VK_LWIN: return ImGuiKey_LeftSuper;
    case VirtualKey::VirtualKey_RightShift:
        return ImGuiKey_RightShift;
    case VirtualKey::VirtualKey_RightControl:
        return ImGuiKey_RightCtrl;
    // case VK_RMENU: return ImGuiKey_RightAlt;
    // case VK_RWIN: return ImGuiKey_RightSuper;
    case VirtualKey::VirtualKey_Control:
        return ImGuiKey_LeftCtrl;
    case VirtualKey::VirtualKey_Shift:
        return ImGuiKey_LeftShift;
    case VirtualKey::VirtualKey_Application:
        return ImGuiKey_Menu;
    case VirtualKey::VirtualKey_Number0:
        return ImGuiKey_0;
    case VirtualKey::VirtualKey_Number1:
        return ImGuiKey_1;
    case VirtualKey::VirtualKey_Number2:
        return ImGuiKey_2;
    case VirtualKey::VirtualKey_Number3:
        return ImGuiKey_3;
    case VirtualKey::VirtualKey_Number4:
        return ImGuiKey_4;
    case VirtualKey::VirtualKey_Number5:
        return ImGuiKey_5;
    case VirtualKey::VirtualKey_Number6:
        return ImGuiKey_6;
    case VirtualKey::VirtualKey_Number7:
        return ImGuiKey_7;
    case VirtualKey::VirtualKey_Number8:
        return ImGuiKey_8;
    case VirtualKey::VirtualKey_Number9:
        return ImGuiKey_9;
    case VirtualKey::VirtualKey_A:
        return ImGuiKey_A;
    case VirtualKey::VirtualKey_B:
        return ImGuiKey_B;
    case VirtualKey::VirtualKey_C:
        return ImGuiKey_C;
    case VirtualKey::VirtualKey_D:
        return ImGuiKey_D;
    case VirtualKey::VirtualKey_E:
        return ImGuiKey_E;
    case VirtualKey::VirtualKey_F:
        return ImGuiKey_F;
    case VirtualKey::VirtualKey_G:
        return ImGuiKey_G;
    case VirtualKey::VirtualKey_H:
        return ImGuiKey_H;
    case VirtualKey::VirtualKey_I:
        return ImGuiKey_I;
    case VirtualKey::VirtualKey_J:
        return ImGuiKey_J;
    case VirtualKey::VirtualKey_K:
        return ImGuiKey_K;
    case VirtualKey::VirtualKey_L:
        return ImGuiKey_L;
    case VirtualKey::VirtualKey_M:
        return ImGuiKey_M;
    case VirtualKey::VirtualKey_N:
        return ImGuiKey_N;
    case VirtualKey::VirtualKey_O:
        return ImGuiKey_O;
    case VirtualKey::VirtualKey_P:
        return ImGuiKey_P;
    case VirtualKey::VirtualKey_Q:
        return ImGuiKey_Q;
    case VirtualKey::VirtualKey_R:
        return ImGuiKey_R;
    case VirtualKey::VirtualKey_S:
        return ImGuiKey_S;
    case VirtualKey::VirtualKey_T:
        return ImGuiKey_T;
    case VirtualKey::VirtualKey_U:
        return ImGuiKey_U;
    case VirtualKey::VirtualKey_V:
        return ImGuiKey_V;
    case VirtualKey::VirtualKey_W:
        return ImGuiKey_W;
    case VirtualKey::VirtualKey_X:
        return ImGuiKey_X;
    case VirtualKey::VirtualKey_Y:
        return ImGuiKey_Y;
    case VirtualKey::VirtualKey_Z:
        return ImGuiKey_Z;
    case VirtualKey::VirtualKey_F1:
        return ImGuiKey_F1;
    case VirtualKey::VirtualKey_F2:
        return ImGuiKey_F2;
    case VirtualKey::VirtualKey_F3:
        return ImGuiKey_F3;
    case VirtualKey::VirtualKey_F4:
        return ImGuiKey_F4;
    case VirtualKey::VirtualKey_F5:
        return ImGuiKey_F5;
    case VirtualKey::VirtualKey_F6:
        return ImGuiKey_F6;
    case VirtualKey::VirtualKey_F7:
        return ImGuiKey_F7;
    case VirtualKey::VirtualKey_F8:
        return ImGuiKey_F8;
    case VirtualKey::VirtualKey_F9:
        return ImGuiKey_F9;
    case VirtualKey::VirtualKey_F10:
        return ImGuiKey_F10;
    case VirtualKey::VirtualKey_F11:
        return ImGuiKey_F11;
    case VirtualKey::VirtualKey_F12:
        return ImGuiKey_F12;
    default:
        return ImGuiKey_None;
    }
}

// Converts a length in device-independent pixels (DIPs) to a length in physical pixels.
static float ConvertDipsToPixels(float dips, float dpi) {
    static const float dipsPerInch = 96.0f;
    return floorf(dips * dpi / dipsPerInch + 0.5f); // Round to nearest integer.
}

ImGuiInputEventHandler::ImGuiInputEventHandler(ICoreWindow* window) : window(window) {
    using PointerEventHandler = ABI::Windows::Foundation::
        ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::PointerEventArgs*>;
    using KeyEventHandler = ABI::Windows::Foundation::
        ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::KeyEventArgs*>;
    using CharacterReceivedEventHandler = ABI::Windows::Foundation::
        ITypedEventHandler<ABI::Windows::UI::Core::CoreWindow*, ABI::Windows::UI::Core::CharacterReceivedEventArgs*>;

    this->window->add_PointerMoved(
        Callback<PointerEventHandler>(this, &ImGuiInputEventHandler::onPointerMoved).Get(),
        &pointerMovedToken
    );
    this->window->add_PointerExited(
        Callback<PointerEventHandler>(this, &ImGuiInputEventHandler::onPointerExited).Get(),
        &pointerExitedToken
    );
    this->window->add_PointerPressed(
        Callback<PointerEventHandler>(this, &ImGuiInputEventHandler::onPointerPressed).Get(),
        &pointerPressedToken
    );
    this->window->add_PointerReleased(
        Callback<PointerEventHandler>(this, &ImGuiInputEventHandler::onPointerReleased).Get(),
        &pointerReleasedToken
    );
    this->window->add_PointerWheelChanged(
        Callback<PointerEventHandler>(this, &ImGuiInputEventHandler::onPointerWheelChanged).Get(),
        &pointerWheelChangedToken
    );
    this->window->add_KeyDown(Callback<KeyEventHandler>(this, &ImGuiInputEventHandler::onKeyDown).Get(), &keyDownToken);
    this->window->add_KeyUp(Callback<KeyEventHandler>(this, &ImGuiInputEventHandler::onKeyUp).Get(), &keyUpToken);
    this->window->add_CharacterReceived(
        Callback<CharacterReceivedEventHandler>(this, &ImGuiInputEventHandler::onCharacterReceived).Get(),
        &characterReceivedToken
    );

    dpi = 96;
    ComPtr<ABI::Windows::Graphics::Display::IDisplayInformationStatics> displayInfoStatics;
    if (FAILED(RoGetActivationFactory(
            HStringReference(RuntimeClass_Windows_Graphics_Display_DisplayInformation).Get(),
            IID_PPV_ARGS(&displayInfoStatics)
        ))) {
        printf("Failed to get IDisplayInformationStatics\n");
        return;
    }
    if (FAILED(displayInfoStatics->GetForCurrentView(&displayInfo))) {
        printf("Failed to get IDisplayInformation\n");
        return;
    }
    if (FAILED(displayInfo->get_LogicalDpi(&dpi))) {
        printf("Failed to get DPI\n");
    }
    // printf("DPI=%f\n", dpi);
    ImGui_ImplWinRT_Data* bd = ImGui_ImplWinRT_GetBackendData();
    if (bd != nullptr) {
        bd->DPI        = dpi;
        bd->DPIChanged = true;
    }
    displayInfo->add_DpiChanged(
        Callback<__FITypedEventHandler_2_Windows__CGraphics__CDisplay__CDisplayInformation_IInspectable>(
            this,
            &ImGuiInputEventHandler::onDpiChanged
        )
            .Get(),
        &dpiChangedToken
    );
}

ImGuiInputEventHandler::~ImGuiInputEventHandler() {
    this->window->remove_PointerMoved(pointerMovedToken);
    this->window->remove_PointerExited(pointerExitedToken);
    this->window->remove_PointerPressed(pointerPressedToken);
    this->window->remove_PointerReleased(pointerReleasedToken);
    this->window->remove_PointerWheelChanged(pointerWheelChangedToken);
    this->window->remove_KeyDown(keyDownToken);
    this->window->remove_KeyUp(keyUpToken);
    this->window->remove_CharacterReceived(characterReceivedToken);

    if (this->displayInfo) {
        this->displayInfo->remove_DpiChanged(dpiChangedToken);
    }
}

void ImGuiInputEventHandler::updateMouseButtonState(IPointerEventArgs* args) {
    auto&                                          io = ImGui::GetIO();
    ComPtr<ABI::Windows::UI::Input::IPointerPoint> currentPoint;
    args->get_CurrentPoint(&currentPoint);

    ComPtr<ABI::Windows::UI::Input::IPointerPointProperties> properties;
    currentPoint->get_Properties(&properties);

    ABI::Windows::Foundation::Point pos;
    currentPoint->get_Position(&pos);

    io.AddMouseSourceEvent(ImGuiMouseSource_Mouse);
    io.AddMousePosEvent(ConvertDipsToPixels(pos.X, dpi), ConvertDipsToPixels(pos.Y, dpi));

    using ABI::Windows::UI::Input::PointerUpdateKind;
    PointerUpdateKind kind;
    properties->get_PointerUpdateKind(&kind);
    switch (kind) {
    case PointerUpdateKind::PointerUpdateKind_LeftButtonPressed:
        io.AddMouseButtonEvent(0, true);
        break;
    case PointerUpdateKind::PointerUpdateKind_LeftButtonReleased:
        io.AddMouseButtonEvent(0, false);
        break;
    case PointerUpdateKind::PointerUpdateKind_RightButtonPressed:
        io.AddMouseButtonEvent(1, true);
        break;
    case PointerUpdateKind::PointerUpdateKind_RightButtonReleased:
        io.AddMouseButtonEvent(1, false);
        break;
    case PointerUpdateKind::PointerUpdateKind_MiddleButtonPressed:
        io.AddMouseButtonEvent(2, true);
        break;
    case PointerUpdateKind::PointerUpdateKind_MiddleButtonReleased:
        io.AddMouseButtonEvent(2, false);
        break;
    }
}

HRESULT ImGuiInputEventHandler::onPointerMoved(ICoreWindow* /*sender*/, IPointerEventArgs* args) {
    auto&                                          io = ImGui::GetIO();
    ComPtr<ABI::Windows::UI::Input::IPointerPoint> currentPoint;
    args->get_CurrentPoint(&currentPoint);

    ABI::Windows::Foundation::Point pos;
    currentPoint->get_Position(&pos);

    io.AddMouseSourceEvent(ImGuiMouseSource_Mouse);
    io.AddMousePosEvent(ConvertDipsToPixels(pos.X, dpi), ConvertDipsToPixels(pos.Y, dpi));
    return S_OK;
}

HRESULT ImGuiInputEventHandler::onPointerExited(ICoreWindow* /*sender*/, IPointerEventArgs* /*args*/) {
    auto& io = ImGui::GetIO();
    io.AddMousePosEvent(-FLT_MAX, -FLT_MAX);
    return S_OK;
}

HRESULT ImGuiInputEventHandler::onPointerPressed(ICoreWindow* /*sender*/, IPointerEventArgs* args) {
    updateMouseButtonState(args);
    return S_OK;
}

HRESULT ImGuiInputEventHandler::onPointerReleased(ICoreWindow* /*sender*/, IPointerEventArgs* args) {
    updateMouseButtonState(args);
    return S_OK;
}

HRESULT ImGuiInputEventHandler::onPointerWheelChanged(ICoreWindow* /*sender*/, IPointerEventArgs* args) {
    auto& io = ImGui::GetIO();

    ComPtr<ABI::Windows::UI::Input::IPointerPoint> currentPoint;
    args->get_CurrentPoint(&currentPoint);

    ComPtr<ABI::Windows::UI::Input::IPointerPointProperties> properties;
    currentPoint->get_Properties(&properties);

    INT32 mouseWheelDelta;
    properties->get_MouseWheelDelta(&mouseWheelDelta);

    io.MouseWheel += mouseWheelDelta > 0 ? +1 : -1;

    return S_OK;
}

HRESULT ImGuiInputEventHandler::onKeyDown(ICoreWindow* /*sender*/, IKeyEventArgs* args) {
    auto& io = ImGui::GetIO();

    ABI::Windows::System::VirtualKey vk;
    args->get_VirtualKey(&vk);

    io.AddKeyEvent(ImGui_ImplWinRT_VirtualKeyToImGuiKey(vk), true);

    return S_OK;
}

HRESULT ImGuiInputEventHandler::onKeyUp(ICoreWindow* /*sender*/, IKeyEventArgs* args) {
    auto& io = ImGui::GetIO();

    ABI::Windows::System::VirtualKey vk;
    args->get_VirtualKey(&vk);

    io.AddKeyEvent(ImGui_ImplWinRT_VirtualKeyToImGuiKey(vk), false);

    return S_OK;
}

HRESULT ImGuiInputEventHandler::onCharacterReceived(ICoreWindow* /*sender*/, ICharacterReceivedEventArgs* args) {
    auto& io = ImGui::GetIO();

    UINT32 c;
    args->get_KeyCode(&c);

    io.AddInputCharacter(c);

    return S_OK;
}

HRESULT ImGuiInputEventHandler::
    onDpiChanged(ABI::Windows::Graphics::Display::IDisplayInformation* sender, IInspectable* /*args*/) {
    // printf("DPI changed\n");
    if (FAILED(sender->get_LogicalDpi(&dpi))) {
        printf("Failed to get DPI\n");
        dpi = 96;
    }
    // printf("DPI=%f\n", dpi);
    ImGui_ImplWinRT_Data* bd = ImGui_ImplWinRT_GetBackendData();
    if (bd != nullptr) {
        bd->DPI        = dpi;
        bd->DPIChanged = true;
    }
    return S_OK;
}
