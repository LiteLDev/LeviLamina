#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class AbstractSceneProxy;
class CachedScenes;
class MinecraftUIFrameUpdateContext;
class RectangleArea;
class ScreenContext;
class TaskGroup;
struct FrameRenderObject;
struct PointerLocationEventData;
struct ScreenSizeData;
struct TextCharEventData;
struct TouchPadTouchEventData;
namespace OreUI::Debug { class ISceneDataProvider; }
// clang-format on

class AbstractScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSceneId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractScene();

    virtual void init(::ScreenSizeData const& screenSizeData) = 0;

    virtual void setSize(::ScreenSizeData const& screenSizeData) = 0;

    virtual void onSetKeyboardHeight(float keyboardHeight) = 0;

    virtual void onInternetUpdate() = 0;

    virtual ::std::vector<::RectangleArea> getInputAreas() const = 0;

    virtual void onFocusGained() = 0;

    virtual void onFocusLost() = 0;

    virtual void terminate() = 0;

    virtual void onCreation() = 0;

    virtual void onLeave() = 0;

    virtual void onGameEventNotification(::ui::GameEventNotification) = 0;

    virtual void leaveScreen() = 0;

    virtual void preFrameTick() = 0;

    virtual void tick(int nTick, int maxTick) = 0;

    virtual void applyInput(float a) = 0;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext) = 0;

    virtual void preRenderUpdate(::ScreenContext& screenContext) = 0;

    virtual void prepareFrame(::ScreenContext& screenContext) = 0;

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj) = 0;

    virtual void postRenderUpdate(::ScreenContext& screenContext) = 0;

    virtual void handleInputModeChanged(::InputMode) = 0;

    virtual void handleButtonPress(uint buttonId, ::FocusImpact focusImpact) = 0;

    virtual void handleButtonRelease(uint buttonId, ::FocusImpact focusImpact) = 0;

    virtual void handleRawInputEvent(int id, ::RawInputType keyType, ::ButtonState state, bool allowRemapping) = 0;

    virtual bool
    handlePointerLocation(::PointerLocationEventData const& pointerLocationData, ::FocusImpact focusImpact) = 0;

    virtual void handlePointerPressed(bool pressed) = 0;

    virtual void handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact) = 0;

    virtual void handleTextChar(::std::string const& inputUtf8, ::FocusImpact focusImpact) = 0;

    virtual void handleCaretLocation(int caretLocation, ::FocusImpact focusImpact) = 0;

    virtual void handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact) = 0;

    virtual void setTextboxText(::std::string const& text, ::TextboxTextUpdateReason reason) = 0;

    virtual void onKeyboardDismissed() = 0;

    virtual void handleLicenseChanged() = 0;

    virtual bool renderGameBehind() const = 0;

    virtual bool absorbsInput() const = 0;

    virtual bool closeOnPlayerHurt() const = 0;

    virtual bool useCustomPocketToast() const = 0;

    virtual bool isModal() const = 0;

    virtual bool isEditorMode() const = 0;

    virtual bool isShowingMenu() const = 0;

    virtual bool shouldStealMouse() const = 0;

    virtual bool screenIsNotFlushable() const = 0;

    virtual bool alwaysAcceptsInput() const = 0;

    virtual bool screenDrawsLast() const = 0;

    virtual bool isPlayScreen() const = 0;

    virtual bool renderOnlyWhenTopMost() const = 0;

    virtual bool lowFreqRendering() const = 0;

    virtual bool ignoreAsTop() const = 0;

    virtual bool shouldBeSkippedInAutomation() const = 0;

    virtual int getWidth() = 0;

    virtual int getHeight() = 0;

    virtual void reload() = 0;

    virtual ::RectangleArea getAreaOfControlByName(::std::string const& controlName) const = 0;

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const = 0;

    virtual ::ui::SceneType getSceneType() const = 0;

    virtual ::std::string getScreenName() const = 0;

    virtual bool equalsScreenName(::std::string_view comparison) const = 0;

    virtual bool containsScreenNameSubstring(::std::string_view substring) const = 0;

    virtual ::std::string getRawScreenName() const = 0;

    virtual ::std::string getRoute() const = 0;

    virtual ::std::string getScreenTelemetryName() const = 0;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const = 0;

    virtual int getScreenVersion() const = 0;

    virtual void processBufferedTextCharEvents(::std::vector<::TextCharEventData> const& bufferedEvents) = 0;

    virtual bool getShouldSendEvents() = 0;

    virtual void setShouldSendEvents(bool sendEvents) = 0;

    virtual bool getWantsTextOnly() = 0;

    virtual void setWantsTextOnly(bool textOnly) = 0;

    virtual void onDelete(::CachedScenes& cache, ::TaskGroup& taskGroup) = 0;

    virtual bool isGamepadCursorEnabled() const = 0;

    virtual bool isGamepadDeflectionModeEnabled() const = 0;

    virtual ::glm::vec2 const& getGamepadCursorPosition() const = 0;

    virtual void cleanInputComponents() = 0;

    virtual ::std::weak_ptr<::AbstractSceneProxy> getProxy() = 0;

    virtual bool canBePushed() const = 0;

    virtual bool canBePopped() const = 0;

    virtual bool canBeTransitioned() const = 0;

    virtual void
    onScreenExit(bool isPopping, bool doScreenTransitions, ::std::shared_ptr<::AbstractScene> pushedScene) = 0;

    virtual void onScreenEntrance(bool isRevisiting, bool doScreenTransitions) = 0;

    virtual bool isEntering() const = 0;

    virtual bool isExiting() const = 0;

    virtual void schedulePop() = 0;

    virtual bool isTerminating() const = 0;

    virtual bool loadScreenImmediately() const = 0;

    virtual bool forceUpdateActiveSceneStackWhenPushed() const = 0;

    virtual bool hasFinishedLoading() const = 0;

    virtual void sendScreenEvent(::std::string const& eventName, ::std::string const& eventData) = 0;

    virtual void
    setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const& routeQueryParameters) = 0;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::Debug::ISceneDataProvider const> getDebugDataProvider() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
