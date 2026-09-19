#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/UniqueLock.h"

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
    LibHttpClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibHttpClientInstance() = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::mutex& sMutex();
    // NOLINTEND
};

} // namespace Bedrock::Http
