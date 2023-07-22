/**
 * @file  SideBySideCrossEntityRemapSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?_remapContext\@SideBySideCrossEntityRemapSystem\@\@SAXAEAVStrictEntityContext\@\@AEBUSideBySideRemappingComponent\@\@\@Z
     */
    MCAPI static void _remapContext(class StrictEntityContext &, struct SideBySideRemappingComponent const &);

//private:
    /**
     * @symbol  ?_removeNullStrictActorIDEntityContextPairs\@SideBySideCrossEntityRemapSystem\@\@CAXAEAV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void _removeNullStrictActorIDEntityContextPairs(std::vector<struct StrictActorIDEntityContextPair> &);

private:

};