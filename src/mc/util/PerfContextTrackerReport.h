#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerfContextTrackerReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk29b09a;
    ::ll::UntypedStorage<4, 4>  mUnk19ce8b;
    ::ll::UntypedStorage<8, 8>  mUnk4f1672;
    ::ll::UntypedStorage<8, 8>  mUnk8834c6;
    ::ll::UntypedStorage<8, 8>  mUnke069db;
    ::ll::UntypedStorage<4, 4>  mUnk44ce11;
    ::ll::UntypedStorage<4, 4>  mUnk8d4fb1;
    ::ll::UntypedStorage<4, 4>  mUnkd7a40a;
    ::ll::UntypedStorage<4, 4>  mUnk1daeb0;
    ::ll::UntypedStorage<4, 48> mUnk16eb14;
    ::ll::UntypedStorage<4, 4>  mUnk1efb8e;
    ::ll::UntypedStorage<4, 4>  mUnk417e2b;
    ::ll::UntypedStorage<4, 4>  mUnk64a1a5;
    ::ll::UntypedStorage<4, 4>  mUnk11f124;
    ::ll::UntypedStorage<4, 4>  mUnkcdadd2;
    ::ll::UntypedStorage<4, 4>  mUnkc6bfdf;
    ::ll::UntypedStorage<4, 4>  mUnkce5a6c;
    ::ll::UntypedStorage<8, 8>  mUnkae9e66;
    ::ll::UntypedStorage<8, 8>  mUnkffb475;
    ::ll::UntypedStorage<8, 8>  mUnk573c46;
    ::ll::UntypedStorage<8, 8>  mUnk4ccb36;
    // NOLINTEND

public:
    // prevent constructor by default
    PerfContextTrackerReport& operator=(PerfContextTrackerReport const&);
    PerfContextTrackerReport(PerfContextTrackerReport const&);
    PerfContextTrackerReport();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PerfContextTrackerReport();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
