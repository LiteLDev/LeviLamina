#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class PhysicalSocketServer; }
// clang-format on

namespace rtc {

class SocketDispatcher {
public:
    // prevent constructor by default
    SocketDispatcher& operator=(SocketDispatcher const&);
    SocketDispatcher(SocketDispatcher const&);
    SocketDispatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool Initialize();

    MCAPI explicit SocketDispatcher(::rtc::PhysicalSocketServer*);

    MCAPI SocketDispatcher(uint64, ::rtc::PhysicalSocketServer*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int& next_id_();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::PhysicalSocketServer*);

    MCAPI void* $ctor(uint64, ::rtc::PhysicalSocketServer*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForHasSlots();

    MCAPI static void** $vftableForSocket();

    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
