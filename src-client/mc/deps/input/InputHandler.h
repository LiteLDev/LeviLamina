#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"
#include "mc/deps/input/enums/RawInputType.h"

// auto generated forward declare list
// clang-format off
class BindingFactoryMap;
class ButtonChordTracker;
class ButtonRepeater;
class IClientInstance;
class IMinecraftGame;
class InputDeviceMapper;
class InputEventQueue;
class InputMappingFactoryMap;
class InputRenderContext;
struct ClearPointerLocationWithIdEventData;
struct ControlOptionEventData;
struct ControllerIDtoClientMap;
struct InputMapping;
struct NumberOfEnabledControlOptionsEventData;
struct OverlappingControlsEventData;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
struct TouchPadTouchEventData;
namespace Input::Debug { class ISplitscreenRedirect; }
// clang-format on

class InputHandler {
public:
    // InputHandler inner types declare
    // clang-format off
    struct InputHandlerState;
    // clang-format on

    // InputHandler inner types define
    struct InputHandlerState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::InputMode>                   mCurrentInputMode;
        ::ll::TypedStorage<4, 4, ::InputBindingMode>            mCurrentBindingMode;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mInputMappingStack;
        ::ll::TypedStorage<8, 64, ::std::unordered_set<uint>>   mButtonsDown;
        ::ll::TypedStorage<8, 64, ::std::unordered_set<int>>    mTriggeredChordsSources;
        ::ll::TypedStorage<4, 4, int>                           mCurrentChordSource;
        ::ll::TypedStorage<1, 1, bool>                          mSuspendInput;
        ::ll::TypedStorage<1, 1, bool>                          mSuspendDirectionalInput;
        ::ll::TypedStorage<1, 1, bool>                          mDisableInput;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~InputHandlerState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using InputModeHandler = ::std::function<void(::InputMode, ::IClientInstance&)>;

    using ButtonPressHandler = ::std::function<void(::FocusImpact, ::IClientInstance&)>;

    using TextCharHandler = ::std::function<void(::std::string const&, ::FocusImpact, ::IClientInstance&)>;

    using PointerLocationHandler =
        ::std::function<void(::PointerLocationEventData const&, ::FocusImpact, ::IClientInstance&)>;

    using PointerLocationWithIdHandler =
        ::std::function<void(::PointerLocationWithIdEventData const&, ::IClientInstance&)>;

    using ClearPointerLocationWithIdHandler =
        ::std::function<void(::ClearPointerLocationWithIdEventData const&, ::IClientInstance&)>;

    using ClearPointerLocationsHandler = ::std::function<void(::IClientInstance&)>;

    using DirectionHandler = ::std::function<void(float, float, ::FocusImpact, ::IClientInstance&)>;

    using TurnHandler = ::std::function<void(float, float, ::FocusImpact, ::IClientInstance&)>;

    using VectorHandler = ::std::function<void(short, float, float, float, ::FocusImpact, ::IClientInstance&)>;

    using AnyInputHandler = ::std::function<void(::IClientInstance&)>;

    using RawInputHandler = ::std::function<void(int, ::RawInputType, ::ButtonState, bool, ::IClientInstance&)>;

    using AddClientHandler = ::std::function<void(::IMinecraftGame*, int, bool)>;

    using ChangeUserHandler = ::std::function<void(::IMinecraftGame*, int, bool)>;

    using ControllerConnectionStateChangeHandler = ::std::function<void(::IClientInstance&, bool, int)>;

    using TouchPadTouchHandler =
        ::std::function<void(::TouchPadTouchEventData const&, ::FocusImpact, ::IClientInstance&)>;

    using ControlOptionHandler = ::std::function<void(::ControlOptionEventData const&, ::IClientInstance&)>;

    using NumberOfEnabledControlOptionsHandler =
        ::std::function<void(::NumberOfEnabledControlOptionsEventData const&, ::IClientInstance&)>;

    using OverlappingControlsHandler = ::std::function<void(::OverlappingControlsEventData const&, ::IClientInstance&)>;

    using PotentialOverlappingControlsHandler = ::std::function<void(::IClientInstance&)>;

    using InputModeHandlers = ::std::vector<::std::function<void(::InputMode, ::IClientInstance&)>>;

    using ButtonHandlerMap =
        ::std::multimap<uint, ::std::pair<bool, ::std::function<void(::FocusImpact, ::IClientInstance&)>>>;

    using TextCharHandlers =
        ::std::vector<::std::function<void(::std::string const&, ::FocusImpact, ::IClientInstance&)>>;

    using PointerLocationHandlers =
        ::std::vector<::std::function<void(::PointerLocationEventData const&, ::FocusImpact, ::IClientInstance&)>>;

