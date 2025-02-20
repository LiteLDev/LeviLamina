#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdc9695;
    // NOLINTEND

public:
    // prevent constructor by default
    StringTable& operator=(StringTable const&);
    StringTable(StringTable const&);
    StringTable();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RakNet::StringTable*& instance();

    MCAPI static int& referenceCount();
    // NOLINTEND
};

} // namespace RakNet
