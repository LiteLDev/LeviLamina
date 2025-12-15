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
class RectangleArea;
class ScreenContext;
class TaskGroup;
struct AbstractSceneProxy;
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

class AbstractScene {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaa79ea;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractScene& operator=(AbstractScene const&);
    AbstractScene(AbstractScene const&);
    AbstractScene();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractScene();

    virtual void init(::ScreenSizeData const&) = 0;

    virtual void setSize(::ScreenSizeData const&) = 0;

    virtual void onSetKeyboardHeight(float) = 0;

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

    virtual void tick(int, int) = 0;

    virtual void applyInput(float) = 0;

    virtual void frameUpdate(::MinecraftUIFrameUpdateContext&) = 0;

    virtual void preRenderUpdate(::ScreenContext&) = 0;

    virtual void prepareFrame(::ScreenContext&) = 0;

    virtual void render(::ScreenContext&, ::FrameRenderObject const&) = 0;

    virtual void postRenderUpdate(::ScreenContext&) = 0;

    virtual void handleInputModeChanged(::InputMode) = 0;

    virtual void handleButtonPress(uint, ::FocusImpact) = 0;

    virtual void handleButtonRelease(uint, ::FocusImpact) = 0;

    virtual void handleRawInputEvent(int, ::RawInputType, ::ButtonState, bool) = 0;

    virtual bool handlePointerLocation(::PointerLocationEventData const&, ::FocusImpact) = 0;

    virtual void handlePointerPressed(bool) = 0;

    virtual void handleDirection(::DirectionId, float, float, ::FocusImpact) = 0;

    virtual void handleTextChar(::std::string const&, bool, ::FocusImpact) = 0;

    virtual void handleCaretLocation(int, ::FocusImpact) = 0;

    virtual void handleTouchPadTouch(::TouchPadTouchEventData const&, ::FocusImpact) = 0;

    virtual void setTextboxText(::std::string const&, ::TextboxTextUpdateReason) = 0;

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

    virtual ::RectangleArea getAreaOfControlByName(::std::string const&) const = 0;

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const = 0;

    virtual ::ui::SceneType getSceneType() const = 0;

    virtual ::std::string getScreenName() const = 0;

    virtual bool equalsScreenName(::std::string_view) const = 0;

    virtual bool containsScreenNameSubstring(::std::string_view) const = 0;

    virtual ::std::string getRawScreenName() const = 0;

    virtual ::std::string getRoute() const = 0;

    virtual ::std::string getScreenTelemetryName() const = 0;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const = 0;

    virtual int getScreenVersion() const = 0;

    virtual void processBufferedTextCharEvents(::std::vector<::TextCharEventData> const&) = 0;

    virtual bool getShouldSendEvents() = 0;

    virtual void setShouldSendEvents(bool) = 0;

    virtual bool getWantsTextOnly() = 0;

    virtual void setWantsTextOnly(bool) = 0;

    virtual void onDelete(::CachedScenes&, ::TaskGroup&) = 0;

    virtual bool isGamepadCursorEnabled() const = 0;

    virtual bool isGamepadDeflectionModeEnabled() const = 0;

    virtual ::glm::vec2 const& getGamepadCursorPosition() const = 0;

    virtual void cleanInputComponents() = 0;

    virtual ::std::weak_ptr<::AbstractSceneProxy> getProxy() = 0;

    virtual bool canBePushed() const = 0;

    virtual bool canBePopped() const = 0;

    virtual bool canBeTransitioned() const = 0;

    virtual void onScreenExit(bool, bool, ::std::shared_ptr<::AbstractScene>) = 0;

    virtual void onScreenEntrance(bool, bool) = 0;

    virtual bool isEntering() const = 0;

    virtual bool isExiting() const = 0;

    virtual void schedulePop() = 0;

    virtual bool isTerminating() const = 0;

    virtual bool loadScreenImmediately() const = 0;

    virtual bool forceUpdateActiveSceneStackWhenPushed() const = 0;

    virtual bool hasFinishedLoading() const = 0;

    virtual void sendScreenEvent(::std::string const&, ::std::string const&) = 0;

    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) = 0;

    virtual void setDebugSettings(::OreUI::ViewDebugSettings const&) const = 0;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::ISceneDebugDataProvider const> getDebugDataProvider() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::Experimental::Detail::IQueryProvider const>
    getQueryProvider() const = 0;

    virtual ::Bedrock::NonOwnerPointer<::OreUI::Experimental::Detail::ICommandProvider const>
    getCommandProvider() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
