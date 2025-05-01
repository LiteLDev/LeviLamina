#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class PhysicalSocketServer; }
// clang-format on

namespace rtc {

class SocketDispatcher {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Initialize();

    MCNAPI explicit SocketDispatcher(::rtc::PhysicalSocketServer*);

    MCNAPI SocketDispatcher(uint64, ::rtc::PhysicalSocketServer*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& next_id_();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::PhysicalSocketServer*);

    MCNAPI void* $ctor(uint64, ::rtc::PhysicalSocketServer*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
