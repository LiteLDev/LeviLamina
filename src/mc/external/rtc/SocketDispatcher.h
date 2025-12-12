#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/Dispatcher.h"
#include "mc/external/rtc/PhysicalSocket.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class PhysicalSocketServer; }
// clang-format on

namespace rtc {

class SocketDispatcher : public ::rtc::Dispatcher, public ::rtc::PhysicalSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf002bf;
    ::ll::UntypedStorage<1, 1> mUnk70b785;
    ::ll::UntypedStorage<4, 4> mUnk2a9bf6;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketDispatcher& operator=(SocketDispatcher const&);
    SocketDispatcher(SocketDispatcher const&);
    SocketDispatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocketDispatcher() /*override*/;

    virtual bool Create(int type);

    virtual bool Create(int family, int type) /*override*/;

    virtual void* GetWSAEvent() /*override*/;

    virtual uint64 GetSocket() /*override*/;

    virtual bool CheckSignalClose() /*override*/;

    virtual uint GetRequestedEvents() /*override*/;

    virtual void OnEvent(uint ff, int err) /*override*/;

    virtual int Close() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool Initialize();

    MCNAPI explicit SocketDispatcher(::rtc::PhysicalSocketServer* ss);

    MCNAPI SocketDispatcher(uint64 s, ::rtc::PhysicalSocketServer* ss);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& next_id_();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::PhysicalSocketServer* ss);

    MCNAPI void* $ctor(uint64 s, ::rtc::PhysicalSocketServer* ss);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $Create(int type);

    MCNAPI bool $Create(int family, int type);

    MCNAPI void* $GetWSAEvent();

    MCNAPI uint64 $GetSocket();

    MCNAPI bool $CheckSignalClose();

    MCNAPI uint $GetRequestedEvents();

    MCNAPI void $OnEvent(uint ff, int err);

    MCNAPI int $Close();


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
