#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/ServiceClient.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
class IMinecraftEventing;
namespace Social { class IUserManager; }
// clang-format on

namespace Realms {

class GenericRequestServiceHandler : public ::ServiceClient {
public:
    // prevent constructor by default
    GenericRequestServiceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GenericRequestServiceHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GenericRequestServiceHandler(
        ::Bedrock::NonOwnerPointer<::Social::IUserManager> userManager,
        ::IMinecraftEventing*                              eventing
    );

    MCNAPI void submitRequest(::std::shared_ptr<::HttpRequestHandler> request);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::Social::IUserManager> userManager, ::IMinecraftEventing* eventing);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Realms
