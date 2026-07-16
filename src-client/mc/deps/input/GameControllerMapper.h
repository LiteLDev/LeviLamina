#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/ButtonState.h"
#include "mc/deps/input/enums/DirectionId.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class IGameController;
class InputEventQueue;
struct ControllerIDtoClientMap;
struct GameControllerInputMapping;
struct GameControllerStickEvent;
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
    struct TriggerState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>          id;
        ::ll::TypedStorage<1, 1, ::ButtonState> currentState;
        ::ll::TypedStorage<4, 4, float>         triggerThreshold;
        // NOLINTEND
    };

    struct DirectionAttributes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::DirectionId> id;
        ::ll::TypedStorage<4, 4, int>           xAxis;
        ::ll::TypedStorage<4, 4, int>           yAxis;
        ::ll::TypedStorage<1, 1, bool>          raiseTurnEvents;
        // NOLINTEND
    };

    struct ButtonAttributes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>  nameId;
        ::ll::TypedStorage<4, 4, float> repeatInterval;
        // NOLINTEND
    };

    struct GameControllerMappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, ::GameControllerMapper::ButtonAttributes>>
            mGamePadButtonToButtonIdMap;
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, ::GameControllerMapper::TriggerState>>
            mTriggerToButtonIdMap;
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, ::GameControllerMapper::DirectionAttributes>>
                                                                                         mStickToDirectionIdMap;
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, uint>>                  mStickToButtonIdMap;
        ::ll::TypedStorage<8, 64, ::std::unordered_multimap<::DirectionId, uint>>        mStickDirectionToButtonIdMap;
        ::ll::TypedStorage<8, 16, ::std::set<uint>>                                      mExclusiveButtonIdSet;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::GameControllerStickEvent>> mPreviousStickEvents;
        ::ll::TypedStorage<1, 1, bool>                                                   mMappingChanged;
        // NOLINTEND
    };

    struct GamepadStickTurnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>        turnStickActive;
        ::ll::TypedStorage<4, 8, ::glm::vec2> lastTurnStickPos;
        ::ll::TypedStorage<4, 4, int>         controllerId;
        // NOLINTEND
    };

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

    virtual ::GameControllerInputMapping const& getGameControllerMapping(::InputMapping const& inputMapping) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameControllerMapper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
