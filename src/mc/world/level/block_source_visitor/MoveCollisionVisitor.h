#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockSourceVisitor { struct VisitArgs; }
// clang-format on

namespace BlockSourceVisitor {

struct MoveCollisionVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc2e4c1;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveCollisionVisitor& operator=(MoveCollisionVisitor const&);
    MoveCollisionVisitor(MoveCollisionVisitor const&);
    MoveCollisionVisitor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(::BlockSourceVisitor::VisitArgs const& args);
    // NOLINTEND
};

} // namespace BlockSourceVisitor
