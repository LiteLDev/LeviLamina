#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Attribute {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk74f5db;
    ::ll::UntypedStorage<8, 16> mUnkaacad1;
    // NOLINTEND

public:
    // prevent constructor by default
    Attribute& operator=(Attribute const&);
    Attribute(Attribute const&);
    Attribute();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string ToString() const;

    MCAPI bool has_value() const;

    MCAPI char const* name() const;
    // NOLINTEND
};

} // namespace webrtc
