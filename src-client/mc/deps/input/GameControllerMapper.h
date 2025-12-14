#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/DirectionId.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class IGameController;
class InputEventQueue;
struct ControllerIDtoClientMap;
struct GameControllerButtonEvent;
struct GameControllerInputMapping;
struct GameControllerStickEvent;
struct GameControllerTriggerEvent;
struct InputMapping;
// clang-format on

class GameControllerMapper : public ::InputDeviceMapper {
public:
    // GameControllerMapper inner types declare
    // clang-format off
    struct TriggerState;
    struct DirectionAttributes;
    struct ButtonAttributes;
    struct GameControllerMappingData;
    struct GamepadStickTurnData;
    // clang-format on

    // GameControllerMapper inner types define
    struct TriggerState {};

    struct DirectionAttributes {};

    struct ButtonAttributes {};

    struct GameControllerMappingData {};

    struct GamepadStickTurnData {};

    using GameControllerButtonId = int;

    using GamePadTriggerId = int;

    using GamePadStickId = int;

    using GamePadButtonToButtonIdMap = ::std::unordered_multimap<int, ::GameControllerMapper::ButtonAttributes>;

    using GamePadTriggerToButtonIdMap = ::std::unordered_multimap<int, ::GameControllerMapper::TriggerState>;

    using GamePadStickToDirectionIdMap = ::std::unordered_multimap<int, ::GameControllerMapper::DirectionAttributes>;

    using GamePadStickToButtonIdMap = ::std::unordered_multimap<int, uint>;

    using GamePadStickDirectionToButtonIdMap = ::std::unordered_multimap<::DirectionId, uint>;

    using GamePadExclusiveButtonIdSet = ::std::set<uint>;

    using GamePadStickEvents = ::std::unordered_map<int, ::GameControllerStickEvent>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double>                                                       mLastTime;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, double>>                           mLastTurnButtonTimeSeconds;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameControllerMapper::GamepadStickTurnData>> mStickTurnData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::GameControllerMapper::GameControllerMappingData>>
        mPerIdMappings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setMapping(
        ::InputEventQueue&      eventQueue,
        ::BindingFactory const& bindingFactory,
        ::InputMapping const&   inputMapping,
        int                     controllerId
    ) /*override*/;

    virtual void clearMapping(int controllerId) /*override*/;

    virtual bool tick(
        ::InputEventQueue&                                              eventQueue,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& map
    ) /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual void changeControllerId(int oldId, int newId) /*override*/;

    virtual ::std::vector<::std::weak_ptr<::IGameController>> _getGameControllers() = 0;

    virtual ::GameControllerInputMapping const& getGameControllerMapping(::InputMapping const&) = 0;

    virtual ~GameControllerMapper() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameControllerMapper();

    MCAPI void _enqueueButtonDownUpEvents(
        ::InputEventQueue&                            eventQueue,
        ::GameControllerMapper::GamepadStickTurnData& turnData,
        ::DirectionId                                 direction
    );

    MCAPI void _handleButtonEvent(
        ::InputEventQueue&                 eventQueue,
        ::GameControllerButtonEvent const& buttonEvent,
        int                                controllerId,
        int                                alternateControllerId
    );

    MCAPI void
    _handleConnectionStateChangedEvent(::InputEventQueue& eventQueue, bool controllerConnected, int controllerId);

    MCAPI void
    _handleStickEvent(::InputEventQueue& eventQueue, ::GameControllerStickEvent const& stickEvent, int controllerId);

    MCAPI void _handleTriggerEvent(
        ::InputEventQueue&                  eventQueue,
        ::GameControllerTriggerEvent const& triggerEvent,
        int                                 controllerId
    );

    MCAPI void _reprocessPreviousStickEvents(
        ::InputEventQueue&        eventQueue,
        int                       controllerId,
        ::std::vector<int> const& handledEventStickIds
    );

    MCAPI void _tickTurn(::InputEventQueue& eventQueue);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setMapping(
        ::InputEventQueue&      eventQueue,
        ::BindingFactory const& bindingFactory,
        ::InputMapping const&   inputMapping,
        int                     controllerId
    );

    MCAPI void $clearMapping(int controllerId);

    MCAPI bool
    $tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& map);

    MCFOLD ::InputMode $getInputMode() const;

    MCAPI void $changeControllerId(int oldId, int newId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
