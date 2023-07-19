/**
 * @file  BlockComponentDirectData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockComponentDirectData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTDIRECTDATA
public:
    class BlockComponentDirectData& operator=(class BlockComponentDirectData const &) = delete;
    BlockComponentDirectData(class BlockComponentDirectData const &) = delete;
    BlockComponentDirectData() = delete;
#endif

public:
    /**
     * @symbol ?finalize\@BlockComponentDirectData\@\@QEAAXAEBVBlock\@\@\@Z
     */
    MCAPI void finalize(class Block const &);

};
