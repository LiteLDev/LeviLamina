#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputDeviceMapper.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class InputEventQueue;
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class BehaviorActionMapper : public ::InputDeviceMapper {
public:
    // BehaviorActionMapper inner types define
    using TestAutoActionId = int;

    using ActionToButtonMap = ::std::unordered_multimap<int, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::unordered_multimap<int, uint>>>
        mTestAutoActionToButtonIdMappings;
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

    virtual void clearInputDeviceQueue() /*override*/;

    virtual void clearInputDeviceQueueForFrame() /*override*/;

    virtual bool tick(
        ::InputEventQueue&                                              eventQueue,
        ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const& map
    ) /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual void changeControllerId(int oldId, int newId) /*override*/;

    virtual ~BehaviorActionMapper() /*override*/ = default;
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

    MCFOLD void $clearInputDeviceQueue();

    MCFOLD void $clearInputDeviceQueueForFrame();

    MCFOLD bool
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
