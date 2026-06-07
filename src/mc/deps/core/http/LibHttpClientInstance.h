#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/lib_http_client/HCTraceLevel.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

namespace Bedrock::Http {

class LibHttpClientInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaefb5e;
    ::ll::UntypedStorage<8, 8> mUnk42bd1b;
    ::ll::UntypedStorage<8, 8> mUnkf15df7;
    // NOLINTEND

public:
    // prevent constructor by default
    LibHttpClientInstance& operator=(LibHttpClientInstance const&);
    LibHttpClientInstance(LibHttpClientInstance const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibHttpClientInstance() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibHttpClientInstance();

#ifdef LL_PLAT_S
    MCNAPI void setLogLevel(::HCTraceLevel level);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::Mutex& sMutex();

    MCNAPI static ::std::weak_ptr<::Bedrock::Http::LibHttpClientInstance>& sWeakInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
