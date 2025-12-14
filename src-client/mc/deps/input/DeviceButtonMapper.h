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
struct DeviceButtonEvent;
struct InputMapping;
// clang-format on

class DeviceButtonMapper : public ::InputDeviceMapper {
public:
    // DeviceButtonMapper inner types define
    using DeviceButtonId = int;

    using DeviceButtonToButtonIdMap = ::std::unordered_multimap<int, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, uint>> mDeviceButtonToButtonIdMap;
    ::ll::TypedStorage<4, 4, int>                                   mPrimaryGameControllerId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setMapping(
        ::InputEventQueue&,
        ::BindingFactory const&,
        ::InputMapping const& inputMapping,
        int                   controllerId
    ) /*override*/;

    virtual void clearMapping(int controllerId) /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual bool
    tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const&) /*override*/;

    virtual void changeControllerId(int oldId, int newId) /*override*/;

    virtual void clearInputDeviceQueue() /*override*/;

    virtual ~DeviceButtonMapper() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void handleButtonEvent(::InputEventQueue& eventQueue, ::DeviceButtonEvent const& buttonEvent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const& inputMapping, int controllerId);

    MCAPI void $clearMapping(int controllerId);

    MCFOLD ::InputMode $getInputMode() const;

    MCAPI bool $tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const&);

    MCAPI void $changeControllerId(int oldId, int newId);

    MCAPI void $clearInputDeviceQueue();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
