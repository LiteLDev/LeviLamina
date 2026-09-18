#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/services/IServiceUrlProvider.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
// clang-format on

namespace Bedrock::Services {

class StaticUrlProvider : public ::Bedrock::Services::IServiceUrlProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc753e8;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticUrlProvider& operator=(StaticUrlProvider const&);
    StaticUrlProvider(StaticUrlProvider const&);
    StaticUrlProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticUrlProvider() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getServiceUrl(::std::string const& serviceName) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Url> $getServiceUrl(::std::string const& serviceName) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Services
