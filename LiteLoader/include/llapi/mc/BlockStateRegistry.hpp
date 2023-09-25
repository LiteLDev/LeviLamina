/**
 * @file  BlockStateRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockStateRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEREGISTRY
public:
    class BlockStateRegistry& operator=(class BlockStateRegistry const &) = delete;
    BlockStateRegistry(class BlockStateRegistry const &) = delete;
    BlockStateRegistry() = delete;
#endif

public:
    /**
     * @symbol ?get\@BlockStateRegistry\@\@SAAEAV1\@XZ
     */
    MCAPI static class BlockStateRegistry & get();

};
