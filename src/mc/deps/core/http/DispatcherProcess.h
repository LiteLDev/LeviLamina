#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class DispatcherProcess {
public:
    // prevent constructor by default
    DispatcherProcess& operator=(DispatcherProcess const&);
    DispatcherProcess(DispatcherProcess const&);
    DispatcherProcess();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DispatcherProcess();

    // vIndex: 1
    virtual std::shared_ptr<class Bedrock::Threading::IAsyncResult<class Bedrock::Http::Response>>
    send(class Bedrock::Http::Request&& request) = 0;

    // vIndex: 2
    virtual void initialize();

    // vIndex: 3
    virtual void shutdown();

    // vIndex: 4
    virtual void suspend();

    // vIndex: 5
    virtual void resume();

    MCAPI explicit DispatcherProcess(std::shared_ptr<class Bedrock::Http::DispatcherProcess> childProcess);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::shared_ptr<class Bedrock::Http::DispatcherProcess> childProcess);

    MCAPI void dtor$();

    MCAPI void initialize$();

    MCAPI void resume$();

    MCAPI void shutdown$();

    MCAPI void suspend$();

    // NOLINTEND
};

}; // namespace Bedrock::Http
