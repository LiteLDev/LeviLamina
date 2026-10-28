#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncResultBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TransportEndpointCache;
class WorkerPool;
namespace Bedrock::Http { class DispatcherInterface; }
// clang-format on

class TransportProber : public ::Bedrock::Threading::AsyncResultBase<::Bedrock::Result<::std::string>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk29e78d;
    ::ll::UntypedStorage<8, 24>  mUnk5c25fd;
    ::ll::UntypedStorage<8, 336> mUnk515969;
    ::ll::UntypedStorage<8, 16>  mUnk53b114;
    ::ll::UntypedStorage<8, 32>  mUnk63fb9c;
    ::ll::UntypedStorage<4, 4>   mUnk5c56fe;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportProber& operator=(TransportProber const&);
    TransportProber(TransportProber const&);
    TransportProber();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TransportProber() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI TransportProber(
        ::std::vector<::std::string>                                        urls,
        ::WorkerPool&                                                       workerPool,
        ::Scheduler&                                                        scheduler,
        ::Bedrock::NotNullNonOwnerPtr<::Bedrock::Http::DispatcherInterface> dispatcher,
        ::std::shared_ptr<::TransportEndpointCache>                         endpointCache,
        ::std::string                                                       cacheHost,
        int                                                                 cachePort
    );

    MCNAPI void _tryUrlBatch(::std::vector<::std::string> urls, ::std::vector<::std::string> fallbackUrls);

    MCNAPI void start();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::vector<::std::string>                                        urls,
        ::WorkerPool&                                                       workerPool,
        ::Scheduler&                                                        scheduler,
        ::Bedrock::NotNullNonOwnerPtr<::Bedrock::Http::DispatcherInterface> dispatcher,
        ::std::shared_ptr<::TransportEndpointCache>                         endpointCache,
        ::std::string                                                       cacheHost,
        int                                                                 cachePort
    );
#endif
    // NOLINTEND
};
