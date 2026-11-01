#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/oreui/SceneState.h"
#include "mc/client/gui/oreui/interface/IScene.h"
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/client/gui/screens/AbstractScene.h"
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/TextboxTextUpdateReason.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class AbstractSceneProxy;
class AbstractScreenSetupCleanupStrategy;
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
namespace OreUI { class IView; }
namespace OreUI { class IViewProvider; }
namespace OreUI { class RouteModeInputHandler; }
namespace OreUI { class RouterLocation; }
namespace OreUI::Debug { class ISceneDataProvider; }
// clang-format on

namespace OreUI {

class Scene : public ::AbstractScene, public ::OreUI::IScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::OreUI::ViewId const>                                          mViewId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IViewProvider>>         mViewProvider;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::IView>>                    mView;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                       mOnLoadFailedCallback;
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mCurrentRoute;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::RouteModeInputHandler>> mRouteModeInputHandler;
    ::ll::TypedStorage<1, 1, ::OreUI::SceneState>                                            mState;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRouteChangedSubscription;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                      mGamepadCursorPosition;
    ::ll::TypedStorage<2, 2, short>                            mCurrentPointerPositionX;
    ::ll::TypedStorage<2, 2, short>                            mCurrentPointerPositionY;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::AbstractScreenSetupCleanupStrategy>>>
                                                                       mScreenSetupCleanup;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AbstractSceneProxy>> mProxy;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Scene() /*override*/ = default;

    virtual void onCreation() /*override*/;

    virtual void init(::ScreenSizeData const&) /*override*/;

    virtual void setSize(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void onSetKeyboardHeight(float) /*override*/;

    virtual ::std::vector<::RectangleArea> getInputAreas() const /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual void onFocusGained() /*override*/;

    virtual void onFocusLost() /*override*/;

    virtual void terminate() /*override*/;

    virtual void onLeave() /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual void leaveScreen() /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual void tick(int, int) /*override*/;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext&) /*override*/;

    virtual void applyInput(float) /*override*/;

    virtual void preRenderUpdate(::ScreenContext&) /*override*/;

