#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringCompressor {

public:
    // prevent constructor by default
    StringCompressor& operator=(StringCompressor const&) = delete;
    StringCompressor(StringCompressor const&)            = delete;
    StringCompressor()                                   = delete;

public:
    /**
     * @symbol ?AddReference\@StringCompressor\@RakNet\@\@SAXXZ
     */
    MCAPI static void AddReference(); // NOLINT
    /**
     * @symbol ?RemoveReference\@StringCompressor\@RakNet\@\@SAXXZ
     */
    MCAPI static void RemoveReference(); // NOLINT

    // private:

private:
    /**
     * @symbol ?instance\@StringCompressor\@RakNet\@\@0PEAV12\@EA
     */
    MCAPI static class RakNet::StringCompressor* instance; // NOLINT
    /**
     * @symbol ?referenceCount\@StringCompressor\@RakNet\@\@0HA
     */
    MCAPI static int referenceCount; // NOLINT
};

}; // namespace RakNet
