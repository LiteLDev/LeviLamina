#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Dispatcher.h"
#include "mc/external/webrtc/PhysicalSocket.h"

namespace webrtc {

class SocketDispatcher : public ::webrtc::Dispatcher, public ::webrtc::PhysicalSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk87c04d;
    ::ll::UntypedStorage<1, 1> mUnkbd57a1;
    ::ll::UntypedStorage<4, 4> mUnk3573ec;
    // NOLINTEND

public:
    // prevent constructor by default
    SocketDispatcher& operator=(SocketDispatcher const&);
    SocketDispatcher(SocketDispatcher const&);
    SocketDispatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocketDispatcher() /*override*/ = default;

    virtual bool Create(int family, int type) /*override*/;

    virtual bool Create(int type);

    virtual void* GetWSAEvent() /*override*/;

    virtual uint64 GetSocket() /*override*/;

    virtual bool CheckSignalClose() /*override*/;

    virtual uint GetRequestedEvents() /*override*/;

    virtual void OnEvent(uint ff, int err) /*override*/;

    virtual int Close() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& next_id_();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $Create(int family, int type);

    MCNAPI bool $Create(int type);

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
    MCNAPI static void** $vftableForSocket();

    MCNAPI static void** $vftableForHasSlots();

    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
