#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringCompressor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk957c28;
    // NOLINTEND

public:
    // prevent constructor by default
    StringCompressor& operator=(StringCompressor const&);
    StringCompressor(StringCompressor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StringCompressor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void RemoveReference();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::RakNet::StringCompressor*& instance();

    MCAPI static int& referenceCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

};

}