    virtual void prepareFrame(::ScreenContext&) /*override*/;

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const&) /*override*/;

    virtual void postRenderUpdate(::ScreenContext&) /*override*/;

    virtual void handleInputModeChanged(::InputMode) /*override*/;

    virtual void handleButtonPress(uint, ::FocusImpact) /*override*/;

    virtual void handleButtonRelease(uint, ::FocusImpact) /*override*/;

    virtual void handleRawInputEvent(int, ::RawInputType, ::ButtonState, bool) /*override*/;

    virtual bool handlePointerLocation(::PointerLocationEventData const&, ::FocusImpact) /*override*/;

    virtual void handlePointerPressed(bool) /*override*/;

    virtual void handleDirection(::DirectionId, float, float, ::FocusImpact) /*override*/;

    virtual void handleTextChar(::std::string const&, ::FocusImpact) /*override*/;

    virtual void handleTouchPadTouch(::TouchPadTouchEventData const&, ::FocusImpact) /*override*/;

    virtual void setTextboxText(::std::string const&, ::TextboxTextUpdateReason) /*override*/;

    virtual void onKeyboardDismissed() /*override*/;

    virtual void handleLicenseChanged() /*override*/;

    virtual bool renderGameBehind() const /*override*/;

    virtual bool absorbsInput() const /*override*/;

    virtual bool closeOnPlayerHurt() const /*override*/;

    virtual bool useCustomPocketToast() const /*override*/;

    virtual bool isModal() const /*override*/;

    virtual bool isEditorMode() const /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual bool shouldStealMouse() const /*override*/;

    virtual bool screenIsNotFlushable() const /*override*/;

    virtual bool alwaysAcceptsInput() const /*override*/;

    virtual bool screenDrawsLast() const /*override*/;

    virtual bool isPlayScreen() const /*override*/;

    virtual bool renderOnlyWhenTopMost() const /*override*/;

    virtual bool lowFreqRendering() const /*override*/;

    virtual bool ignoreAsTop() const /*override*/;

    virtual bool shouldBeSkippedInAutomation() const /*override*/;

    virtual int getWidth() /*override*/;

    virtual int getHeight() /*override*/;

    virtual void reload() /*override*/;

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual bool equalsScreenName(::std::string_view comparison) const /*override*/;

    virtual bool containsScreenNameSubstring(::std::string_view substring) const /*override*/;

    virtual ::std::string getRawScreenName() const /*override*/;

    virtual bool equalsRawScreenName(::std::string_view comparison) const /*override*/;

    virtual ::std::string getRoute() const /*override*/;

    virtual ::std::string getScreenTelemetryName() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const /*override*/;

    virtual int getScreenVersion() const /*override*/;

    virtual void processBufferedTextCharEvents(::std::vector<::TextCharEventData> const&) /*override*/;

    virtual bool getShouldSendEvents() /*override*/;

    virtual void setShouldSendEvents(bool) /*override*/;

    virtual bool getWantsTextOnly() /*override*/;

    virtual void setWantsTextOnly(bool) /*override*/;

    virtual void onDelete(::CachedScenes&, ::TaskGroup&) /*override*/;

    virtual bool isGamepadCursorEnabled() const /*override*/;

    virtual bool isGamepadDeflectionModeEnabled() const /*override*/;

    virtual ::glm::vec2 const& getGamepadCursorPosition() const /*override*/;

    virtual void cleanInputComponents() /*override*/;

    virtual ::std::weak_ptr<::AbstractSceneProxy> getProxy() /*override*/;

    virtual bool canBePushed() const /*override*/;

    virtual bool canBePopped() const /*override*/;

    virtual bool canBeTransitioned() const /*override*/;

    virtual void onScreenExit(bool, bool, ::std::shared_ptr<::AbstractScene>) /*override*/;

    virtual void onScreenEntrance(bool, bool) /*override*/;

    virtual bool isEntering() const /*override*/;

    virtual bool isExiting() const /*override*/;

    virtual void schedulePop() /*override*/;

    virtual bool isTerminating() const /*override*/;

    virtual bool loadScreenImmediately() const /*override*/;

    virtual bool forceUpdateActiveSceneStackWhenPushed() const /*override*/;

    virtual ::RectangleArea getAreaOfControlByName(::std::string const&) const /*override*/;

    virtual bool hasFinishedLoading() const /*override*/;

    virtual void sendScreenEvent(::std::string const& eventName, ::std::string const& eventData) /*override*/;

    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::Debug::ISceneDataProvider const> getDebugDataProvider() const
        /*override*/;

    virtual void onLoadFailed(char const*, char const*) /*override*/;

    virtual void onViewReused() /*override*/;

    virtual void onReusedViewReleased() /*override*/;

    virtual bool isInputEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updateRouteAndRouteMode(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onCreation();

    MCNAPI void $init(::ScreenSizeData const&);

    MCNAPI void $setSize(::ScreenSizeData const& screenSizeData);

    MCNAPI void $onSetKeyboardHeight(float);

    MCNAPI ::std::vector<::RectangleArea> $getInputAreas() const;

    MCNAPI void $onInternetUpdate();

    MCNAPI void $onFocusGained();

    MCNAPI void $onFocusLost();

    MCNAPI void $terminate();

    MCNAPI void $onLeave();

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $leaveScreen();

    MCNAPI void $preFrameTick();

    MCNAPI void $tick(int, int);

    MCNAPI void $frameUpdate(::MinecraftUIFrameUpdateContext&);

    MCNAPI void $applyInput(float);

    MCNAPI void $preRenderUpdate(::ScreenContext&);

    MCNAPI void $prepareFrame(::ScreenContext&);

    MCNAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const&);

    MCNAPI void $postRenderUpdate(::ScreenContext&);

    MCNAPI void $handleInputModeChanged(::InputMode);

    MCNAPI void $handleButtonPress(uint, ::FocusImpact);

    MCNAPI void $handleButtonRelease(uint, ::FocusImpact);

    MCNAPI void $handleRawInputEvent(int, ::RawInputType, ::ButtonState, bool);

    MCNAPI bool $handlePointerLocation(::PointerLocationEventData const&, ::FocusImpact);

    MCNAPI void $handlePointerPressed(bool);

    MCNAPI void $handleDirection(::DirectionId, float, float, ::FocusImpact);

    MCNAPI void $handleTextChar(::std::string const&, ::FocusImpact);

    MCNAPI void $handleTouchPadTouch(::TouchPadTouchEventData const&, ::FocusImpact);

    MCNAPI void $setTextboxText(::std::string const&, ::TextboxTextUpdateReason);

    MCNAPI void $onKeyboardDismissed();

    MCNAPI void $handleLicenseChanged();

    MCNAPI bool $renderGameBehind() const;

    MCNAPI bool $absorbsInput() const;

    MCNAPI bool $closeOnPlayerHurt() const;

    MCNAPI bool $useCustomPocketToast() const;

    MCNAPI bool $isModal() const;

    MCNAPI bool $isEditorMode() const;

    MCNAPI bool $isShowingMenu() const;

    MCNAPI bool $shouldStealMouse() const;

    MCNAPI bool $screenIsNotFlushable() const;

    MCNAPI bool $alwaysAcceptsInput() const;

    MCNAPI bool $screenDrawsLast() const;

    MCNAPI bool $isPlayScreen() const;

    MCNAPI bool $renderOnlyWhenTopMost() const;

    MCNAPI bool $lowFreqRendering() const;

    MCNAPI bool $ignoreAsTop() const;

    MCNAPI bool $shouldBeSkippedInAutomation() const;

    MCNAPI int $getWidth();

    MCNAPI int $getHeight();

    MCNAPI void $reload();

    MCNAPI ::EyeRenderingModeBit $getEyeRenderingMode() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI ::std::string $getScreenName() const;

    MCNAPI bool $equalsScreenName(::std::string_view comparison) const;

    MCNAPI bool $containsScreenNameSubstring(::std::string_view substring) const;

    MCNAPI ::std::string $getRawScreenName() const;

    MCNAPI bool $equalsRawScreenName(::std::string_view comparison) const;

    MCNAPI ::std::string $getRoute() const;

    MCNAPI ::std::string $getScreenTelemetryName() const;

    MCNAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    MCNAPI int $getScreenVersion() const;

    MCNAPI void $processBufferedTextCharEvents(::std::vector<::TextCharEventData> const&);

    MCNAPI bool $getShouldSendEvents();

    MCNAPI void $setShouldSendEvents(bool);

    MCNAPI bool $getWantsTextOnly();

    MCNAPI void $setWantsTextOnly(bool);

    MCNAPI void $onDelete(::CachedScenes&, ::TaskGroup&);

    MCNAPI bool $isGamepadCursorEnabled() const;

    MCNAPI bool $isGamepadDeflectionModeEnabled() const;

    MCNAPI ::glm::vec2 const& $getGamepadCursorPosition() const;

    MCNAPI void $cleanInputComponents();

    MCNAPI ::std::weak_ptr<::AbstractSceneProxy> $getProxy();

    MCNAPI bool $canBePushed() const;

    MCNAPI bool $canBePopped() const;

    MCNAPI bool $canBeTransitioned() const;

    MCNAPI void $onScreenExit(bool, bool, ::std::shared_ptr<::AbstractScene>);

    MCNAPI void $onScreenEntrance(bool, bool);

    MCNAPI bool $isEntering() const;

    MCNAPI bool $isExiting() const;

    MCNAPI void $schedulePop();

    MCNAPI bool $isTerminating() const;

    MCNAPI bool $loadScreenImmediately() const;

    MCNAPI bool $forceUpdateActiveSceneStackWhenPushed() const;

    MCNAPI ::RectangleArea $getAreaOfControlByName(::std::string const&) const;

    MCNAPI bool $hasFinishedLoading() const;

    MCNAPI void $sendScreenEvent(::std::string const& eventName, ::std::string const& eventData);

    MCNAPI void $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&);

    MCNAPI ::Bedrock::NonOwnerPointer<::OreUI::Debug::ISceneDataProvider const> $getDebugDataProvider() const;

    MCNAPI void $onLoadFailed(char const*, char const*);

    MCNAPI void $onViewReused();

    MCNAPI void $onReusedViewReleased();

    MCNAPI bool $isInputEnabled() const;
    // NOLINTEND
};

} // namespace OreUI
