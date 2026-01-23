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
class StringHash;
class TaskResult;
struct ActorUniqueID;
struct FocusMoveScreenEventData;
struct InputModeChangeScreenEventData;
struct ItemRendererData;
struct PointerHeldScreenEventData;
struct RawInputScreenEventData;
struct ScreenEvent;
struct ScreenViewCommand;
struct TextEditScreenEventData;
struct TextEditSelectedStateChangeEventData;
struct ToggleChangeEventData;
struct UIPropertyBag;
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
    virtual ~ScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void preFrameTick() /*override*/;

    virtual ::ui::ViewRequest handleEvent(::ScreenEvent& screenEvent) /*override*/;

    virtual ::std::optional<::std::string> getRoute() const /*override*/;

    virtual void setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&) /*override*/;

    virtual void onOpen();

    virtual void queueTitleNarration();

    virtual void onTerminate();

    virtual void onInit();

    virtual void onDelete();

    virtual bool canExit();

    virtual ::ui::ViewRequest tryExit();

    virtual void onCreation();

    virtual void onReload();

    virtual void onLeave();

    virtual void leaveScreen(::std::string const&);

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual bool bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    virtual void handleLicenseChanged();

    virtual void setAssociatedBlockPos(::BlockPos const& pos);

    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const unqiueID);

    virtual void setSuspendInput(bool);

    virtual void setSuspendDirectionalInput(bool);

    virtual void setViewCommand(::ScreenViewCommand const& callback);

    virtual void addStaticScreenVars(::Json::Value& globalVars);

    virtual ::std::string getAdditionalScreenInfo() const;

    virtual ::std::string getTelemetryOverride() const;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    virtual ::ui::SceneType getSceneType() const;

    virtual int getScreenVersion() const;

    virtual uint getSceneId() const;

    virtual ::ScreenControllerProxy* getProxy();

    virtual void onEntered();

    virtual void onScreenPushedAbove();

    virtual void onEntering();

    virtual bool _doesScreenHaveExitBehavior() const;

    virtual bool _isContainerScreen() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenController(bool useTaskGroup);

    MCAPI uint _getNameId(::std::string const& name) const;

    MCAPI ::ui::ViewRequest _handleButtonEvent(::ScreenEvent& screenEvent);

    MCAPI ::ui::ViewRequest _handleEvent(::ScreenEvent& screenEvent);

    MCAPI void _registerSubController(::std::shared_ptr<::ScreenController> controller);

    MCAPI void bindBool(
        ::StringHash const&                       bindingName,
        ::brstd::move_only_function<bool() const> callback,
        ::brstd::move_only_function<bool() const> condition
    );

    MCAPI void bindBoolForAnyCollection(
        ::StringHash const&                                                bindingName,
        ::brstd::move_only_function<bool(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCAPI void bindBoolForCollection(
        ::StringHash const&                          collectionName,
        ::StringHash const&                          bindingName,
        ::brstd::move_only_function<bool(int) const> callback,
        ::brstd::move_only_function<bool(int) const> condition
    );

    MCAPI void bindColor(
        ::StringHash const&                               bindingName,
        ::brstd::move_only_function<::mce::Color() const> callback,
        ::brstd::move_only_function<bool() const>         condition
    );

    MCAPI void bindColorForCollection(
        ::StringHash const&                                  collectionName,
        ::StringHash const&                                  bindingName,
        ::brstd::move_only_function<::mce::Color(int) const> callback,
        ::brstd::move_only_function<bool(int) const>         condition
    );

    MCAPI void bindColorWithPropertyBag(
        ::StringHash const&                                               bindingName,
        ::brstd::move_only_function<::mce::Color(::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool() const>                         condition
    );

    MCAPI void bindDoubleForAnyCollection(
        ::StringHash const&                                                  bindingName,
        ::brstd::move_only_function<double(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>   condition
    );

    MCAPI void bindFloat(
        ::StringHash const&                        bindingName,
        ::brstd::move_only_function<float() const> callback,
        ::brstd::move_only_function<bool() const>  condition
    );

    MCAPI void bindFloatForAnyCollection(
        ::StringHash const&                                                 bindingName,
        ::brstd::move_only_function<float(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>  condition
    );

    MCAPI void bindFloatForCollection(
        ::StringHash const&                           collectionName,
        ::StringHash const&                           bindingName,
        ::brstd::move_only_function<float(int) const> callback,
        ::brstd::move_only_function<bool(int) const>  condition
    );

    MCAPI void bindForAnyCollection(
        ::StringHash const&                                                                  bindingName,
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>                   condition
    );

    MCAPI void bindForAnyCollection(
        ::StringHash const& bindingName,
        ::brstd::move_only_function<void(::std::string const&, int, ::std::string const&, ::UIPropertyBag&) const>
                                                                           callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCAPI void bindForCollection(
        ::StringHash const&                                                                  collectionName,
        ::StringHash const&                                                                  bindingName,
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const> func
    );

    MCAPI void bindForGlobal(
        ::StringHash const&                                                             bindingName,
        ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const> func
    );

    MCAPI void bindForGlobalGridSize(
        ::StringHash const&                                                             bindingName,
        ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool() const>                                       condition
    );

    MCAPI void bindGridSize(
        ::StringHash const&                               bindingName,
        ::brstd::move_only_function<::glm::ivec2() const> callback,
        ::brstd::move_only_function<bool() const>         condition
    );

    MCAPI void bindInt(
        ::StringHash const&                       bindingName,
        ::brstd::move_only_function<int() const>  callback,
        ::brstd::move_only_function<bool() const> condition
    );

    MCAPI void bindIntForAnyCollection(
        ::StringHash const&                                                bindingName,
        ::brstd::move_only_function<int(::std::string const&, int) const>  callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCAPI void bindIntForCollection(
        ::StringHash const&                          collectionName,
        ::StringHash const&                          bindingName,
        ::brstd::move_only_function<int(int) const>  callback,
        ::brstd::move_only_function<bool(int) const> condition
    );

    MCAPI void bindItemDataForAnyCollection(
        ::StringHash const&                                                              bindingName,
        ::brstd::move_only_function<::ItemRendererData(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>               condition
    );

    MCAPI void bindString(
        ::StringHash const&                                bindingName,
        ::brstd::move_only_function<::std::string() const> callback,
        ::brstd::move_only_function<bool() const>          condition
    );

    MCAPI void bindStringForAnyCollection(
        ::StringHash const&                                                         bindingName,
        ::brstd::move_only_function<::std::string(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>          condition
    );

    MCAPI void bindStringForCollection(
        ::StringHash const&                                   collectionName,
        ::StringHash const&                                   bindingName,
        ::brstd::move_only_function<::std::string(int) const> callback,
        ::brstd::move_only_function<bool(int) const>          condition
    );

    MCAPI bool hasFinishedAsyncTasks() const;

    MCAPI void queueAsyncTask(::brstd::move_only_function<::TaskResult()>&& task, ::std::function<void()>&& callback);

    MCAPI void
    registerAnimationEventHandler(uint eventId, ::brstd::move_only_function<::ui::ViewRequest() const> callback);

    MCAPI void registerButtonEventHandler(
        uint                                                                   buttonId,
        ::ButtonState                                                          currentState,
        ::ButtonState                                                          previousState,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerButtonEventHandler(
        uint                                                                   buttonId,
        ::ButtonState                                                          currentState,
        ::ScreenController::PreviousButtonStateRequirement                     previousStateRequirement,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerButtonInteractedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerButtonPressedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerButtonReleasedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCAPI void registerClipStateChangeEventHandler(
        uint                                                                         eventId,
        ::brstd::move_only_function<::ui::ViewRequest(bool, ::UIPropertyBag&) const> callback
    );

    MCAPI void registerClippedCollectionEventHandler(
        ::StringHash const&                                                              collectionName,
        ::brstd::move_only_function<::ui::ViewRequest(int, int, ::UIPropertyBag&) const> callback
    );

    MCAPI void
    registerCustomRendererEventHandler(uint eventId, ::brstd::move_only_function<::ui::ViewRequest() const> callback);

    MCAPI void registerFocusMovedEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::FocusMoveScreenEventData&) const> callback
    );

    MCAPI void registerInputModechangedEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::InputModeChangeScreenEventData&) const> callback
    );

    MCAPI void registerPointerHeldEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::PointerHeldScreenEventData&) const> callback
    );

    MCAPI void registerSliderChangedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCAPI void registerSliderFinishedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCAPI void registerSliderNotFinishedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCAPI void registerTextEditChangedEventHandler(
        uint                                                                                  buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCAPI void registerTextEditFinishedEventHandler(
        uint                                                                                  buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCAPI void registerTextEditSelectedStateChangeEventHandler(
        uint                                                                                          buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditSelectedStateChangeEventData&) const> callback
    );

    MCAPI void registerTextEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCAPI void registerToggleChangeEventHandler(
        uint                                                                           buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::ToggleChangeEventData&) const> callback
    );

    MCAPI void
    setControlFactoryCreateCallback(::std::function<void(::std::string const&, ::UIPropertyBag const&)> callback);

    MCAPI void setControlFactoryDestroyAllCallback(::std::function<void(::std::string const&)> callback);

    MCAPI void
    setControlFactoryDestroyCallback(::std::function<void(::std::string const&, ::std::string const&)> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool useTaskGroup);
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

    MCFOLD void $preFrameTick();

    MCAPI ::ui::ViewRequest $handleEvent(::ScreenEvent& screenEvent);

    MCFOLD ::std::optional<::std::string> $getRoute() const;

    MCFOLD void $setScreenState(::std::vector<::std::pair<::std::string_view, ::std::string_view>> const&);

    MCAPI void $onOpen();

    MCAPI void $queueTitleNarration();

    MCFOLD void $onTerminate();

    MCAPI void $onInit();

    MCFOLD void $onDelete();

    MCAPI bool $canExit();

    MCFOLD ::ui::ViewRequest $tryExit();

    MCAPI void $onCreation();

    MCFOLD void $onReload();

    MCAPI void $onLeave();

    MCFOLD void $leaveScreen(::std::string const&);

    MCAPI bool $bind(
        ::std::string const& collectionName,
        uint                 collectionNameHash,
        int                  collectionIndex,
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCFOLD void $handleLicenseChanged();

    MCFOLD void $setAssociatedBlockPos(::BlockPos const& pos);

    MCFOLD void $setAssociatedEntityUniqueID(::ActorUniqueID const unqiueID);

    MCFOLD void $setSuspendInput(bool);

    MCFOLD void $setSuspendDirectionalInput(bool);

    MCAPI void $setViewCommand(::ScreenViewCommand const& callback);

    MCFOLD void $addStaticScreenVars(::Json::Value& globalVars);

    MCFOLD ::std::string $getAdditionalScreenInfo() const;

    MCFOLD ::std::string $getTelemetryOverride() const;

    MCFOLD void $addEventProperties(::std::unordered_map<::std::string, ::std::string>&) const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCFOLD int $getScreenVersion() const;

    MCFOLD uint $getSceneId() const;

    MCFOLD ::ScreenControllerProxy* $getProxy();

    MCFOLD void $onEntered();

    MCFOLD void $onScreenPushedAbove();

    MCFOLD void $onEntering();

    MCFOLD bool $_doesScreenHaveExitBehavior() const;

    MCFOLD bool $_isContainerScreen() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
