/**
 * @file  SideBySideCrossEntityRemapSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SideBySideCrossEntityRemapSystem.
 *
 */
class SideBySideCrossEntityRemapSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIDEBYSIDECROSSENTITYREMAPSYSTEM
public:
    class SideBySideCrossEntityRemapSystem& operator=(class SideBySideCrossEntityRemapSystem const &) = delete;
    SideBySideCrossEntityRemapSystem(class SideBySideCrossEntityRemapSystem const &) = delete;
    SideBySideCrossEntityRemapSystem() = delete;
#endif

public:
    /**
     * @hash   1522934499
     * @symbol ?_remapContext@SideBySideCrossEntityRemapSystem@@SAXAEAVStrictEntityContext@@AEBUSideBySideRemappingComponent@@@Z
     */
    MCAPI static void _remapContext(class StrictEntityContext &, struct SideBySideRemappingComponent const &);

//private:
    /**
     * @hash   1644335704
     * @symbol ?_removeNullStrictEntityContexts@SideBySideCrossEntityRemapSystem@@CAXAEAV?$vector@VStrictEntityContext@@V?$allocator@VStrictEntityContext@@@std@@@std@@@Z
     */
    MCAPI static void _removeNullStrictEntityContexts(std::vector<class StrictEntityContext> &);

private:

};