#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { struct ThreadAttributes; }
// clang-format on

namespace rtc {

class PlatformThread {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Finalize();

    MCAPI PlatformThread(void*, bool);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::rtc::PlatformThread
        SpawnDetached(::std::function<void()>, ::std::string_view, ::rtc::ThreadAttributes);

    MCAPI static ::rtc::PlatformThread
        SpawnJoinable(::std::function<void()>, ::std::string_view, ::rtc::ThreadAttributes);

    MCAPI static ::rtc::PlatformThread
    SpawnThread(::std::function<void()>, ::std::string_view, ::rtc::ThreadAttributes, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(void*, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
