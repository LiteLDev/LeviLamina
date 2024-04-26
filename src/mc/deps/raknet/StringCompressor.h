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
    // symbol: ?AddReference@StringCompressor@RakNet@@SAXXZ
    MCAPI static void AddReference();

    // symbol: ?RemoveReference@StringCompressor@RakNet@@SAXXZ
    MCAPI static void RemoveReference();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?instance@StringCompressor@RakNet@@0PEAV12@EA
    MCAPI static class RakNet::StringCompressor* instance;

    // symbol: ?referenceCount@StringCompressor@RakNet@@0HA
    MCAPI static int referenceCount;

    // NOLINTEND
};

}; // namespace RakNet
