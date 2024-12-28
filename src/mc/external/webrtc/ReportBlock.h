#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class ReportBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk432543;
    ::ll::UntypedStorage<1, 1> mUnk58eea6;
    ::ll::UntypedStorage<4, 4> mUnk60ee9b;
    ::ll::UntypedStorage<4, 4> mUnk85f13f;
    ::ll::UntypedStorage<4, 4> mUnk28a72e;
    ::ll::UntypedStorage<4, 4> mUnkc8997f;
    ::ll::UntypedStorage<4, 4> mUnk5d329b;
    // NOLINTEND

public:
    // prevent constructor by default
    ReportBlock& operator=(ReportBlock const&);
    ReportBlock(ReportBlock const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Create(uchar*) const;

    MCAPI bool Parse(uchar const*, uint64);

    MCAPI ReportBlock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace webrtc::rtcp
