#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringCompressor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_STRINGCOMPRESSOR
public:
    StringCompressor& operator=(StringCompressor const&) = delete;
    StringCompressor(StringCompressor const&)            = delete;
    StringCompressor()                                   = delete;
#endif

public:
    /**
     * @symbol ?AddReference\@StringCompressor\@RakNet\@\@SAXXZ
     */
    MCAPI static void AddReference();
    /**
     * @symbol ?RemoveReference\@StringCompressor\@RakNet\@\@SAXXZ
     */
    MCAPI static void RemoveReference();

    // private:

private:
    /**
     * @symbol ?instance\@StringCompressor\@RakNet\@\@0PEAV12\@EA
     */
    MCAPI static class RakNet::StringCompressor* instance;
    /**
     * @symbol ?referenceCount\@StringCompressor\@RakNet\@\@0HA
     */
    MCAPI static int referenceCount;
};

}; // namespace RakNet
