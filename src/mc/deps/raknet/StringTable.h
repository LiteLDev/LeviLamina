#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringTable {
public:
    // prevent constructor by default
    StringTable& operator=(StringTable const&);
    StringTable(StringTable const&);
    StringTable();

public:
    // NOLINTBEGIN
    MCAPI static void AddReference();

    MCAPI static void RemoveReference();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class RakNet::StringTable*& instance();

    MCAPI static int& referenceCount();

    // NOLINTEND
};

}; // namespace RakNet
