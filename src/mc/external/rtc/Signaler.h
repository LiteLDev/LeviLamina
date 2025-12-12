#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/Dispatcher.h"

namespace rtc {

class Signaler : public ::rtc::Dispatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9cb076;
    ::ll::UntypedStorage<8, 8> mUnk31c4a1;
    ::ll::UntypedStorage<8, 8> mUnk64302d;
    // NOLINTEND

public:
    // prevent constructor by default
    Signaler& operator=(Signaler const&);
    Signaler(Signaler const&);
    Signaler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Signaler() /*override*/ = default;

    virtual void Signal();

    virtual uint GetRequestedEvents() /*override*/;

    virtual void OnEvent(uint ff, int err) /*override*/;

    virtual void* GetWSAEvent() /*override*/;

    virtual uint64 GetSocket() /*override*/;

    virtual bool CheckSignalClose() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Signal();

    MCNAPI uint $GetRequestedEvents();

    MCNAPI void $OnEvent(uint ff, int err);

    MCNAPI void* $GetWSAEvent();

    MCNAPI uint64 $GetSocket();

    MCNAPI bool $CheckSignalClose();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
