#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringTable {

public:
    // prevent constructor by default
    StringTable& operator=(StringTable const&) = delete;
    StringTable(StringTable const&)            = delete;
    StringTable()                              = delete;

public:
    /**
     * @symbol ?AddReference\@StringTable\@RakNet\@\@SAXXZ
     */
    MCAPI static void AddReference(); // NOLINT
    /**
     * @symbol ?RemoveReference\@StringTable\@RakNet\@\@SAXXZ
     */
    MCAPI static void RemoveReference(); // NOLINT

    // protected:

protected:
    /**
     * @symbol ?instance\@StringTable\@RakNet\@\@1PEAV12\@EA
     */
    MCAPI static class RakNet::StringTable* instance; // NOLINT
    /**
     * @symbol ?referenceCount\@StringTable\@RakNet\@\@1HA
     */
    MCAPI static int referenceCount; // NOLINT
};

}; // namespace RakNet
