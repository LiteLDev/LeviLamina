#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/interfaces/IScreenController.h"
#include "mc/deps/input/enums/ButtonState.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ScreenControllerProxy;
class UIPropertyBag;
struct ActorUniqueID;
struct FocusMoveScreenEventData;
struct HoloInputModeChangeScreenEventData;
struct InputModeChangeScreenEventData;
struct PointerHeldScreenEventData;
struct RawInputScreenEventData;
struct ScreenEvent;
struct ScreenViewCommand;
struct TextEditScreenEventData;
struct TextEditSelectedStateChangeEventData;
struct ToggleChangeEventData;
namespace Json { class Value; }
// clang-format on

class ScreenController : public ::IScreenController {
public:
    // ScreenController inner types declare
    // clang-format off
    struct ButtonEventCallbackKeyHasher;
    // clang-format on

    // ScreenController inner types define
    enum class PreviousButtonStateRequirement : int {
        Any     = 0,
        Down    = 1,
        Up      = 2,
        NotDown = 3,
        NotUp   = 4,
    };

    struct ButtonEventCallbackKeyHasher {
    public:
        // prevent constructor by default
        ButtonEventCallbackKeyHasher& operator=(ButtonEventCallbackKeyHasher const&);
        ButtonEventCallbackKeyHasher(ButtonEventCallbackKeyHasher const&);
        ButtonEventCallbackKeyHasher();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>   mUnk8a7418;
    ::ll::UntypedStorage<8, 64>   mUnk82db40;
    ::ll::UntypedStorage<8, 64>   mUnk575ccd;
    ::ll::UntypedStorage<8, 64>   mUnk5c1102;
    ::ll::UntypedStorage<8, 8>    mUnk376fda;
    ::ll::UntypedStorage<1, 1>    mUnkd9ae2b;
    ::ll::UntypedStorage<1, 1>    mUnk658e75;
    ::ll::UntypedStorage<1, 1>    mUnka0b766;
    ::ll::UntypedStorage<8, 1408> mUnkf888ac;
    ::ll::UntypedStorage<1, 1>    mUnkdcae0f;
    ::ll::UntypedStorage<8, 64>   mUnk369414;
    ::ll::UntypedStorage<8, 64>   mUnkfeae63;
    ::ll::UntypedStorage<8, 64>   mUnk9a63b2;
    ::ll::UntypedStorage<8, 24>   mUnk89e797;
    ::ll::UntypedStorage<8, 24>   mUnkb05447;
    ::ll::UntypedStorage<8, 24>   mUnkfa00b6;
    ::ll::UntypedStorage<8, 24>   mUnk56cafa;
    ::ll::UntypedStorage<8, 64>   mUnk58e9be;
    ::ll::UntypedStorage<8, 64>   mUnkd0fe6c;
    ::ll::UntypedStorage<8, 64>   mUnk207b71;
    ::ll::UntypedStorage<8, 24>   mUnkc3d6bf;
    ::ll::UntypedStorage<8, 64>   mUnkfe031a;
    ::ll::UntypedStorage<8, 64>   mUnkf04dff;
    ::ll::UntypedStorage<8, 64>   mUnk1fdf38;
    ::ll::UntypedStorage<8, 64>   mUnk7cc892;
    ::ll::UntypedStorage<8, 64>   mUnka281ef;
    ::ll::UntypedStorage<8, 64>   mUnke65773;
    ::ll::UntypedStorage<8, 64>   mUnk67e6f4;
    ::ll::UntypedStorage<8, 64>   mUnk15987c;
    ::ll::UntypedStorage<8, 8>    mUnk458aec;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenController& operator=(ScreenController const&);
    ScreenController(ScreenController const&);
    ScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScreenController() /*override*/;

    // vIndex: 2
    virtual ::ui::DirtyFlag tick() /*override*/;

    // vIndex: 1
    virtual void preFrameTick() /*override*/;

    // vIndex: 3
    virtual ::ui::ViewRequest handleEvent(::ScreenEvent&) /*override*/;

    // vIndex: 4
    virtual ::std::optional<::std::string> getRoute() const /*override*/;

    // vIndex: 5
    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) /*override*/;

    // vIndex: 6
    virtual void onOpen();

    // vIndex: 7
    virtual void queueTitleNarration();

    // vIndex: 8
    virtual void onTerminate();

