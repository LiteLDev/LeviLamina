#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/memory_page_info/MemoryPageInfo.h"
#include "mc/platform/brstd/copyable_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

namespace Memory {

class MemoryPageInfoSampler {
public:
    // MemoryPageInfoSampler inner types define
    using Provider = ::brstd::copyable_function<::Memory::MemoryPageInfo()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::copyable_function<::Memory::MemoryPageInfo()>> mProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                          mTaskGroup;
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>>                                     mHasCachedInfo;
    ::ll::TypedStorage<8, 8, ::std::atomic<::Memory::MemoryPageInfo>>                 mCachedInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void start();

    MCAPI ~MemoryPageInfoSampler();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Memory
