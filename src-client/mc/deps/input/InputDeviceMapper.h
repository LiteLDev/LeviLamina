#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputBindingMode.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class BindingFactory;
class InputEventQueue;
class InputRenderContext;
struct ControllerIDtoClientMap;
struct InputMapping;
// clang-format on

class InputDeviceMapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                            mScreenWidth;
    ::ll::TypedStorage<4, 4, int>                                            mScreenHeight;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::InputBindingMode>> mBindingMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputDeviceMapper() = 0;

    virtual void setMapping(::InputEventQueue&, ::BindingFactory const&, ::InputMapping const&, int) = 0;

    virtual void clearMapping(int) = 0;

    virtual void clearInputDeviceQueue();

    virtual void clearInputDeviceQueueForFrame();

    virtual bool tick(::InputEventQueue&, ::Bedrock::NotNullNonOwnerPtr<::ControllerIDtoClientMap> const&) = 0;

    virtual ::InputMode getInputMode() const = 0;

    virtual void getCursorPos(float& xCursor, float& yCursor) const;

    virtual void render(::InputRenderContext& context) const;

    virtual void setWindowSize(int width, int height);

    virtual void setBindingMode(::InputBindingMode mode, int controllerId);

    virtual ::InputBindingMode getBindingMode(int controllerId);

    virtual void changeControllerId(int oldId, int newId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $clearInputDeviceQueue();

    MCFOLD void $clearInputDeviceQueueForFrame();

    MCAPI void $getCursorPos(float& xCursor, float& yCursor) const;

    MCFOLD void $render(::InputRenderContext& context) const;

    MCAPI void $setWindowSize(int width, int height);

    MCAPI void $setBindingMode(::InputBindingMode mode, int controllerId);

    MCAPI ::InputBindingMode $getBindingMode(int controllerId);

    MCFOLD void $changeControllerId(int oldId, int newId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
