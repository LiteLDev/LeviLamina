#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/ServerIdentityAssertionVerifier.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TrustStore;
class WorkerPool;
// clang-format on

class TofuServerIdentityVerifier : public ::ServerIdentityAssertionVerifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4e87cc;
    ::ll::UntypedStorage<8, 64> mUnkf6c670;
    ::ll::UntypedStorage<8, 8>  mUnk5dc89c;
    // NOLINTEND

public:
    // prevent constructor by default
    TofuServerIdentityVerifier& operator=(TofuServerIdentityVerifier const&);
    TofuServerIdentityVerifier(TofuServerIdentityVerifier const&);
    TofuServerIdentityVerifier();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TofuServerIdentityVerifier() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<bool>
    verify(::std::string_view assertion, ::std::string_view fingerprintJson) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI TofuServerIdentityVerifier(
        ::gsl::not_null<::std::shared_ptr<::TrustStore>>                 trustStore,
        ::brstd::move_only_function<::Bedrock::Threading::Async<bool>()> prompt
    );

    MCNAPI TofuServerIdentityVerifier(
        ::gsl::not_null<::std::shared_ptr<::TrustStore>>                 trustStore,
        ::brstd::move_only_function<::Bedrock::Threading::Async<bool>()> prompt,
        ::WorkerPool&                                                    workerPool,
        ::Scheduler&                                                     scheduler
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::TrustStore>>                 trustStore,
        ::brstd::move_only_function<::Bedrock::Threading::Async<bool>()> prompt
    );

    MCNAPI void* $ctor(
        ::gsl::not_null<::std::shared_ptr<::TrustStore>>                 trustStore,
        ::brstd::move_only_function<::Bedrock::Threading::Async<bool>()> prompt,
        ::WorkerPool&                                                    workerPool,
        ::Scheduler&                                                     scheduler
    );
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Threading::Async<bool> $verify(::std::string_view assertion, ::std::string_view fingerprintJson);
#endif


    // NOLINTEND
};
