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
class UIPropertyBag;
struct ActorUniqueID;
struct FocusMoveScreenEventData;
struct InputModeChangeScreenEventData;
struct PointerHeldScreenEventData;
struct RawInputScreenEventData;
struct ScreenEvent;
struct ScreenViewCommand;
struct TextEditScreenEventData;
struct TextEditSelectedStateChangeEventData;
struct ToggleChangeEventData;
namespace Json { class Value; }
namespace mce { class Color; }
struct ItemRendererData;
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
#ifdef LL_PLAT_S
    virtual ~ScreenController() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ScreenController() /*override*/;
#endif

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

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification);

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
    MCNAPI_C explicit ScreenController(bool useTaskGroup);

    MCNAPI_C uint _getNameId(::std::string const& name) const;

    MCNAPI_C ::ui::ViewRequest _handleButtonEvent(::ScreenEvent& screenEvent);

    MCNAPI_C ::ui::ViewRequest _handleEvent(::ScreenEvent& screenEvent);

    MCNAPI_C void _registerSubController(::std::shared_ptr<::ScreenController> controller);

    MCNAPI_C void bindBool(
        ::StringHash const&                       bindingName,
        ::brstd::move_only_function<bool() const> callback,
        ::brstd::move_only_function<bool() const> condition
    );

    MCNAPI_C void bindBoolForAnyCollection(
        ::StringHash const&                                                bindingName,
        ::brstd::move_only_function<bool(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCNAPI_C void bindBoolForCollection(
        ::StringHash const&                          collectionName,
        ::StringHash const&                          bindingName,
        ::brstd::move_only_function<bool(int) const> callback,
        ::brstd::move_only_function<bool(int) const> condition
    );

    MCNAPI_C void bindColor(
        ::StringHash const&                               bindingName,
        ::brstd::move_only_function<::mce::Color() const> callback,
        ::brstd::move_only_function<bool() const>         condition
    );

    MCNAPI_C void bindColorForCollection(
        ::StringHash const&                                  collectionName,
        ::StringHash const&                                  bindingName,
        ::brstd::move_only_function<::mce::Color(int) const> callback,
        ::brstd::move_only_function<bool(int) const>         condition
    );

    MCNAPI_C void bindColorWithPropertyBag(
        ::StringHash const&                                               bindingName,
        ::brstd::move_only_function<::mce::Color(::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool() const>                         condition
    );

    MCNAPI_C void bindDoubleForAnyCollection(
        ::StringHash const&                                                  bindingName,
        ::brstd::move_only_function<double(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>   condition
    );

    MCNAPI_C void bindFloat(
        ::StringHash const&                        bindingName,
        ::brstd::move_only_function<float() const> callback,
        ::brstd::move_only_function<bool() const>  condition
    );

    MCNAPI_C void bindFloatForAnyCollection(
        ::StringHash const&                                                 bindingName,
        ::brstd::move_only_function<float(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>  condition
    );

    MCNAPI_C void bindFloatForCollection(
        ::StringHash const&                           collectionName,
        ::StringHash const&                           bindingName,
        ::brstd::move_only_function<float(int) const> callback,
        ::brstd::move_only_function<bool(int) const>  condition
    );

    MCNAPI_C void bindForAnyCollection(
        ::StringHash const& bindingName,
        ::brstd::move_only_function<void(::std::string const&, int, ::std::string const&, ::UIPropertyBag&) const>
                                                                           callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCNAPI_C void bindForAnyCollection(
        ::StringHash const&                                                                  bindingName,
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>                   condition
    );

    MCNAPI_C void bindForCollection(
        ::StringHash const&                                                                  collectionName,
        ::StringHash const&                                                                  bindingName,
        ::brstd::move_only_function<void(int, ::std::string const&, ::UIPropertyBag&) const> func
    );

    MCNAPI_C void bindForGlobal(
        ::StringHash const&                                                             bindingName,
        ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const> func
    );

    MCNAPI_C void bindForGlobalGridSize(
        ::StringHash const&                                                             bindingName,
        ::brstd::move_only_function<void(::std::string const&, ::UIPropertyBag&) const> callback,
        ::brstd::move_only_function<bool() const>                                       condition
    );

    MCNAPI_C void bindGridSize(
        ::StringHash const&                               bindingName,
        ::brstd::move_only_function<::glm::ivec2() const> callback,
        ::brstd::move_only_function<bool() const>         condition
    );

    MCNAPI_C void bindInt(
        ::StringHash const&                       bindingName,
        ::brstd::move_only_function<int() const>  callback,
        ::brstd::move_only_function<bool() const> condition
    );

    MCNAPI_C void bindIntForAnyCollection(
        ::StringHash const&                                                bindingName,
        ::brstd::move_only_function<int(::std::string const&, int) const>  callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const> condition
    );

    MCNAPI_C void bindIntForCollection(
        ::StringHash const&                          collectionName,
        ::StringHash const&                          bindingName,
        ::brstd::move_only_function<int(int) const>  callback,
        ::brstd::move_only_function<bool(int) const> condition
    );

    MCNAPI_C void bindItemDataForAnyCollection(
        ::StringHash const&                                                              bindingName,
        ::brstd::move_only_function<::ItemRendererData(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>               condition
    );

    MCNAPI_C void bindString(
        ::StringHash const&                                bindingName,
        ::brstd::move_only_function<::std::string() const> callback,
        ::brstd::move_only_function<bool() const>          condition
    );

    MCNAPI_C void bindStringForAnyCollection(
        ::StringHash const&                                                         bindingName,
        ::brstd::move_only_function<::std::string(::std::string const&, int) const> callback,
        ::brstd::move_only_function<bool(::std::string const&, int) const>          condition
    );

    MCNAPI_C void bindStringForCollection(
        ::StringHash const&                                   collectionName,
        ::StringHash const&                                   bindingName,
        ::brstd::move_only_function<::std::string(int) const> callback,
        ::brstd::move_only_function<bool(int) const>          condition
    );

    MCNAPI_C bool hasFinishedAsyncTasks() const;

    MCNAPI_C void
    queueAsyncTask(::brstd::move_only_function<::TaskResult()>&& task, ::std::function<void()>&& callback);

    MCNAPI_C void
    registerAnimationEventHandler(uint eventId, ::brstd::move_only_function<::ui::ViewRequest() const> callback);

    MCNAPI_C void registerButtonEventHandler(
        uint                                                                   buttonId,
        ::ButtonState                                                          currentState,
        ::ButtonState                                                          previousState,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI_C void registerButtonEventHandler(
        uint                                                                   buttonId,
        ::ButtonState                                                          currentState,
        ::ScreenController::PreviousButtonStateRequirement                     previousStateRequirement,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI_C void registerButtonInteractedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI_C void registerButtonPressedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI_C void registerButtonReleasedHandler(
        uint                                                                   buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::UIPropertyBag*) const> callback
    );

    MCNAPI_C void registerClipStateChangeEventHandler(
        uint                                                                         eventId,
        ::brstd::move_only_function<::ui::ViewRequest(bool, ::UIPropertyBag&) const> callback
    );

    MCNAPI_C void registerClippedCollectionEventHandler(
        ::StringHash const&                                                              collectionName,
        ::brstd::move_only_function<::ui::ViewRequest(int, int, ::UIPropertyBag&) const> callback
    );

    MCNAPI_C void
    registerCustomRendererEventHandler(uint eventId, ::brstd::move_only_function<::ui::ViewRequest() const> callback);

    MCNAPI_C void registerFocusMovedEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::FocusMoveScreenEventData&) const> callback
    );

    MCNAPI_C void registerInputModechangedEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::InputModeChangeScreenEventData&) const> callback
    );

    MCNAPI_C void registerPointerHeldEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::PointerHeldScreenEventData&) const> callback
    );

    MCNAPI_C void registerSliderChangedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCNAPI_C void registerSliderFinishedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCNAPI_C void registerSliderNotFinishedEventHandler(
        uint                                                             buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(int, float) const> callback
    );

    MCNAPI_C void registerTextEditChangedEventHandler(
        uint                                                                                  buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCNAPI_C void registerTextEditFinishedEventHandler(
        uint                                                                                  buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCNAPI_C void registerTextEditSelectedStateChangeEventHandler(
        uint                                                                                          buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditSelectedStateChangeEventData&) const> callback
    );

    MCNAPI_C void registerTextEventHandler(
        ::brstd::move_only_function<::ui::ViewRequest(::TextEditScreenEventData&, int) const> callback
    );

    MCNAPI_C void registerToggleChangeEventHandler(
        uint                                                                           buttonId,
        ::brstd::move_only_function<::ui::ViewRequest(::ToggleChangeEventData&) const> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(bool useTaskGroup);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
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
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
