#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class StringTable {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_STRINGTABLE
public:
    StringTable& operator=(StringTable const&) = delete;
    StringTable(StringTable const&)            = delete;
    StringTable()                              = delete;
#endif

public:
    /**
     * @symbol ?AddReference\@StringTable\@RakNet\@\@SAXXZ
     */
    MCAPI static void AddReference();
    /**
     * @symbol ?RemoveReference\@StringTable\@RakNet\@\@SAXXZ
     */
    MCAPI static void RemoveReference();

    // protected:

protected:
    /**
     * @symbol ?instance\@StringTable\@RakNet\@\@1PEAV12\@EA
     */
    MCAPI static class RakNet::StringTable* instance;
    /**
     * @symbol ?referenceCount\@StringTable\@RakNet\@\@1HA
     */
    MCAPI static int referenceCount;
};

}; // namespace RakNet
