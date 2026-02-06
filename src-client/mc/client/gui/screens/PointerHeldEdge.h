#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/NodeId.h"

// auto generated forward declare list
// clang-format off
struct PointerHeldScreenEventData;
// clang-format on

struct PointerHeldEdge {
public:
    // PointerHeldEdge inner types define
    using RequirementCallback = ::std::function<bool(::PointerHeldScreenEventData const&, ::std::string const&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(::PointerHeldScreenEventData const&, ::std::string const&, int)>>
                                       mRequirement;
    ::ll::TypedStorage<4, 4, ::NodeId> mTargetNode;
    ::ll::TypedStorage<4, 4, int>      mPriority;
    // NOLINTEND

public:
    // prevent constructor by default
    PointerHeldEdge& operator=(PointerHeldEdge const&);
    PointerHeldEdge(PointerHeldEdge const&);
    PointerHeldEdge();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::PointerHeldEdge& operator=(::PointerHeldEdge&&);

    MCAPI ~PointerHeldEdge();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
