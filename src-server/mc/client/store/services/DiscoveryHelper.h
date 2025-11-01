#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
namespace Bedrock::Services { class IDiscoveryService; }
namespace Bedrock::Services { struct DiscoveryConfig; }
// clang-format on

namespace Bedrock::Services {

class DiscoveryHelper : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnk37dac7;
    ::ll::UntypedStorage<8, 16> mUnk2c1ded;
    ::ll::UntypedStorage<4, 8> mUnk6bcbe3;
    ::ll::UntypedStorage<8, 64> mUnk85ea61;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryHelper& operator=(DiscoveryHelper const&);
    DiscoveryHelper(DiscoveryHelper const&);
    DiscoveryHelper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DiscoveryHelper() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DiscoveryHelper(::Bedrock::Services::DiscoveryConfig const& discoveryConfig, ::std::shared_ptr<::Bedrock::Services::IDiscoveryService> discoveryService, ::std::unordered_map<::std::string, ::std::string> serviceOverrides);

    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Url> getURL(::std::string const& serviceName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Services::DiscoveryConfig const& discoveryConfig, ::std::shared_ptr<::Bedrock::Services::IDiscoveryService> discoveryService, ::std::unordered_map<::std::string, ::std::string> serviceOverrides);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
