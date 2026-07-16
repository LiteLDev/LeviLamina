#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct StrAndBool;
namespace DataStructures { class OrderedList; }
// clang-format on

namespace RakNet {

class StringTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> orderedStringList;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void RemoveReference();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RakNet::StringTable*& instance();

    MCAPI static int& referenceCount();
    // NOLINTEND
};

} // namespace RakNet
