#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
class LevelStorageEventing;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class DBStoragePerformanceTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk98c37d;
    ::ll::UntypedStorage<8, 80> mUnkb28d92;
    ::ll::UntypedStorage<8, 8>  mUnk932436;
    ::ll::UntypedStorage<8, 24> mUnkeb0085;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStoragePerformanceTelemetry& operator=(DBStoragePerformanceTelemetry const&);
    DBStoragePerformanceTelemetry(DBStoragePerformanceTelemetry const&);
    DBStoragePerformanceTelemetry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DBStoragePerformanceTelemetry(::Bedrock::NonOwnerPointer<::LevelStorageEventing> eventing);

    MCAPI void
    _fireEventLevelDBPerformanceData(::Bedrock::Threading::LockGuard<::Bedrock::Threading::Mutex>& force, bool);

    MCAPI ~DBStoragePerformanceTelemetry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelStorageEventing> eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
