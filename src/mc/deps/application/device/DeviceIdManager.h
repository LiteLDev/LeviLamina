#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIdContext; }
namespace Bedrock { struct DeviceIdEnvironment; }
namespace Bedrock { struct ImplCtor; }
// clang-format on

namespace Bedrock {

class DeviceIdManager
: public ::Bedrock::EnableNonOwnerReferences,
  public ::Bedrock::ImplBase<::Bedrock::DeviceIdManager, ::Bedrock::ImplCtor(::Bedrock::DeviceIdEnvironment&&)> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize() = 0;

    virtual void updateDeviceId(bool const isAnonymous) = 0;

    virtual ::std::string const& getDeviceId() const = 0;

    virtual ::std::string const& getDeviceIdWarning() const = 0;

    virtual ::Bedrock::DeviceIdContext const& getDeviceIdContext() const = 0;

    virtual bool isDeviceIdValid() const = 0;

    virtual ~DeviceIdManager() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
