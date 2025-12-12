#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 8> mUnk44b57d;
    ::ll::UntypedStorage<8, 8> mUnkc11edd;
    ::ll::UntypedStorage<8, 8> mUnk917c90;
    // NOLINTEND

public:
    // prevent constructor by default
    LibHttpClientInstance& operator=(LibHttpClientInstance const&);
    LibHttpClientInstance(LibHttpClientInstance const&);
    LibHttpClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibHttpClientInstance() = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::Mutex& sMutex();

    MCNAPI static ::std::weak_ptr<::Bedrock::Http::LibHttpClientInstance>& sWeakInstance();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
