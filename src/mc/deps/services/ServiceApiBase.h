#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services { class IServiceUrlProvider; }
// clang-format on

namespace Bedrock::Services {

class ServiceApiBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke7518d;
    ::ll::UntypedStorage<8, 32> mUnk9d8098;
    ::ll::UntypedStorage<8, 16> mUnk1ba2c7;
    ::ll::UntypedStorage<4, 8>  mUnk23a490;
    ::ll::UntypedStorage<8, 32> mUnk1e5b43;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceApiBase& operator=(ServiceApiBase const&);
    ServiceApiBase(ServiceApiBase const&);
    ServiceApiBase();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ServiceApiBase() = default;
#else // LL_PLAT_C
    virtual ~ServiceApiBase();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ServiceApiBase(
        ::std::string                                                                serviceName,
        ::gsl::not_null<::std::shared_ptr<::Bedrock::Services::IServiceUrlProvider>> urlProvider,
        ::std::string                                                                name
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::string                                                                serviceName,
        ::gsl::not_null<::std::shared_ptr<::Bedrock::Services::IServiceUrlProvider>> urlProvider,
        ::std::string                                                                name
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Services
