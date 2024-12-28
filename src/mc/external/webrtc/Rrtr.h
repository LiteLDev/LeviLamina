#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtcp {

class Rrtr {
public:
    // prevent constructor by default
    Rrtr& operator=(Rrtr const&);
    Rrtr(Rrtr const&);
    Rrtr();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Create(uchar*) const;

    MCAPI void Parse(uchar const*);
    // NOLINTEND
};

} // namespace webrtc::rtcp
