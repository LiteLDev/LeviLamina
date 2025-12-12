#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class VariableListDeltaTracker {
public:
    // VariableListDeltaTracker inner types declare
    // clang-format off
    struct VariableLastValueNode;
    // clang-format on

    // VariableListDeltaTracker inner types define
    struct VariableLastValueNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk82316a;
        ::ll::UntypedStorage<4, 4> mUnka2aeb1;
        ::ll::UntypedStorage<1, 1> mUnk9c20eb;
        // NOLINTEND

    public:
        // prevent constructor by default
        VariableLastValueNode& operator=(VariableLastValueNode const&);
        VariableLastValueNode(VariableLastValueNode const&);
        VariableLastValueNode();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk60f868;
    ::ll::UntypedStorage<4, 4>  mUnk8df975;
    // NOLINTEND

public:
    // prevent constructor by default
    VariableListDeltaTracker& operator=(VariableListDeltaTracker const&);
    VariableListDeltaTracker(VariableListDeltaTracker const&);
    VariableListDeltaTracker();
};

} // namespace RakNet
