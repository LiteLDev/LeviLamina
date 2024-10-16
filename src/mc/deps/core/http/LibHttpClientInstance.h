#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

namespace Bedrock::Http {

class LibHttpClientInstance {
public:
    // prevent constructor by default
    LibHttpClientInstance& operator=(LibHttpClientInstance const&);
    LibHttpClientInstance(LibHttpClientInstance const&);
    LibHttpClientInstance();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LibHttpClientInstance();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::shared_ptr<class Bedrock::Http::LibHttpClientInstance> _getSharedInstance();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI static class Bedrock::Threading::Mutex& sMutex();

    MCAPI static std::weak_ptr<class Bedrock::Http::LibHttpClientInstance>& sWeakInstance();

    // NOLINTEND
};

}; // namespace Bedrock::Http
