#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    virtual void Schedule(void (*function)(void*), void* arg) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $Schedule(void (*function)(void*), void* arg);


    // NOLINTEND
};
