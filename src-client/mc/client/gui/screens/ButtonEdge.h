#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ButtonEventType.h"
#include "mc/client/gui/screens/NodeId.h"

struct ButtonEdge {
public:
    // ButtonEdge inner types define
    using RequirementCallback = ::std::function<bool(uint, ::ButtonEventType, ::std::string const&, int)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(uint, ::ButtonEventType, ::std::string const&, int)>> mRequirement;
    ::ll::TypedStorage<4, 4, ::NodeId>                                                                   mTargetNode;
    ::ll::TypedStorage<4, 4, int>                                                                        mPriority;
    // NOLINTEND
};
