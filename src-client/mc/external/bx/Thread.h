#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/MpScUnboundedBlockingQueue.h"
#include "mc/external/bx/Semaphore.h"

namespace bx {

class Thread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 64, uchar[64]>                               m_internal;
    ::ll::TypedStorage<8, 8, int (*)(::bx::Thread*, void*)>            m_fn;
    ::ll::TypedStorage<8, 8, void*>                                    m_userData;
    ::ll::TypedStorage<8, 224, ::bx::MpScUnboundedBlockingQueue<void>> m_queue;
    ::ll::TypedStorage<1, 128, ::bx::Semaphore>                        m_sem;
    ::ll::TypedStorage<4, 4, uint>                                     m_stackSize;
    ::ll::TypedStorage<4, 4, int>                                      m_exitCode;
    ::ll::TypedStorage<1, 1, bool>                                     m_running;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Thread();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Thread();

    MCAPI void init(int (*_fn)(::bx::Thread*, void*), void* _userData, uint _stackSize, char const* _name);

    MCAPI bool isRunning() const;

    MCAPI void setThreadName(char const* _name);

    MCAPI void shutdown();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace bx
