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

class MouseMapper : public ::InputDeviceMapper {
public:
    // MouseMapper inner types define
    using MouseButtonId = int;

    using MouseButtonToButtonMap = ::std::unordered_multimap<int, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   mYAxisInversionFactor;
    ::ll::TypedStorage<8, 64, ::std::unordered_multimap<int, uint>> mMouseButtonToButtonIdMap;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                  mMouseWheelUpButtonIds;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                  mMouseWheelDownButtonIds;
    ::ll::TypedStorage<4, 4, int>                                   mPrimaryGameControllerId;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>              mIsClientUsingMouseInputMode;
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

    virtual void clearInputDeviceQueue() /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual void getCursorPos(float& xCursor, float& yCursor) const /*override*/;

    virtual void changeControllerId(int oldId, int newId) /*override*/;

    virtual ~MouseMapper() /*override*/;
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

    MCAPI void $clearInputDeviceQueue();

    MCFOLD ::InputMode $getInputMode() const;

    MCAPI void $getCursorPos(float& xCursor, float& yCursor) const;

    MCAPI void $changeControllerId(int oldId, int newId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
