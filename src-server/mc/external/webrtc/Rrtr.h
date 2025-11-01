#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Rrtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke77d12;
    // NOLINTEND

public:
    // prevent constructor by default
    Rrtr& operator=(Rrtr const&);
    Rrtr(Rrtr const&);
    Rrtr();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Create(uchar* buffer) const;

    MCNAPI void Parse(uchar const* buffer);
    // NOLINTEND

};

}
