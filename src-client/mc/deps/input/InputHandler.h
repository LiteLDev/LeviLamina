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
struct ButtonEventData;
struct ClearPointerLocationWithIdEventData;
struct ControlOptionEventData;
struct ControllerIDtoClientMap;
struct InputMapping;
struct NumberOfEnabledControlOptionsEventData;
struct OverlappingControlsEventData;
struct PointerLocationEventData;
struct PointerLocationWithIdEventData;
struct TouchPadTouchEventData;
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
        ::ll::TypedStorage<1, 1, bool>                          mSuspendInput;
        ::ll::TypedStorage<1, 1, bool>                          mSuspendDirectionalInput;
        ::ll::TypedStorage<1, 1, bool>                          mDisableInput;
        // NOLINTEND

    public:
        // prevent constructor by default
        InputHandlerState& operator=(InputHandlerState const&);
        InputHandlerState(InputHandlerState const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI InputHandlerState();

        MCAPI ::InputHandler::InputHandlerState& operator=(::InputHandler::InputHandlerState&&);

        MCAPI ~InputHandlerState();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    using InputModeHandler = ::std::function<void(::InputMode, ::IClientInstance&)>;

    using ButtonPressHandler = ::std::function<void(::FocusImpact, ::IClientInstance&)>;

    using TextCharHandler = ::std::function<void(::std::string const&, ::FocusImpact, ::IClientInstance&)>;

    using CaretLocationHandler = ::std::function<void(int, ::FocusImpact, ::IClientInstance&)>;

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

    using CaretLocationHandlers = ::std::vector<::std::function<void(int, ::FocusImpact, ::IClientInstance&)>>;

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
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void(int, ::FocusImpact, ::IClientInstance&)>>>
        mCaretLocationHandlers;
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
    MCAPI InputHandler(
        ::BindingFactoryMap&      bindingFactoryMap,
        ::InputMappingFactoryMap& mappingFactoryMap,
        ::InputMode               startingInputMode
    );

    MCAPI void _handleButtonEvent(
        ::ButtonEventData const& button,
        ::FocusImpact            focusImpact,
        ::IClientInstance&       client,
        int                      controllerId
    );

    MCAPI void
    _handleMappingChange(::InputMapping const* newMapping, ::InputMapping const* oldMapping, int controllerId);

    MCAPI void changeControllerId(int oldId, int newId);

    MCAPI void clearInputMapping(int controllerId);

    MCAPI ::std::string const& getCurrentInputMapping(int controllerId) const;

    MCAPI ::InputMode getCurrentInputMode(int controllerId) const;

    MCAPI void popInputMapping(int controllerId);

    MCAPI void pushInputMapping(::std::string const& mappingName, int controllerId);

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

    MCAPI void registerClearPointerLocationsHandler(::std::function<void(::IClientInstance&)> handler);

    MCAPI void registerDirectionHandler(
        ::DirectionId                                                          directionId,
        ::std::function<void(float, float, ::FocusImpact, ::IClientInstance&)> handler
    );

    MCAPI void registerInputModeHandler(::std::function<void(::InputMode, ::IClientInstance&)> handler);

    MCAPI void registerOverlappingControlsHandler(
        ::std::function<void(::OverlappingControlsEventData const&, ::IClientInstance&)> handler
    );

    MCAPI void registerPotentialOverlappingControlsHandler(::std::function<void(::IClientInstance&)> handler);

    MCAPI void registerTouchPadTouchHandler(
        ::std::function<void(::TouchPadTouchEventData const&, ::FocusImpact, ::IClientInstance&)> handler
    );

    MCAPI void releaseButtonsAndSticks(::std::string const& currentMappingName, int controllerId);

    MCAPI void tick(
        ::IMinecraftGame*                                               mcGame,
        ::IClientInstance&                                              primaryClientInstance,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& controllerClientMap,
        bool                                                            allowMultipleClients
    );

    MCAPI void updateInputMapping(::std::string const& mappingName, int controllerId);

    MCAPI ~InputHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BindingFactoryMap&      bindingFactoryMap,
        ::InputMappingFactoryMap& mappingFactoryMap,
        ::InputMode               startingInputMode
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