    // vIndex: 9
    virtual void onInit();

    // vIndex: 10
    virtual void onDelete();

    // vIndex: 11
    virtual bool canExit();

    // vIndex: 12
    virtual ::ui::ViewRequest tryExit();

    // vIndex: 13
    virtual void onCreation();

    // vIndex: 14
    virtual void onReload();

    // vIndex: 15
    virtual void onLeave();

    // vIndex: 16
    virtual void leaveScreen(::std::string const&);

    // vIndex: 17
    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    // vIndex: 19
    virtual bool
    bind(::std::string const&, uint, int, ::std::string const&, uint, ::std::string const&, ::UIPropertyBag&);

    // vIndex: 18
    virtual bool bind(::std::string const&, uint, ::std::string const&, ::UIPropertyBag&);

    // vIndex: 20
    virtual void handleLicenseChanged();

    // vIndex: 21
    virtual void onDictationEvent(::std::string const&);

    // vIndex: 22
    virtual void setAssociatedBlockPos(::BlockPos const&);

    // vIndex: 23
    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const);

    // vIndex: 24
    virtual void setSuspendInput(bool);

    // vIndex: 25
    virtual void setSuspendDirectionalInput(bool);

    // vIndex: 26
    virtual void setViewCommand(::ScreenViewCommand const&);

    // vIndex: 27
    virtual void addStaticScreenVars(::Json::Value&);

    // vIndex: 28
    virtual ::std::string getAdditionalScreenInfo() const;

    // vIndex: 29
    virtual ::std::string getTelemetryOverride() const;

    // vIndex: 30
    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    // vIndex: 31
    virtual ::ui::SceneType getSceneType() const;

    // vIndex: 32
    virtual int getScreenVersion() const;

    // vIndex: 33
    virtual uint getSceneId() const;

    // vIndex: 34
    virtual bool screenHandlesGamepadMenuButton() const;

    // vIndex: 35
    virtual ::ScreenControllerProxy* getProxy();

    // vIndex: 36
    virtual void onEntered();

    // vIndex: 37
    virtual void onScreenPushedAbove();

    // vIndex: 38
    virtual void onEntering();

    // vIndex: 39
    virtual bool _doesScreenHaveExitBehavior() const;

    // vIndex: 40
    virtual bool _isContainerScreen() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $preFrameTick();

    MCAPI ::ui::ViewRequest $handleEvent(::ScreenEvent&);

    MCAPI ::std::optional<::std::string> $getRoute() const;

    MCAPI void $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&);

    MCAPI void $onOpen();

    MCAPI void $queueTitleNarration();

    MCAPI void $onTerminate();

    MCAPI void $onInit();

    MCAPI void $onDelete();

    MCAPI bool $canExit();

    MCAPI ::ui::ViewRequest $tryExit();

    MCAPI void $onCreation();

    MCAPI void $onReload();

    MCAPI void $onLeave();

    MCAPI void $leaveScreen(::std::string const&);

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCAPI bool
    $bind(::std::string const&, uint, int, ::std::string const&, uint, ::std::string const&, ::UIPropertyBag&);

    MCAPI bool $bind(::std::string const&, uint, ::std::string const&, ::UIPropertyBag&);

    MCAPI void $handleLicenseChanged();

    MCAPI void $onDictationEvent(::std::string const&);

    MCAPI void $setAssociatedBlockPos(::BlockPos const&);

    MCAPI void $setAssociatedEntityUniqueID(::ActorUniqueID const);

    MCAPI void $setSuspendInput(bool);

    MCAPI void $setSuspendDirectionalInput(bool);

    MCAPI void $setViewCommand(::ScreenViewCommand const&);

    MCAPI void $addStaticScreenVars(::Json::Value&);

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCAPI ::std::string $getTelemetryOverride() const;

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    MCAPI ::ui::SceneType $getSceneType() const;

    MCAPI int $getScreenVersion() const;

    MCAPI uint $getSceneId() const;

    MCAPI bool $screenHandlesGamepadMenuButton() const;

    MCAPI ::ScreenControllerProxy* $getProxy();

    MCAPI void $onEntered();

    MCAPI void $onScreenPushedAbove();

    MCAPI void $onEntering();

    MCAPI bool $_doesScreenHaveExitBehavior() const;

    MCAPI bool $_isContainerScreen() const;
    // NOLINTEND
};
