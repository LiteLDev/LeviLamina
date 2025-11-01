#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct ThreadAttributes; }
// clang-format on

namespace rtc {

class PlatformThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkcab9bf;
    ::ll::UntypedStorage<1, 1> mUnk38a779;
    // NOLINTEND

public:
    // prevent constructor by default
    PlatformThread& operator=(PlatformThread const&);
    PlatformThread(PlatformThread const&);
    PlatformThread();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlatformThread();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Finalize();

    MCNAPI PlatformThread(void* handle, bool joinable);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::rtc::PlatformThread SpawnDetached(::std::function<void()> thread_function, ::std::string_view name, ::rtc::ThreadAttributes attributes);

    MCNAPI static ::rtc::PlatformThread SpawnJoinable(::std::function<void()> thread_function, ::std::string_view name, ::rtc::ThreadAttributes attributes);

    MCNAPI static ::rtc::PlatformThread SpawnThread(::std::function<void()> thread_function, ::std::string_view name, ::rtc::ThreadAttributes attributes, bool joinable);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(void* handle, bool joinable);
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

}
