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
        ::ll::TypedStorage<8, 8, char*> lastData;
        ::ll::TypedStorage<4, 4, uint>  byteLength;
        ::ll::TypedStorage<1, 1, bool>  isDirty;
        // NOLINTEND
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
