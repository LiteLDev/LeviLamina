#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct DeviceIdContext; }
namespace Core { class FileSystem; }
// clang-format on

namespace Bedrock {

class DeviceIdManager : public ::Bedrock::EnableNonOwnerReferences,
                        public ::Bedrock::ImplBase<::Bedrock::DeviceIdManager> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void initialize(::Bedrock::NonOwnerPointer<::Core::FileSystem>) = 0;

    // vIndex: 2
    virtual void updateDeviceId(bool const) = 0;

    // vIndex: 3
    virtual ::std::string const& getDeviceId() const = 0;

    // vIndex: 4
    virtual ::std::string const& getDeviceIdWarning() const = 0;

    // vIndex: 5
    virtual ::Bedrock::DeviceIdContext const& getDeviceIdContext() const = 0;

    // vIndex: 0
    virtual ~DeviceIdManager() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