    using PointerLocationWithIdHandlers =
        ::std::vector<::std::function<void(::PointerLocationWithIdEventData const&, ::IClientInstance&)>>;

    using ClearPointerLocationWithIdHandlers =
        ::std::vector<::std::function<void(::ClearPointerLocationWithIdEventData const&, ::IClientInstance&)>>;

    using ClearPointerLocationsHandlers = ::std::vector<::std::function<void(::IClientInstance&)>>;

    using DirectionHandlerMap =
        ::std::multimap<::DirectionId, ::std::function<void(float, float, ::FocusImpact, ::IClientInstance&)>>;

    using VectorHandlers =
        ::std::vector<::std::function<void(short, float, float, float, ::FocusImpact, ::IClientInstance&)>>;

    using TouchPadHandlers =
        ::std::vector<::std::function<void(::TouchPadTouchEventData const&, ::FocusImpact, ::IClientInstance&)>>;

    using PointerLocationWithIdHandlersMap =
        ::std::map<uint, ::std::function<void(::PointerLocationWithIdEventData const&, ::IClientInstance&)>>;

    using ControlOptionHandlers =
        ::std::vector<::std::function<void(::ControlOptionEventData const&, ::IClientInstance&)>>;

    using NumberOfEnabledControlOptionsHandlers =
        ::std::vector<::std::function<void(::NumberOfEnabledControlOptionsEventData const&, ::IClientInstance&)>>;

    using OverlappingControlsHandlers =
        ::std::vector<::std::function<void(::OverlappingControlsEventData const&, ::IClientInstance&)>>;

    using PotentialOverlappingControlsHandlers = ::std::vector<::std::function<void(::IClientInstance&)>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::InputMode, ::IClientInstance&)>>> mInputModeHandlers;
    ::ll::TypedStorage<
        8,
        16,
        ::std::multimap<uint, ::std::pair<bool, ::std::function<void(::FocusImpact, ::IClientInstance&)>>>>
        mButtonDownHandlerMap;
    ::ll::TypedStorage<
        8,
        16,
        ::std::multimap<uint, ::std::pair<bool, ::std::function<void(::FocusImpact, ::IClientInstance&)>>>>
        mButtonUpHandlerMap;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(::std::string const&, ::FocusImpact, ::IClientInstance&)>>>
        mTextCharHandlers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(::PointerLocationEventData const&, ::FocusImpact, ::IClientInstance&)>>>
        mPointerLocationHandlers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(::PointerLocationWithIdEventData const&, ::IClientInstance&)>>>
        mPointerLocationWithIdHandlers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(::ClearPointerLocationWithIdEventData const&, ::IClientInstance&)>>>
        mClearPointerLocationWithIdHandlers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::IClientInstance&)>>> mClearPointerLocationsHandlers;
    ::ll::TypedStorage<
        8,
        16,
        ::std::multimap<::DirectionId, ::std::function<void(float, float, ::FocusImpact, ::IClientInstance&)>>>
                                                                         mDirectionHandlerMap;
    ::ll::TypedStorage<8, 64, ::std::function<void(::IClientInstance&)>> mAnyInputHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(int, ::RawInputType, ::ButtonState, bool, ::IClientInstance&)>>
                                                                                   mRawInputHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(::IMinecraftGame*, int, bool)>> mAddClientHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(::IMinecraftGame*, int, bool)>> mChangeUserHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(::IClientInstance&, bool, int)>>
        mControllerConnectionStateChangeHandler;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(::TouchPadTouchEventData const&, ::FocusImpact, ::IClientInstance&)>>>
        mTouchPadHandlers;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<uint, ::std::function<void(::PointerLocationWithIdEventData const&, ::IClientInstance&)>>>
        mCustomZoneHandlers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::ControlOptionEventData const&, ::IClientInstance&)>>>
        mControlOptionHandlers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(::NumberOfEnabledControlOptionsEventData const&, ::IClientInstance&)>>>
        mNumberOfEnabledControlOptionsHandlers;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::function<void(::OverlappingControlsEventData const&, ::IClientInstance&)>>>
        mOverlappingControlsHandlers;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(::IClientInstance&)>>>
                                                                      mPotentialOverlappingControlsHandlers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InputEventQueue>>    mInputEventQueue;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ButtonChordTracker>> mChordTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ButtonRepeater>>     mButtonRepeater;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::InputDeviceMapper>>>        mInputDeviceMappers;
    ::ll::TypedStorage<8, 8, ::BindingFactoryMap&>                                          mBindingFactoryMap;
    ::ll::TypedStorage<8, 8, ::InputMappingFactoryMap&>                                     mInputMappingFactoryMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::InputHandler::InputHandlerState>> mPerIdState;
    ::ll::TypedStorage<4, 4, int>                                                           mPrimaryGameControllerId;
    // NOLINTEND

