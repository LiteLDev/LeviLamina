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
class IClientInstance;
class KeyboardManager;
class RectangleArea;
class ScreenContext;
class ScreenController;
class ScreenView;
class TaskGroup;
class UIMeasureStrategy;
struct AbstractSceneProxy;
struct CachedScenes;
struct FrameRenderObject;
struct GamepadCursorData;
struct ITTSEventManager;
struct LayoutManager;
struct MinecraftUIFrameUpdateContext;
struct PointerLocationEventData;
struct ScreenSizeData;
struct TouchPadTouchEventData;
struct UIControlFactory;
struct VisualTree;
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

    virtual void handleRawInputEvent(int, ::RawInputType, ::ButtonState, bool) /*override*/;

    virtual void handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact) /*override*/;

    virtual void handleTextChar(::std::string const& inputUtf8, ::FocusImpact focusImpact) /*override*/;

    virtual void handleCaretLocation(int, ::FocusImpact) /*override*/;

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
    MCAPI UIScene(
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

    MCAPI void setInitializedCallback(::std::function<void()> initializedCallback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isGamepadCursorEnabled() const;

    MCAPI bool $isGamepadDeflectionModeEnabled() const;

    MCAPI ::glm::vec2 const& $getGamepadCursorPosition() const;

    MCAPI ::std::vector<::RectangleArea> $getInputAreas() const;

    MCAPI void $cleanInputComponents();

    MCAPI void $onCreation();

    MCAPI void $onLeave();

    MCAPI bool $canBePushed() const;

    MCAPI bool $canBePopped() const;

    MCAPI bool $canBeTransitioned() const;

    MCAPI void $onScreenExit(bool isPopping, bool doScreenTransitions, ::std::shared_ptr<::AbstractScene> pushedScene);

    MCAPI void $onScreenEntrance(bool isRevisiting, bool doScreenTransitions);

    MCAPI bool $isEntering() const;

    MCAPI bool $isExiting() const;

    MCAPI void $schedulePop();

    MCAPI bool $isTerminating() const;

    MCAPI bool $loadScreenImmediately() const;

    MCAPI ::std::weak_ptr<::AbstractSceneProxy> $getProxy();

    MCAPI void
    $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const& routeQueryParameters);

    MCAPI ::RectangleArea $getAreaOfControlByName(::std::string const& controlName) const;

    MCAPI void $init(::ScreenSizeData const& screenSizeData);

    MCAPI void $onSetKeyboardHeight(float keyboardHeight);

    MCAPI void $onFocusLost();

    MCAPI void $onInternetUpdate();

    MCAPI bool $renderGameBehind() const;

    MCAPI bool $closeOnPlayerHurt() const;

    MCAPI bool $useCustomPocketToast() const;

    MCAPI void $setSize(::ScreenSizeData const& screenSizeData);

    MCAPI void $handleButtonPress(uint buttonId, ::FocusImpact focusImpact);

    MCAPI void $handleButtonRelease(uint buttonId, ::FocusImpact focusImpact);

    MCAPI bool $handlePointerLocation(::PointerLocationEventData const& pointerLocationData, ::FocusImpact focusImpact);

    MCFOLD void $handlePointerPressed(bool pressed);

    MCAPI void $handleLicenseChanged();

    MCAPI void $terminate();

    MCAPI void $onFocusGained();

    MCAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCAPI void $reload();

    MCAPI void $leaveScreen();

    MCAPI void $preFrameTick();

    MCAPI void $frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext);

    MCAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCAPI void $applyInput(float a);

    MCAPI void $handleInputModeChanged(::InputMode inputMode);

    MCAPI void $handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact);

    MCAPI void $handleTextChar(::std::string const& inputUtf8, ::FocusImpact focusImpact);

    MCFOLD void $handleCaretLocation(int, ::FocusImpact);

    MCAPI void $handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact);

    MCAPI void $setTextboxText(::std::string const& text, ::TextboxTextUpdateReason reason);

    MCAPI void $onKeyboardDismissed();

    MCAPI bool $absorbsInput() const;

    MCAPI bool $screenIsNotFlushable() const;

    MCAPI bool $alwaysAcceptsInput() const;

    MCAPI bool $isShowingMenu() const;

    MCAPI bool $isModal() const;

    MCAPI bool $shouldStealMouse() const;

    MCAPI bool $screenDrawsLast() const;

    MCAPI bool $shouldBeSkippedInAutomation() const;

    MCAPI int $getWidth();

    MCAPI int $getHeight();

    MCAPI bool $renderOnlyWhenTopMost() const;

    MCAPI bool $lowFreqRendering() const;

    MCAPI bool $ignoreAsTop() const;

    MCAPI ::ui::SceneType $getSceneType() const;

    MCAPI ::std::string $getRawScreenName() const;

    MCAPI ::std::string $getScreenName() const;

    MCAPI bool $equalsScreenName(::std::string_view comparison) const;

    MCAPI bool $containsScreenNameSubstring(::std::string_view substring) const;

    MCAPI ::std::string $getRoute() const;

    MCAPI ::std::string $getScreenTelemetryName() const;

    MCAPI bool $getShouldSendEvents();

    MCAPI void $setShouldSendEvents(bool shouldSendEvents);

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;

    MCAPI int $getScreenVersion() const;

    MCAPI void $onDelete(::CachedScenes& cache, ::TaskGroup& taskGroup);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
