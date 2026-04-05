#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace Core::WriteThrottledOS { class OSWriteThrottleTracker; }
class SceneFactory;
// clang-format on

class ThrottledFileWriteManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ThrottledFileWriteManager inner types declare
    // clang-format off
    struct TransactionContext;
    struct TelemetryOperationInProgress;
    // clang-format on

    // ThrottledFileWriteManager inner types define
    struct TransactionContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk85d132;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransactionContext& operator=(TransactionContext const&);
        TransactionContext(TransactionContext const&);
        TransactionContext();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~TransactionContext();
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

    struct TelemetryOperationInProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk93e644;
        ::ll::UntypedStorage<8, 24> mUnk1def4a;
        ::ll::UntypedStorage<8, 8>  mUnk140c91;
        ::ll::UntypedStorage<8, 32> mUnk3c75be;
        ::ll::UntypedStorage<8, 8>  mUnkbadea1;
        ::ll::UntypedStorage<8, 8>  mUnk62addd;
        // NOLINTEND

    public:
        // prevent constructor by default
        TelemetryOperationInProgress& operator=(TelemetryOperationInProgress const&);
        TelemetryOperationInProgress(TelemetryOperationInProgress const&);
        TelemetryOperationInProgress();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~TelemetryOperationInProgress();
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
    ::ll::UntypedStorage<8, 64> mUnkd281ed;
    ::ll::UntypedStorage<8, 24> mUnke02764;
    ::ll::UntypedStorage<8, 64> mUnk8cdd97;
    ::ll::UntypedStorage<8, 80> mUnk216fd4;
    ::ll::UntypedStorage<8, 8>  mUnkf4be0b;
    ::ll::UntypedStorage<8, 16> mUnk20fc64;
    ::ll::UntypedStorage<8, 8>  mUnk6af47c;
    ::ll::UntypedStorage<8, 8>  mUnk27a215;
    ::ll::UntypedStorage<8, 8>  mUnka22de7;
    ::ll::UntypedStorage<8, 8>  mUnk463ebb;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrottledFileWriteManager& operator=(ThrottledFileWriteManager const&);
    ThrottledFileWriteManager(ThrottledFileWriteManager const&);
    ThrottledFileWriteManager();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ThrottledFileWriteManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~ThrottledFileWriteManager() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ThrottledFileWriteManager(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>                        appPlatform,
        ::std::shared_ptr<::Core::WriteThrottledOS::OSWriteThrottleTracker> oSWriteThrottleTracker
    );

    MCNAPI ::Bedrock::Threading::Async<bool> beginLargeFileTransaction(
        uint64                                            bytesToBeWritten,
        ::std::string const&                              originatingSystem,
        ::ThrottledFileWriteManager::TransactionContext&& context
    );

    MCNAPI void emitTelemetryEvent(
        ::std::string const&                    originatingSystem,
        bool                                    operationWasCancelled,
        ::std::chrono::steady_clock::time_point operationCompleteTimestamp
    );

    MCNAPI ::Bedrock::Threading::Async<void> endLargeFileTransaction(::std::string const& originatingSystem);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::AppPlatform>                        appPlatform,
        ::std::shared_ptr<::Core::WriteThrottledOS::OSWriteThrottleTracker> oSWriteThrottleTracker
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
