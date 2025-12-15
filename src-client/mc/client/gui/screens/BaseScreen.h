#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/AbstractScene.h"
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
class RectangleArea;
class ScreenContext;
class TaskGroup;
struct AbstractSceneProxy;
struct AbstractScreenSetupCleanupStrategy;
struct CachedScenes;
struct FrameRenderObject;
struct MinecraftUIFrameUpdateContext;
struct PointerLocationEventData;
struct ScreenSizeData;
struct TextCharEventData;
struct TouchPadTouchEventData;
namespace OreUI { struct ISceneDebugDataProvider; }
namespace OreUI { struct ViewDebugSettings; }
namespace OreUI::Experimental::Detail { struct ICommandProvider; }
namespace OreUI::Experimental::Detail { struct IQueryProvider; }
// clang-format on

class BaseScreen : public ::AbstractScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk49c328;
    ::ll::UntypedStorage<4, 4> mUnk8fe51d;
    ::ll::UntypedStorage<1, 1> mUnk9fc814;
    ::ll::UntypedStorage<1, 1> mUnkf3578c;
    ::ll::UntypedStorage<1, 1> mUnkc818a7;
    ::ll::UntypedStorage<8, 8> mUnke8cd2d;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScreen& operator=(BaseScreen const&);
    BaseScreen(BaseScreen const&);
    BaseScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseScreen() /*override*/;

    virtual void setupForRendering(::ScreenContext& screenContext);

    virtual void cleanupForRendering(::ScreenContext& screenContext);

    virtual void setScreenSetupCleanup(::std::unique_ptr<::AbstractScreenSetupCleanupStrategy> screenSetupCleanup);

    virtual void init(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void setSize(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void onSetKeyboardHeight(float keyboardHeight) /*override*/;

    virtual void onInternetUpdate() /*override*/;

    virtual void onFocusGained() /*override*/;

    virtual void onFocusLost() /*override*/;

    virtual void terminate() /*override*/;

    virtual void onCreation() /*override*/;

    virtual void onLeave() /*override*/;

    virtual void onGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void leaveScreen() /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual void tick(int nTick, int maxTick) /*override*/;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext) /*override*/;

    virtual void applyInput(float a) /*override*/;

    virtual void preRenderUpdate(::ScreenContext& screenContext) /*override*/;

    virtual void prepareFrame(::ScreenContext& screenContext) /*override*/;

    virtual void render(::ScreenContext&, ::FrameRenderObject const&) = 0;

    virtual void postRenderUpdate(::ScreenContext& screenContext) /*override*/;

    virtual void handleInputModeChanged(::InputMode) /*override*/;

    virtual void handleButtonPress(uint buttonId, ::FocusImpact focusImpact) /*override*/;

    virtual void handleButtonRelease(uint buttonId, ::FocusImpact focusImpact) /*override*/;

    virtual void
    handleRawInputEvent(int id, ::RawInputType keyType, ::ButtonState state, bool allowRemapping) /*override*/;

    virtual bool handlePointerLocation(
        ::PointerLocationEventData const& pointerLocationData,
        ::FocusImpact                     focusImpact
    ) /*override*/;

    virtual void handlePointerPressed(bool pressed) /*override*/;

    virtual void handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact) /*override*/;

    virtual void
    handleTextChar(::std::string const& inputUtf8, bool keepImePosition, ::FocusImpact focusImpact) /*override*/;

    virtual void handleCaretLocation(int caretLocation, ::FocusImpact focusImpact) /*override*/;

    virtual void
    handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact) /*override*/;

    virtual void setTextboxText(::std::string const& text, ::TextboxTextUpdateReason) /*override*/;

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

    virtual ::std::vector<::RectangleArea> getInputAreas() const /*override*/;

    virtual int getWidth() /*override*/;

    virtual int getHeight() /*override*/;

    virtual void reload() /*override*/;

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string getRawScreenName() const /*override*/;

    virtual ::std::string getRoute() const /*override*/;

    virtual ::std::string getScreenTelemetryName() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const /*override*/;

    virtual int getScreenVersion() const /*override*/;

    virtual void processBufferedTextCharEvents(::std::vector<::TextCharEventData> const& bufferedEvents) /*override*/;

    virtual bool getShouldSendEvents() /*override*/;

    virtual void setShouldSendEvents(bool sendEvents) /*override*/;

    virtual bool getWantsTextOnly() /*override*/;

    virtual void setWantsTextOnly(bool textOnly) /*override*/;

    virtual void onDelete(::CachedScenes& cache, ::TaskGroup& taskGroup) /*override*/;

    virtual bool isGamepadCursorEnabled() const /*override*/;

    virtual bool isGamepadDeflectionModeEnabled() const /*override*/;

    virtual ::glm::vec2 const& getGamepadCursorPosition() const /*override*/;

    virtual void cleanInputComponents() /*override*/;

    virtual ::std::weak_ptr<::AbstractSceneProxy> getProxy() /*override*/;

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

    virtual bool forceUpdateActiveSceneStackWhenPushed() const /*override*/;

    virtual bool hasFinishedLoading() const /*override*/;

    virtual void sendScreenEvent(::std::string const&, ::std::string const&) /*override*/;

    virtual void setDebugSettings(::OreUI::ViewDebugSettings const&) const /*override*/;

    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::ISceneDebugDataProvider const> getDebugDataProvider() const
        /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::Experimental::Detail::IQueryProvider const> getQueryProvider() const
        /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::Experimental::Detail::ICommandProvider const> getCommandProvider() const
        /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void drawRectangleArea(
        ::ScreenContext&       screenContext,
        ::RectangleArea const& a,
        int                    ux,
        int                    vy,
        float                  uvWidth,
        float                  uvHeight,
        float                  us,
        float                  vs,
        float                  px,
        float                  py
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
    MCNAPI void $setupForRendering(::ScreenContext& screenContext);

    MCNAPI void $cleanupForRendering(::ScreenContext& screenContext);

    MCNAPI void $setScreenSetupCleanup(::std::unique_ptr<::AbstractScreenSetupCleanupStrategy> screenSetupCleanup);

    MCNAPI void $init(::ScreenSizeData const& screenSizeData);

    MCNAPI void $setSize(::ScreenSizeData const& screenSizeData);

    MCNAPI void $onSetKeyboardHeight(float keyboardHeight);

    MCNAPI void $onInternetUpdate();

    MCNAPI void $onFocusGained();

    MCNAPI void $onFocusLost();

    MCNAPI void $terminate();

    MCNAPI void $onCreation();

    MCNAPI void $onLeave();

    MCNAPI void $onGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI void $leaveScreen();

    MCNAPI void $preFrameTick();

    MCNAPI void $tick(int nTick, int maxTick);

    MCNAPI void $frameUpdate(::MinecraftUIFrameUpdateContext& frameUpdateContext);

    MCNAPI void $applyInput(float a);

    MCNAPI void $preRenderUpdate(::ScreenContext& screenContext);

    MCNAPI void $prepareFrame(::ScreenContext& screenContext);

    MCNAPI void $postRenderUpdate(::ScreenContext& screenContext);

    MCNAPI void $handleButtonPress(uint buttonId, ::FocusImpact focusImpact);

    MCNAPI void $handleButtonRelease(uint buttonId, ::FocusImpact focusImpact);

    MCNAPI void $handleRawInputEvent(int id, ::RawInputType keyType, ::ButtonState state, bool allowRemapping);

    MCNAPI bool
    $handlePointerLocation(::PointerLocationEventData const& pointerLocationData, ::FocusImpact focusImpact);

    MCNAPI void $handlePointerPressed(bool pressed);

    MCNAPI void $handleDirection(::DirectionId directionId, float x, float y, ::FocusImpact focusImpact);

    MCNAPI void $handleTextChar(::std::string const& inputUtf8, bool keepImePosition, ::FocusImpact focusImpact);

    MCNAPI void $handleCaretLocation(int caretLocation, ::FocusImpact focusImpact);

    MCNAPI void $handleTouchPadTouch(::TouchPadTouchEventData const& touchEventData, ::FocusImpact focusImpact);

    MCNAPI void $setTextboxText(::std::string const& text, ::TextboxTextUpdateReason);

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

    MCNAPI ::std::vector<::RectangleArea> $getInputAreas() const;

    MCNAPI int $getWidth();

    MCNAPI int $getHeight();

    MCNAPI void $reload();

    MCNAPI ::EyeRenderingModeBit $getEyeRenderingMode() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI ::std::string $getRawScreenName() const;

    MCNAPI ::std::string $getRoute() const;

    MCNAPI ::std::string $getScreenTelemetryName() const;

    MCNAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    MCNAPI int $getScreenVersion() const;

    MCNAPI void $processBufferedTextCharEvents(::std::vector<::TextCharEventData> const& bufferedEvents);

    MCNAPI bool $getShouldSendEvents();

    MCNAPI void $setShouldSendEvents(bool sendEvents);

    MCNAPI bool $getWantsTextOnly();

    MCNAPI void $setWantsTextOnly(bool textOnly);

    MCNAPI void $onDelete(::CachedScenes& cache, ::TaskGroup& taskGroup);

    MCNAPI bool $isGamepadCursorEnabled() const;

    MCNAPI bool $isGamepadDeflectionModeEnabled() const;

    MCNAPI ::glm::vec2 const& $getGamepadCursorPosition() const;

    MCNAPI void $cleanInputComponents();

    MCNAPI ::std::weak_ptr<::AbstractSceneProxy> $getProxy();

    MCNAPI bool $canBePushed() const;

    MCNAPI bool $canBePopped() const;

    MCNAPI bool $canBeTransitioned() const;

    MCNAPI void $onScreenExit(bool isPopping, bool doScreenTransitions, ::std::shared_ptr<::AbstractScene> pushedScene);

    MCNAPI void $onScreenEntrance(bool isRevisiting, bool doScreenTransitions);

    MCNAPI bool $isEntering() const;

    MCNAPI bool $isExiting() const;

    MCNAPI void $schedulePop();

    MCNAPI bool $isTerminating() const;

    MCNAPI bool $loadScreenImmediately() const;

    MCNAPI bool $forceUpdateActiveSceneStackWhenPushed() const;

    MCNAPI bool $hasFinishedLoading() const;

    MCNAPI void $sendScreenEvent(::std::string const&, ::std::string const&);

    MCNAPI void $setDebugSettings(::OreUI::ViewDebugSettings const&) const;

    MCNAPI void $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&);

    MCNAPI ::Bedrock::NonOwnerPointer<::OreUI::ISceneDebugDataProvider const> $getDebugDataProvider() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::OreUI::Experimental::Detail::IQueryProvider const> $getQueryProvider() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::OreUI::Experimental::Detail::ICommandProvider const>
    $getCommandProvider() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
