#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementAbilitiesExt {

struct InheritFromVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk44a2ca;
    ::ll::UntypedStorage<8, 8> mUnkde6ac1;
    ::ll::UntypedStorage<8, 8> mUnkea36c6;
    // NOLINTEND

public:
    // prevent constructor by default
    InheritFromVisitor& operator=(InheritFromVisitor const&);
    InheritFromVisitor(InheritFromVisitor const&);
    InheritFromVisitor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(float);
    // NOLINTEND
};

} // namespace MovementAbilitiesExt
