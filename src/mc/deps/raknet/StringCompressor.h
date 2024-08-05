#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringCompressor {
public:
    // prevent constructor by default
    StringCompressor& operator=(StringCompressor const&);
    StringCompressor(StringCompressor const&);
    StringCompressor();

public:
    // NOLINTBEGIN
    MCAPI static void AddReference();

    MCAPI static void RemoveReference();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class RakNet::StringCompressor* instance;

    MCAPI static int referenceCount;

    // NOLINTEND
};

}; // namespace RakNet
