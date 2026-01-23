#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/GamePadRemappingLayout.h"
#include "mc/deps/input/InputMappingFactory.h"

// auto generated forward declare list
// clang-format off
class KeyboardRemappingLayout;
struct Config;
struct DeviceButtonMapping;
struct IOptions;
struct InputMapping;
struct TouchInputMapping;
// clang-format on

class ClientInputMappingFactory : public ::InputMappingFactory {
public:
    // ClientInputMappingFactory inner types define
    using InputMappingMap = ::std::unordered_map<::std::string, ::InputMapping>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::InputMapping>> mActiveInputMappings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::InputMapping>> mInputMappingTemplates;
    ::ll::TypedStorage<1, 1, bool>                                                 mInvertYAxis;
    ::ll::TypedStorage<1, 1, bool>                                                 mSwapGamepadButtonsXY;
    ::ll::TypedStorage<1, 1, bool>                                                 mSwapGamepadButtonsAB;
    ::ll::TypedStorage<4, 4, float>                                                mSensitivity;
    ::ll::TypedStorage<8, 96, ::GamePadRemappingLayout>                            mGameControllerRemappingLayout;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::KeyboardRemappingLayout>>          mKeyboardRemappingLayout;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputMappingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InputMapping const* getMapping(::std::string const& mappingName) /*override*/;

    virtual void createInputMappingTemplates(::IOptions&) = 0;

    virtual ::TouchInputMapping _createScreenTouchMapping() const;

    virtual ::std::vector<::DeviceButtonMapping> _createScreenDeviceButtonMapping() const;

    virtual void _updateKeyboardAndMouseControls(::IOptions&) = 0;

    virtual void _updateGameControllerControls() = 0;

    virtual void _updateTouchMappingControls() = 0;

    virtual ~ClientInputMappingFactory() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientInputMappingFactory(::std::weak_ptr<::KeyboardRemappingLayout> currentKeyboardLayout);

    MCAPI void _activateMapping(::std::string const& mappingName);

    MCAPI ::InputMapping* _getMappingInternal(::std::string const& mappingName);

    MCAPI void onConfigChanged(::Config const& config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::KeyboardRemappingLayout> currentKeyboardLayout);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::InputMapping const* $getMapping(::std::string const& mappingName);

    MCAPI ::TouchInputMapping $_createScreenTouchMapping() const;

    MCAPI ::std::vector<::DeviceButtonMapping> $_createScreenDeviceButtonMapping() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
