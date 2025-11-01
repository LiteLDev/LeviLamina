#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ThreadPoolActionStatus.h"

namespace OS {

class ThreadPoolImpl {
public:
    // ThreadPoolImpl inner types declare
    // clang-format off
    struct ActionStatusImpl;
    // clang-format on

    // ThreadPoolImpl inner types define
    struct ActionStatusImpl : public ::OS::ThreadPoolActionStatus {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk1ea546;
        ::ll::UntypedStorage<8, 8> mUnk5b469c;
        ::ll::UntypedStorage<8, 8> mUnka555e8;
        ::ll::UntypedStorage<1, 1> mUnkb6b982;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActionStatusImpl& operator=(ActionStatusImpl const&);
        ActionStatusImpl(ActionStatusImpl const&);
        ActionStatusImpl();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual void Complete() /*override*/;

        // vIndex: 1
        virtual void MayRunLong() /*override*/;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $Complete();

        MCNAPI void $MayRunLong();
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka5b5ed;
    ::ll::UntypedStorage<8, 8> mUnkc4377c;
    ::ll::UntypedStorage<8, 8> mUnk653352;
    ::ll::UntypedStorage<8, 8> mUnk962e9f;
    // NOLINTEND

public:
    // prevent constructor by default
    ThreadPoolImpl& operator=(ThreadPoolImpl const&);
    ThreadPoolImpl(ThreadPoolImpl const&);
    ThreadPoolImpl();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void TPCallback(::_TP_CALLBACK_INSTANCE* instance, void* context, ::_TP_WORK*);
    // NOLINTEND
};

} // namespace OS
