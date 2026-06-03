#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

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
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::VariableListDeltaTracker::VariableLastValueNode>>
                                   variableList;
    ::ll::TypedStorage<4, 4, uint> nextWriteIndex;
    // NOLINTEND
};

} // namespace RakNet
