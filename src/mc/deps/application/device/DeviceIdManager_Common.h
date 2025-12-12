#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/device/DeviceIdManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIdContext; }
namespace Core { class FileSystem; }
// clang-format on

namespace Bedrock {

class DeviceIdManager_Common : public ::Bedrock::DeviceIdManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk3b65a6;
    ::ll::UntypedStorage<8, 32>  mUnk64cddd;
    ::ll::UntypedStorage<8, 32>  mUnka9a7fd;
    ::ll::UntypedStorage<8, 120> mUnkf13734;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceIdManager_Common& operator=(DeviceIdManager_Common const&);
    DeviceIdManager_Common(DeviceIdManager_Common const&);
    DeviceIdManager_Common();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initialize(::Bedrock::NonOwnerPointer<::Core::FileSystem> fileSystem) /*override*/;

    // vIndex: 2
    virtual void updateDeviceId(bool const isAnonymous) /*override*/;

    // vIndex: 3
    virtual ::std::string const& getDeviceId() const /*override*/;

    // vIndex: 4
    virtual ::std::string const& getDeviceIdWarning() const /*override*/;

    // vIndex: 5
    virtual ::Bedrock::DeviceIdContext const& getDeviceIdContext() const /*override*/;

    // vIndex: 6
    virtual bool isDeviceIdValid() const /*override*/;

    // vIndex: 7
    virtual void _initializePlatform(bool const) = 0;

    // vIndex: 0
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
    MCNAPI void $initialize(::Bedrock::NonOwnerPointer<::Core::FileSystem> fileSystem);

    MCNAPI void $updateDeviceId(bool const isAnonymous);

    MCNAPI ::std::string const& $getDeviceId() const;

    MCNAPI ::std::string const& $getDeviceIdWarning() const;

    MCNAPI ::Bedrock::DeviceIdContext const& $getDeviceIdContext() const;

    MCNAPI bool $isDeviceIdValid() const;
    // NOLINTEND
};

} // namespace Bedrock
