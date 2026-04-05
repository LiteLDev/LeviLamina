#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIDPlatformEnvironment; }
namespace Bedrock { struct DeviceIdContext; }
// clang-format on

namespace Bedrock {

class DeviceIdManager_Common : public ::Bedrock::DeviceIdManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk64126c;
    ::ll::UntypedStorage<8, 32>  mUnkae3728;
    ::ll::UntypedStorage<8, 120> mUnkf13734;
    ::ll::UntypedStorage<8, 120> mUnk66feb1;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdManager_Common& operator=(DeviceIdManager_Common const&);
    DeviceIdManager_Common(DeviceIdManager_Common const&);
    DeviceIdManager_Common();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() /*override*/;

    virtual void updateDeviceId(bool const isAnonymous) /*override*/;

    virtual ::std::string const& getDeviceId() const /*override*/;

    virtual ::std::string const& getDeviceIdWarning() const /*override*/;

    virtual ::Bedrock::DeviceIdContext const& getDeviceIdContext() const /*override*/;

    virtual bool isDeviceIdValid() const /*override*/;

    virtual void _initializePlatform(::Bedrock::DeviceIDPlatformEnvironment const& environment) = 0;

    virtual ~DeviceIdManager_Common() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initialize();

    MCNAPI void $updateDeviceId(bool const isAnonymous);

    MCNAPI ::std::string const& $getDeviceId() const;

    MCNAPI ::std::string const& $getDeviceIdWarning() const;

    MCNAPI ::Bedrock::DeviceIdContext const& $getDeviceIdContext() const;

    MCNAPI bool $isDeviceIdValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForImplBase();
    // NOLINTEND
};

} // namespace Bedrock
