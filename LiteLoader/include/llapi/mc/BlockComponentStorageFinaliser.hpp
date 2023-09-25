/**
 * @file  BlockComponentStorageFinaliser.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockComponentStorageFinaliser {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTSTORAGEFINALISER
public:
    class BlockComponentStorageFinaliser& operator=(class BlockComponentStorageFinaliser const &) = delete;
    BlockComponentStorageFinaliser(class BlockComponentStorageFinaliser const &) = delete;
    BlockComponentStorageFinaliser() = delete;
#endif

public:

//private:
    /**
     * @symbol ?_checkForCollisionComponentBoxDuplication\@BlockComponentStorageFinaliser\@\@AEAAXAEAVBlock\@\@\@Z
     */
    MCAPI void _checkForCollisionComponentBoxDuplication(class Block &);
    /**
     * @symbol ?_checkForSelectionBoxComponentDuplication\@BlockComponentStorageFinaliser\@\@AEAAXAEAVBlock\@\@\@Z
     */
    MCAPI void _checkForSelectionBoxComponentDuplication(class Block &);
    /**
     * @symbol ?_finalizeCollisionBoxComponent\@BlockComponentStorageFinaliser\@\@AEAAXAEAVBlock\@\@\@Z
     */
    MCAPI void _finalizeCollisionBoxComponent(class Block &);
    /**
     * @symbol ?_finalizeSelectionBoxComponent\@BlockComponentStorageFinaliser\@\@AEAAXAEAVBlock\@\@\@Z
     */
    MCAPI void _finalizeSelectionBoxComponent(class Block &);
    /**
     * @symbol ?addRemainingComponents\@BlockComponentStorageFinaliser\@\@AEAAXAEAVBlock\@\@\@Z
     */
    MCAPI void addRemainingComponents(class Block &);
    /**
     * @symbol ?finalizeComponentData\@BlockComponentStorageFinaliser\@\@AEAAXAEAVBlock\@\@\@Z
     */
    MCAPI void finalizeComponentData(class Block &);

private:

};
