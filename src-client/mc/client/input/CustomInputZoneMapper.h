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
class InputRenderContext;
class TouchControlSet;
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class CustomInputZoneMapper : public ::InputDeviceMapper {
public:
    // CustomInputZoneMapper inner types define
    using HandlePointerReturn = ::std::tuple<bool, bool>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TouchControlSet>>  mTouchControlSet;
    ::ll::TypedStorage<4, 4, int>                                   mYAxisInversionFactor;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<int, int>>> mTouchIdsWithFlags;
    ::ll::TypedStorage<4, 4, int>                                   mPrimaryGameControllerId;
    ::ll::TypedStorage<4, 4, ::InputMode>                           mLastInputMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomInputZoneMapper() /*override*/ = default;

    virtual void setMapping(
        ::InputEventQueue&      eventQueue,
        ::BindingFactory const& bindingFactory,
        ::InputMapping const&   inputMapping,
        int                     controllerId
    ) /*override*/;

    virtual void clearMapping(int controllerId) /*override*/;

    virtual bool
    tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const&) /*override*/;

    virtual void clearInputDeviceQueue() /*override*/;

    virtual ::InputMode getInputMode() const /*override*/;

    virtual void render(::InputRenderContext& context) const /*override*/;

    virtual void setWindowSize(int width, int height) /*override*/;

    virtual void changeControllerId(int oldId, int newId) /*override*/;
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

    MCAPI bool $tick(::InputEventQueue& eventQueue, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const&);

    MCFOLD void $clearInputDeviceQueue();

    MCFOLD ::InputMode $getInputMode() const;

    MCFOLD void $render(::InputRenderContext& context) const;

    MCFOLD void $setWindowSize(int width, int height);

    MCAPI void $changeControllerId(int oldId, int newId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
