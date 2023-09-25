/**
 * @file  BlockLegacyComponentStorageFinaliser.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockLegacyComponentStorageFinaliser {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLEGACYCOMPONENTSTORAGEFINALISER
public:
    class BlockLegacyComponentStorageFinaliser& operator=(class BlockLegacyComponentStorageFinaliser const &) = delete;
    BlockLegacyComponentStorageFinaliser(class BlockLegacyComponentStorageFinaliser const &) = delete;
    BlockLegacyComponentStorageFinaliser() = delete;
#endif

public:

//private:
    /**
     * @symbol ?_finalizeCollisionBoxComponent\@BlockLegacyComponentStorageFinaliser\@\@AEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void _finalizeCollisionBoxComponent(class BlockLegacy &);
    /**
     * @symbol ?_finalizeSelectionBoxComponent\@BlockLegacyComponentStorageFinaliser\@\@AEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void _finalizeSelectionBoxComponent(class BlockLegacy &);
    /**
     * @symbol ?addRemainingComponents\@BlockLegacyComponentStorageFinaliser\@\@AEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void addRemainingComponents(class BlockLegacy &);
    /**
     * @symbol ?finalizeComponentData\@BlockLegacyComponentStorageFinaliser\@\@AEAAXAEAVBlockLegacy\@\@\@Z
     */
    MCAPI void finalizeComponentData(class BlockLegacy &);

private:

};
