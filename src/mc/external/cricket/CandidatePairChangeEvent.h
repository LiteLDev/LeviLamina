#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct CandidatePairChangeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1064> mUnk901d06;
    ::ll::UntypedStorage<8, 8>    mUnkcb65fd;
    ::ll::UntypedStorage<8, 32>   mUnk994d44;
    ::ll::UntypedStorage<8, 8>    mUnka6d673;
    // NOLINTEND

public:
    // prevent constructor by default
    CandidatePairChangeEvent& operator=(CandidatePairChangeEvent const&);
    CandidatePairChangeEvent(CandidatePairChangeEvent const&);
    CandidatePairChangeEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~CandidatePairChangeEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
