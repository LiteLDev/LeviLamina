#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueService.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DeviceIdManager; }
// clang-format on

namespace Bedrock {

class ApplicationInit {
public:
    // ApplicationInit inner types declare
    // clang-format off
    struct Objects;
    // clang-format on

    // ApplicationInit inner types define
    struct Objects {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk82e612;
        ::ll::UntypedStorage<8, 16> mUnkffe70a;
        ::ll::UntypedStorage<8, 16> mUnk18199e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Objects& operator=(Objects const&);
        Objects(Objects const&);
        Objects();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~Objects();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd026dd;
    ::ll::UntypedStorage<8, 8> mUnk9ce3e0;
    ::ll::UntypedStorage<1, 1> mUnkc6a30f;
    // NOLINTEND

public:
    // prevent constructor by default
    ApplicationInit& operator=(ApplicationInit const&);
    ApplicationInit(ApplicationInit const&);
    ApplicationInit();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void run();

    MCNAPI ~ApplicationInit();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::UniqueService<::Bedrock::DeviceIdManager>
    createAndInitDeviceIdManager(::std::unique_ptr<::Bedrock::DeviceIdManager> manager);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock
