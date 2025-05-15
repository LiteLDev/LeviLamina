#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct ThreadAttributes; }
// clang-format on

namespace rtc {

class PlatformThread {
public:
    // prevent constructor by default
    PlatformThread();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Finalize();

    MCNAPI PlatformThread(void*, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::rtc::PlatformThread
        SpawnDetached(::std::function<void()>, ::std::string_view, ::rtc::ThreadAttributes);

    MCNAPI static ::rtc::PlatformThread
        SpawnJoinable(::std::function<void()>, ::std::string_view, ::rtc::ThreadAttributes);

    MCNAPI static ::rtc::PlatformThread
    SpawnThread(::std::function<void()>, ::std::string_view, ::rtc::ThreadAttributes, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(void*, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
