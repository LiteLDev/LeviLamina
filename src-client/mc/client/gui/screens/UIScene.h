#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class AbstractSceneProxy;
class CachedScenes;
class IClientInstance;
class ITTSEventManager;
class KeyboardManager;
class LayoutManager;
class MinecraftUIFrameUpdateContext;
class RectangleArea;
class ScreenContext;
class ScreenController;
class ScreenView;
class TaskGroup;
class UIControlFactory;
class UIMeasureStrategy;
class VisualTree;
struct FrameRenderObject;
struct GamepadCursorData;
struct PointerLocationEventData;
struct ScreenSizeData;
struct TouchPadTouchEventData;
// clang-format on

class UIScene : public ::BaseScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClientInstance;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenView>>                   mScreenView;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                          mOnInitializedCallback;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AbstractSceneProxy>>          mProxy;
    // NOLINTEND

public:
    // prevent constructor by default
    UIScene();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIScene() /*override*/;

    virtual bool isGamepadCursorEnabled() const /*override*/;

    virtual bool isGamepadDeflectionModeEnabled() const /*override*/;

    virtual ::glm::vec2 const& getGamepadCursorPosition() const /*override*/;

    virtual ::std::vector<::RectangleArea> getInputAreas() const /*override*/;

    virtual void cleanInputComponents() /*override*/;

    virtual void onCreation() /*override*/;

    virtual void onLeave() /*override*/;

    virtual bool canBePushed() const /*override*/;

    virtual bool canBePopped() const /*override*/;

    virtual bool canBeTransitioned() const /*override*/;

    virtual void
    onScreenExit(bool isPopping, bool doScreenTransitions, ::std::shared_ptr<::AbstractScene> pushedScene) /*override*/;

    virtual void onScreenEntrance(bool isRevisiting, bool doScreenTransitions) /*override*/;

    virtual bool isEntering() const /*override*/;

    virtual bool isExiting() const /*override*/;

    virtual void schedulePop() /*override*/;

    virtual bool isTerminating() const /*override*/;

    virtual bool loadScreenImmediately() const /*override*/;

    virtual ::std::weak_ptr<::AbstractSceneProxy> getProxy() /*override*/;

    virtual void setScreenState(
        ::std::vector<::std::pair<::std::string_view, ::std::string_view>> const& routeQueryParameters
    ) /*override*/;

    virtual ::RectangleArea getAreaOfControlByName(::std::string const& controlName) const /*override*/;

    virtual void init(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void onSetKeyboardHeight(float keyboardHeight) /*override*/;

    virtual void onFocusLost() /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual bool renderGameBehind() const /*override*/;

    virtual bool closeOnPlayerHurt() const /*override*/;

    virtual bool useCustomPocketToast() const /*override*/;

    virtual void setSize(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void handleButtonPress(uint buttonId, ::FocusImpact focusImpact) /*override*/;

    virtual void handleButtonRelease(uint buttonId, ::FocusImpact focusImpact) /*override*/;

    virtual bool handlePointerLocation(
        ::PointerLocationEventData const& pointerLocationData,
        ::FocusImpact                     focusImpact
    ) /*override*/;

    virtual void handlePointerPressed(bool pressed) /*override*/;

    virtual void handleLicenseChanged() /*override*/;

    virtual void terminate() /*override*/;

    virtual void onFocusGained() /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void reload() /*override*/;

    virtual void leaveScreen() /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext) /*override*/;

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj) /*override*/;

    virtual void applyInput(float a) /*override*/;

    virtual void handleInputModeChanged(::InputMode inputMode) /*override*/;

    virtual void
    handleRawInputEvent(int id, ::RawInputType keyType, ::ButtonState state, bool allowRemapping) /*override*/;

    virtual void handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact) /*override*/;

    virtual void handleTextChar(::std::string const& inputUtf8, ::FocusImpact focusImpact) /*override*/;

    virtual void
    handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact) /*override*/;

    virtual void setTextboxText(::std::string const& text, ::TextboxTextUpdateReason reason) /*override*/;

    virtual void onKeyboardDismissed() /*override*/;

    virtual bool absorbsInput() const /*override*/;

    virtual bool screenIsNotFlushable() const /*override*/;

    virtual bool alwaysAcceptsInput() const /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual bool isModal() const /*override*/;

    virtual bool shouldStealMouse() const /*override*/;

    virtual bool screenDrawsLast() const /*override*/;

    virtual bool shouldBeSkippedInAutomation() const /*override*/;

    virtual int getWidth() /*override*/;

    virtual int getHeight() /*override*/;

    virtual bool renderOnlyWhenTopMost() const /*override*/;

    virtual bool lowFreqRendering() const /*override*/;

    virtual bool ignoreAsTop() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string getRawScreenName() const /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual bool equalsScreenName(::std::string_view comparison) const /*override*/;

    virtual bool containsScreenNameSubstring(::std::string_view substring) const /*override*/;

    virtual bool equalsRawScreenName(::std::string_view comparison) const /*override*/;

    virtual ::std::string getRoute() const /*override*/;

    virtual ::std::string getScreenTelemetryName() const /*override*/;

    virtual bool getShouldSendEvents() /*override*/;

    virtual void setShouldSendEvents(bool shouldSendEvents) /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;

    virtual int getScreenVersion() const /*override*/;

    virtual void onDelete(::CachedScenes& cache, ::TaskGroup& taskGroup) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UIScene(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client,
        ::KeyboardManager&                                      keyboardManager,
        ::std::shared_ptr<::ScreenController>                   controller,
        ::std::unique_ptr<::VisualTree>                         visualTree,
        ::std::shared_ptr<::UIControlFactory>                   controlFactory,
        ::UIMeasureStrategy&                                    measureStrategy,
        ::std::unique_ptr<::LayoutManager>                      layoutManager,
        ::GamepadCursorData                                     gamepadCursorData,
        ::std::weak_ptr<::ITTSEventManager>                     ttsEventManager
    );

    MCNAPI void setInitializedCallback(::std::function<void()> initializedCallback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client,
        ::KeyboardManager&                                      keyboardManager,
        ::std::shared_ptr<::ScreenController>                   controller,
        ::std::unique_ptr<::VisualTree>                         visualTree,
        ::std::shared_ptr<::UIControlFactory>                   controlFactory,
        ::UIMeasureStrategy&                                    measureStrategy,
        ::std::unique_ptr<::LayoutManager>                      layoutManager,
        ::GamepadCursorData                                     gamepadCursorData,
        ::std::weak_ptr<::ITTSEventManager>                     ttsEventManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isGamepadCursorEnabled() const;

    MCNAPI bool $isGamepadDeflectionModeEnabled() const;

    MCNAPI ::glm::vec2 const& $getGamepadCursorPosition() const;

    MCNAPI ::std::vector<::RectangleArea> $getInputAreas() const;

    MCNAPI void $cleanInputComponents();

    MCNAPI void $onCreation();

    MCNAPI void $onLeave();

    MCNAPI bool $canBePushed() const;

    MCNAPI bool $canBePopped() const;

    MCNAPI bool $canBeTransitioned() const;

    MCAPI void $onScreenExit(bool isPopping, bool doScreenTransitions, ::std::shared_ptr<::AbstractScene> pushedScene);

    MCAPI void $onScreenEntrance(bool isRevisiting, bool doScreenTransitions);

    MCNAPI bool $isEntering() const;

    MCNAPI bool $isExiting() const;

    MCNAPI void $schedulePop();

    MCNAPI bool $isTerminating() const;

    MCNAPI bool $loadScreenImmediately() const;

    MCNAPI ::std::weak_ptr<::AbstractSceneProxy> $getProxy();

    MCNAPI void
    $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const& routeQueryParameters);

    MCNAPI ::RectangleArea $getAreaOfControlByName(::std::string const& controlName) const;

    MCNAPI void $init(::ScreenSizeData const& screenSizeData);

    MCNAPI void $onSetKeyboardHeight(float keyboardHeight);

    MCAPI void $onFocusLost();

    MCNAPI void $onInternetUpdate();

    MCAPI bool $renderGameBehind() const;

    MCAPI bool $closeOnPlayerHurt() const;

    MCNAPI bool $useCustomPocketToast() const;

    MCNAPI void $setSize(::ScreenSizeData const& screenSizeData);

    MCNAPI void $handleButtonPress(uint buttonId, ::FocusImpact focusImpact);

    MCNAPI void $handleButtonRelease(uint buttonId, ::FocusImpact focusImpact);

    MCNAPI bool
    $handlePointerLocation(::PointerLocationEventData const& pointerLocationData, ::FocusImpact focusImpact);

    MCNAPI void $handlePointerPressed(bool pressed);

    MCNAPI void $handleLicenseChanged();

    MCNAPI void $terminate();

    MCNAPI void $onFocusGained();

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI void $reload();

    MCNAPI void $leaveScreen();

    MCNAPI void $preFrameTick();

    MCNAPI void $frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext);

    MCAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCNAPI void $applyInput(float a);

    MCNAPI void $handleInputModeChanged(::InputMode inputMode);

    MCNAPI void $handleRawInputEvent(int id, ::RawInputType keyType, ::ButtonState state, bool allowRemapping);

    MCNAPI void $handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact);

    MCAPI void $handleTextChar(::std::string const& inputUtf8, ::FocusImpact focusImpact);

    MCNAPI void $handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact);

    MCNAPI void $setTextboxText(::std::string const& text, ::TextboxTextUpdateReason reason);

    MCNAPI void $onKeyboardDismissed();

    MCNAPI bool $absorbsInput() const;

    MCNAPI bool $screenIsNotFlushable() const;

    MCNAPI bool $alwaysAcceptsInput() const;

    MCNAPI bool $isShowingMenu() const;

    MCNAPI bool $isModal() const;

    MCNAPI bool $shouldStealMouse() const;

    MCNAPI bool $screenDrawsLast() const;

    MCNAPI bool $shouldBeSkippedInAutomation() const;

    MCNAPI int $getWidth();

    MCNAPI int $getHeight();

    MCNAPI bool $renderOnlyWhenTopMost() const;

    MCNAPI bool $lowFreqRendering() const;

    MCNAPI bool $ignoreAsTop() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI ::std::string $getRawScreenName() const;

    MCNAPI ::std::string $getScreenName() const;

    MCNAPI bool $equalsScreenName(::std::string_view comparison) const;

    MCNAPI bool $containsScreenNameSubstring(::std::string_view substring) const;

    MCNAPI bool $equalsRawScreenName(::std::string_view comparison) const;

    MCNAPI ::std::string $getRoute() const;

    MCNAPI ::std::string $getScreenTelemetryName() const;

    MCNAPI bool $getShouldSendEvents();

    MCNAPI void $setShouldSendEvents(bool shouldSendEvents);

    MCNAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCNAPI int $getScreenVersion() const;

    MCNAPI void $onDelete(::CachedScenes& cache, ::TaskGroup& taskGroup);
    // NOLINTEND
};
