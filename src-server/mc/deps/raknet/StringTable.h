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
    ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<char*, ::StrAndBool, $unknown_type>> orderedStringList;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RakNet::StringTable*& instance();

    MCAPI static int& referenceCount();
    // NOLINTEND
};

} // namespace RakNet
