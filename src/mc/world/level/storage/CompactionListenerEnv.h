#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/CompactionStatus.h"

class CompactionListenerEnv : public ::leveldb::EnvWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk91de58;
    ::ll::UntypedStorage<8, 80> mUnk1753cf;
    ::ll::UntypedStorage<1, 1>  mUnk17bf1b;
    ::ll::UntypedStorage<8, 64> mUnk21aba1;
    // NOLINTEND

public:
    // prevent constructor by default
    CompactionListenerEnv& operator=(CompactionListenerEnv const&);
    CompactionListenerEnv(CompactionListenerEnv const&);
    CompactionListenerEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 14
    virtual void Schedule(void (*function)(void*), void* arg) /*override*/;

    // vIndex: 0
    virtual ~CompactionListenerEnv() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setCompactionCallback(::std::function<void(::CompactionStatus)> callback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Schedule(void (*function)(void*), void* arg);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
