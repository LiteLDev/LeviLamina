#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMappingFactory.h"

// auto generated forward declare list
// clang-format off
class IOptions;
struct Config;
struct DeviceButtonMapping;
struct InputMapping;
struct KeyboardRemappingLayout;
struct TouchInputMapping;
// clang-format on

class ClientInputMappingFactory : public ::InputMappingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke57b9e;
    ::ll::UntypedStorage<8, 64> mUnk6b1603;
    ::ll::UntypedStorage<1, 1>  mUnk56d329;
    ::ll::UntypedStorage<1, 1>  mUnkb071a6;
    ::ll::UntypedStorage<1, 1>  mUnk3af224;
    ::ll::UntypedStorage<4, 4>  mUnkcdef43;
    ::ll::UntypedStorage<8, 80> mUnkcc87c2;
    ::ll::UntypedStorage<8, 16> mUnkb3ceb1;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInputMappingFactory& operator=(ClientInputMappingFactory const&);
    ClientInputMappingFactory(ClientInputMappingFactory const&);
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
    MCNAPI explicit ClientInputMappingFactory(::std::weak_ptr<::KeyboardRemappingLayout> currentKeyboardLayout);

    MCNAPI void _activateMapping(::std::string const& mappingName);

    MCNAPI ::InputMapping* _getMappingInternal(::std::string const& mappingName);

    MCNAPI void onConfigChanged(::Config const& config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::weak_ptr<::KeyboardRemappingLayout> currentKeyboardLayout);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::InputMapping const* $getMapping(::std::string const& mappingName);

    MCNAPI ::TouchInputMapping $_createScreenTouchMapping() const;

    MCNAPI ::std::vector<::DeviceButtonMapping> $_createScreenDeviceButtonMapping() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
