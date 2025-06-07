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
    MCNAPI StringCompressor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void AddReference();

    MCNAPI static void RemoveReference();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::RakNet::StringCompressor*& instance();

    MCNAPI static int& referenceCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace RakNet
