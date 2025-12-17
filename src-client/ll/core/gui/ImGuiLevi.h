#pragma once
#include "imgui.h"
#include "imgui_internal.h"
#include "mc/client/gui/screens/ScreenContext.h"
#include "mc/client/input/KeyboardManager.h"
#include "mc/client/renderer/screen/MinecraftUIRenderContext.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/minecraft_renderer/renderer/TexturePtr.h"
#include <chrono>


namespace ll::gui {
class ImGuiLevi {
public:
    bool                                  mCreatedDeviceObject;
    bool                                  mEnableMouseCursor;
    bool                                  mIsInititalize;
    mce::TexturePtr                       mFontTexture;
    int                                   mLastButtonPressedState[3];
    float                                 mPreviousY;
    InputMode                             mCurrentInputMode;
    std::chrono::steady_clock::time_point mTime;
    ScreenContext*                        mScreenContext;

public:
    void initialize();
    void beginRender(ScreenContext* screenContext, KeyboardManager* keyboardManager);
    void endRender(ScreenContext* screenContext);

private:
    bool _createDeviceObjects();
    void _handleEvents();
    void _newFrame(ScreenContext& screenContext, KeyboardManager* keyboardManager);
    void _onWindowFocusChanged();
    void _renderDrawData(ScreenContext& screenContext, ImDrawData* draw_data);

public:
    static ImGuiContext* mContext;
};
} // namespace ll::gui