public:
    // prevent constructor by default
    InputHandler& operator=(InputHandler const&);
    InputHandler(InputHandler const&);
    InputHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InputHandler(
        ::BindingFactoryMap&                                                       bindingFactoryMap,
        ::InputMappingFactoryMap&                                                  mappingFactoryMap,
        ::InputMode                                                                startingInputMode,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect
    );

    MCNAPI void
    _handleMappingChange(::InputMapping const* newMapping, ::InputMapping const* oldMapping, int controllerId);

    MCNAPI void changeControllerId(int oldId, int newId);

    MCNAPI void clearInvalidDownKeys(int controllerId);

    MCNAPI ::InputMode getCurrentInputMode(int controllerId) const;

    MCNAPI void initNewControllerIdOwner(int controllerId, ::InputMode initialInputMode);

    MCNAPI void popInputMapping(int controllerId);

    MCNAPI void pushInputMapping(::std::string const& mappingName, int controllerId);

    MCNAPI void refreshInputMapping(int controllerId);

    MCNAPI void registerAddClientHandler(::std::function<void(::IMinecraftGame*, int, bool)> handler);

    MCNAPI void registerAnyInputHandler(::std::function<void(::IClientInstance&)> handler);

    MCAPI void registerButtonDownHandler(
        ::std::string                                            buttonName,
        ::std::function<void(::FocusImpact, ::IClientInstance&)> handler,
        bool                                                     suspendable
    );

    MCAPI void registerButtonUpHandler(
        ::std::string                                            buttonName,
        ::std::function<void(::FocusImpact, ::IClientInstance&)> handler,
        bool                                                     suspendable
    );

    MCNAPI void registerChangeUserHandler(::std::function<void(::IMinecraftGame*, int, bool)> handler);

    MCNAPI void registerClearPointerLocationWithIdHandler(
        ::std::function<void(::ClearPointerLocationWithIdEventData const&, ::IClientInstance&)> handler
    );

    MCNAPI void registerClearPointerLocationsHandler(::std::function<void(::IClientInstance&)> handler);

    MCNAPI void
    registerControlOptionHandler(::std::function<void(::ControlOptionEventData const&, ::IClientInstance&)> handler);

    MCNAPI void
    registerControllerConnectionStateChangeHandler(::std::function<void(::IClientInstance&, bool, int)> handler);

    MCNAPI void registerInputModeHandler(::std::function<void(::InputMode, ::IClientInstance&)> handler);

    MCNAPI void registerNumberOfEnabledControlOptionsHandler(
        ::std::function<void(::NumberOfEnabledControlOptionsEventData const&, ::IClientInstance&)> handler
    );

    MCNAPI void registerOverlappingControlsHandler(
        ::std::function<void(::OverlappingControlsEventData const&, ::IClientInstance&)> handler
    );

    MCNAPI void registerPointerLocationHandler(
        ::std::function<void(::PointerLocationEventData const&, ::FocusImpact, ::IClientInstance&)> handler
    );

    MCNAPI void registerPointerLocationWithIdHandler(
        ::std::function<void(::PointerLocationWithIdEventData const&, ::IClientInstance&)> handler
    );

    MCNAPI void registerPotentialOverlappingControlsHandler(::std::function<void(::IClientInstance&)> handler);

    MCNAPI void registerRawInputHandler(
        ::std::function<void(int, ::RawInputType, ::ButtonState, bool, ::IClientInstance&)> handler
    );

    MCNAPI void
    registerTextCharHandler(::std::function<void(::std::string const&, ::FocusImpact, ::IClientInstance&)> handler);

    MCNAPI void registerTouchPadTouchHandler(
        ::std::function<void(::TouchPadTouchEventData const&, ::FocusImpact, ::IClientInstance&)> handler
    );

    MCNAPI void releaseButtonsAndSticks(::std::string const& currentMappingName, int controllerId);

    MCNAPI void render(::InputRenderContext& renderContext) const;

    MCAPI void tick(
        ::IMinecraftGame*                                               mcGame,
        ::IClientInstance&                                              primaryClientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& controllerClientMap,
        bool                                                            allowMultipleClients
    );

    MCNAPI void updateInputMapping(::std::string const& mappingName, int controllerId);

    MCNAPI ~InputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BindingFactoryMap&                                                       bindingFactoryMap,
        ::InputMappingFactoryMap&                                                  mappingFactoryMap,
        ::InputMode                                                                startingInputMode,
        ::Bedrock::NotNullNonOwnerPtr<::Input::Debug::ISplitscreenRedirect> const& debugSplitscreenInputRedirect
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
