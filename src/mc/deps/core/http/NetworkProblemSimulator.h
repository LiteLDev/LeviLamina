#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/DispatcherProcess.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace Bedrock::Http {

class NetworkProblemSimulator : public ::Bedrock::Http::DispatcherProcess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnk939894;
    ::ll::UntypedStorage<8, 8>   mUnk67c27a;
    ::ll::UntypedStorage<8, 64>  mUnkfb80a5;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkProblemSimulator& operator=(NetworkProblemSimulator const&);
    NetworkProblemSimulator(NetworkProblemSimulator const&);
    NetworkProblemSimulator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkProblemSimulator() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Response> send(::Bedrock::Http::Request&&) /*override*/;

    virtual void initialize() /*override*/;

    virtual void shutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
