#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/interfaces/IScreenController.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ScreenControllerProxy;
class TaskResult;
class UIPropertyBag;
struct ActorUniqueID;
struct FocusMoveScreenEventData;
struct InputModeChangeScreenEventData;
struct ItemRendererData;
struct PointerHeldScreenEventData;
struct RawInputScreenEventData;
struct ScreenEvent;
struct ScreenViewCommand;
struct StringHash;
struct TextEditScreenEventData;
struct TextEditSelectedStateChangeEventData;
struct ToggleChangeEventData;
namespace Json { class Value; }
namespace mce { class Color; }
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

    enum class SliderChangeType : int {
        AnyChange    = 0,
        NotFinalized = 1,
        Finalized    = 2,
    };

    struct ButtonEventCallbackKeyHasher {};

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
    ::ll::UntypedStorage<8, 64>   mUnke5c710;
    ::ll::UntypedStorage<8, 64>   mUnka9059e;
    ::ll::UntypedStorage<8, 64>   mUnk8a2aa4;
    ::ll::UntypedStorage<8, 24>   mUnkef27f7;
    ::ll::UntypedStorage<8, 24>   mUnkdd0f55;
    ::ll::UntypedStorage<8, 24>   mUnk1c1018;
    ::ll::UntypedStorage<8, 64>   mUnk60893a;
    ::ll::UntypedStorage<8, 64>   mUnk3c1132;
    ::ll::UntypedStorage<8, 64>   mUnk20b072;
    ::ll::UntypedStorage<8, 24>   mUnkc3d6bf;
    ::ll::UntypedStorage<8, 64>   mUnk392f36;
    ::ll::UntypedStorage<8, 64>   mUnkaa9757;
    ::ll::UntypedStorage<8, 64>   mUnk955ba0;
    ::ll::UntypedStorage<8, 64>   mUnk9c1f6f;
    ::ll::UntypedStorage<8, 64>   mUnk38743d;
    ::ll::UntypedStorage<8, 64>   mUnka545bb;
    ::ll::UntypedStorage<8, 64>   mUnkcd76db;
    ::ll::UntypedStorage<8, 64>   mUnk1669d5;
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
    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

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
    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification);

    // vIndex: 19
    virtual bool bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    // vIndex: 18
    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    // vIndex: 20
    virtual void handleLicenseChanged();

    // vIndex: 21
    virtual void setAssociatedBlockPos(::BlockPos const& pos);

    // vIndex: 22
    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const unqiueID);

    // vIndex: 23
    virtual void setSuspendInput(bool);

    // vIndex: 24
    virtual void setSuspendDirectionalInput(bool);

    // vIndex: 25
    virtual void setViewCommand(::ScreenViewCommand const& callback);

    // vIndex: 26
    virtual void addStaticScreenVars(::Json::Value& globalVars);

    // vIndex: 27
    virtual ::std::string getAdditionalScreenInfo() const;

    // vIndex: 28
    virtual ::std::string getTelemetryOverride() const;

    // vIndex: 29
    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    // vIndex: 30
    virtual ::ui::SceneType getSceneType() const;

    // vIndex: 31
    virtual int getScreenVersion() const;

    // vIndex: 32
    virtual uint getSceneId() const;

    // vIndex: 33
    virtual ::ScreenControllerProxy* getProxy();

    // vIndex: 34
    virtual void onEntered();

    // vIndex: 35
    virtual void onScreenPushedAbove();

    // vIndex: 36
    virtual void onEntering();

    // vIndex: 37
    virtual bool _doesScreenHaveExitBehavior() const;

    // vIndex: 38
    virtual bool _isContainerScreen() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScreenController(bool useTaskGroup);

    MCNAPI uint _getNameId(::std::string const& name) const;

    MCNAPI ::ui::ViewRequest _handleButtonEvent(::ScreenEvent& screenEvent);

    MCNAPI ::ui::ViewRequest _handleEvent(::ScreenEvent& screenEvent);

    MCNAPI void _registerSubController(::std::shared_ptr<::ScreenController> controller);

    MCNAPI void bindBool(
        ::StringHash const&                       bindingName,
        ::brstd::move_only_function<bool() const> callback,
        ::brstd::move_only_function<bool() const> condition
    );

    MCNAPI void bindBoolForAnyCollection(
        ::StringHash const&                                                bindingName,
        ::brstd::move_only_function<bool(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCNAPI void bindBoolForCollection(
        ::StringHash const&                          collectionName,
        ::StringHash const&                          bindingName,
        ::brstd::move_only_function<bool(int) const> callback,
        ::brstd::move_only_function<bool(int) const> condition
    );

    MCNAPI void bindColor(
        ::StringHash const&                               bindingName,
        ::brstd::move_only_function<::mce::Color() const> callback,
        ::brstd::move_only_function<bool() const>         condition
    );

    MCNAPI void bindColorForCollection(
        ::StringHash const&                                  collectionName,
        ::StringHash const&                                  bindingName,
        ::brstd::move_only_function<::mce::Color(int) const> callback,
        ::brstd::move_only_function<bool(int) const>         condition
    );

    MCNAPI void bindColorWithPropertyBag(
        ::StringHash const&                                               bindingName,
        ::brstd::move_only_function<::mce::Color(::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool() const>                         condition
    );

    MCNAPI void bindDoubleForAnyCollection(
        ::StringHash const&                                                  bindingName,
        ::brstd::move_only_function<double(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>   condition
    );

    MCNAPI void bindFloat(
        ::StringHash const&                        bindingName,
        ::brstd::move_only_function<float() const> callback,
        ::brstd::move_only_function<bool() const>  condition
    );

    MCNAPI void bindFloatForAnyCollection(
        ::StringHash const&                                                 bindingName,
        ::brstd::move_only_function<float(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>  condition
    );

    MCNAPI void bindFloatForCollection(
        ::StringHash const&                           collectionName,
        ::StringHash const&                           bindingName,
        ::brstd::move_only_function<float(int) const> callback,
        ::brstd::move_only_function<bool(int) const>  condition
    );

    MCNAPI void bindForAnyCollection(
        ::StringHash const&                                                                  bindingName,
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>                   condition
    );

    MCNAPI void bindForAnyCollection(
        ::StringHash const& bindingName,
        ::brstd::move_only_function<void(::std::string const&, int, ::std::string const&, ::UIPropertyBag&) const>
                                                                           callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCNAPI void bindForCollection(
        ::StringHash const&                                                                  collectionName,
        ::StringHash const&                                                                  bindingName,
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const> func
    );

    MCNAPI void bindForGlobal(
        ::StringHash const&                                                             bindingName,
        ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const> func
    );

    MCNAPI void bindForGlobalGridSize(
        ::StringHash const&                                                             bindingName,
        ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool() const>                                       condition
    );

    MCNAPI void bindGridSize(
        ::StringHash const&                               bindingName,
        ::brstd::move_only_function<::glm::ivec2() const> callback,
        ::brstd::move_only_function<bool() const>         condition
    );

    MCNAPI void bindInt(
        ::StringHash const&                       bindingName,
        ::brstd::move_only_function<int() const>  callback,
        ::brstd::move_only_function<bool() const> condition
    );

    MCNAPI void bindIntForAnyCollection(
        ::StringHash const&                                                bindingName,
        ::brstd::move_only_function<int(::std::string const&, int) const>  callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCNAPI void bindIntForCollection(
        ::StringHash const&                          collectionName,
        ::StringHash const&                          bindingName,
        ::brstd::move_only_function<int(int) const>  callback,
        ::brstd::move_only_function<bool(int) const> condition
    );

    MCNAPI void bindItemDataForAnyCollection(
        ::StringHash const&                                                              bindingName,
        ::brstd::move_only_function<::ItemRendererData(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>               condition
    );

    MCNAPI void bindString(
        ::StringHash const&                                bindingName,
        ::brstd::move_only_function<::std::string() const> callback,
        ::brstd::move_only_function<bool() const>          condition
    );

    MCNAPI void bindStringForAnyCollection(
        ::StringHash const&                                                         bindingName,
        ::brstd::move_only_function<::std::string(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>          condition
    );

    MCNAPI void bindStringForCollection(
        ::StringHash const&                                   collectionName,
        ::StringHash const&                                   bindingName,
        ::brstd::move_only_function<::std::string(int) const> callback,
        ::brstd::move_only_function<bool(int) const>          condition
    );

    MCNAPI bool hasFinishedAsyncTasks() const;

    MCNAPI void queueAsyncTask(::brstd::move_only_function<::TaskResult()>&& task, ::std::function<void()>&& callback);

    MCNAPI void
    registerAnimationEventHandler(uint eventId, ::brstd::move_only_function<::ui::ViewRequest() const> callback);

    MCNAPI void registerButtonEventHandler(
        uint                                                                   buttonId,
        ::ButtonState                                                          currentState,
        ::ButtonState                                                          previousState,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI void registerButtonEventHandler(
        uint                                                                   buttonId,
        ::ButtonState                                                          currentState,
        ::ScreenController::PreviousButtonStateRequirement                     previousStateRequirement,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI void registerButtonInteractedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI void registerButtonPressedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI void registerButtonReleasedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI void registerClipStateChangeEventHandler(
        uint                                                                         eventId,
        ::brstd::move_only_function<::ui::ViewRequest(bool, ::UIPropertyBag&) const> callback
    );

    MCNAPI void registerClippedCollectionEventHandler(
        ::StringHash const&                                                              collectionName,
        ::brstd::move_only_function<::ui::ViewRequest(int, int, ::UIPropertyBag&) const> callback
    );

    MCNAPI void
    registerCustomRendererEventHandler(uint eventId, ::brstd::move_only_function<::ui::ViewRequest() const> callback);

    MCNAPI void registerFocusMovedEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::FocusMoveScreenEventData&) const> callback
    );

    MCNAPI void registerInputModechangedEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::InputModeChangeScreenEventData&) const> callback
    );

    MCNAPI void registerPointerHeldEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::PointerHeldScreenEventData&) const> callback
    );

    MCNAPI void registerSliderChangedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCNAPI void registerSliderFinishedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCNAPI void registerSliderNotFinishedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCNAPI void registerTextEditChangedEventHandler(
        uint                                                                                  buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCNAPI void registerTextEditFinishedEventHandler(
        uint                                                                                  buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCNAPI void registerTextEditSelectedStateChangeEventHandler(
        uint                                                                                          buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditSelectedStateChangeEventData&) const> callback
    );

    MCNAPI void registerTextEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCNAPI void registerToggleChangeEventHandler(
        uint                                                                           buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::ToggleChangeEventData&) const> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool useTaskGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $preFrameTick();

    MCNAPI ::ui::ViewRequest $handleEvent(::ScreenEvent& screenEvent);

    MCNAPI ::std::optional<::std::string> $getRoute() const;

    MCNAPI void $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&);

    MCNAPI void $onOpen();

    MCNAPI void $queueTitleNarration();

    MCNAPI void $onTerminate();

    MCNAPI void $onInit();

    MCNAPI void $onDelete();

    MCNAPI bool $canExit();

    MCNAPI ::ui::ViewRequest $tryExit();

    MCNAPI void $onCreation();

    MCNAPI void $onReload();

    MCNAPI void $onLeave();

    MCNAPI void $leaveScreen(::std::string const&);

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI bool $bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCNAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCNAPI void $handleLicenseChanged();

    MCNAPI void $setAssociatedBlockPos(::BlockPos const& pos);

    MCNAPI void $setAssociatedEntityUniqueID(::ActorUniqueID const unqiueID);

    MCNAPI void $setSuspendInput(bool);

    MCNAPI void $setSuspendDirectionalInput(bool);

    MCNAPI void $setViewCommand(::ScreenViewCommand const& callback);

    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI ::std::string $getAdditionalScreenInfo() const;

    MCNAPI ::std::string $getTelemetryOverride() const;

    MCNAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI int $getScreenVersion() const;

    MCNAPI uint $getSceneId() const;

    MCNAPI ::ScreenControllerProxy* $getProxy();

    MCNAPI void $onEntered();

    MCNAPI void $onScreenPushedAbove();

    MCNAPI void $onEntering();

    MCNAPI bool $_doesScreenHaveExitBehavior() const;

    MCNAPI bool $_isContainerScreen() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
