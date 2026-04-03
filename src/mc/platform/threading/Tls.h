#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/NonCopyable.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_set.h"
#include "mc/platform/threading/Mutex.h"

namespace Bedrock::Threading::Detail {

class Tls {
public:
    // Tls inner types declare
    // clang-format off
    struct Thread;
    // clang-format on

    // Tls inner types define
    struct Thread : public ::Bedrock::NonCopyable {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Bedrock::Threading::Detail::Tls*&> mTls;
        ::ll::TypedStorage<8, 24, ::std::vector<void*>>               mValues;
        // NOLINTEND

    public:
        // prevent constructor by default
        Thread& operator=(Thread const&);
        Thread(Thread const&);
        Thread();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit Thread(::Bedrock::Threading::Detail::Tls*& tls);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Bedrock::Threading::Detail::Tls*& tls);
        // NOLINTEND
    };

    using Key = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                  mMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::brstd::bitset<1024, uint64>>> mSlots;
    ::ll::TypedStorage<
        8,
        24,
        ::brstd::flat_set<
            ::Bedrock::Threading::Detail::Tls::Thread*,
            ::std::less<::Bedrock::Threading::Detail::Tls::Thread*>,
            ::std::vector<::Bedrock::Threading::Detail::Tls::Thread*>>>
        mThreads;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint allocate();
    // NOLINTEND
};

} // namespace Bedrock::Threading::Detail
