/**
 * @file  ResourceDropsContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ResourceDropsContext.
 *
 */
struct ResourceDropsContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEDROPSCONTEXT
public:
    struct ResourceDropsContext& operator=(struct ResourceDropsContext const &) = delete;
    ResourceDropsContext(struct ResourceDropsContext const &) = delete;
    ResourceDropsContext() = delete;
#endif

public:
    /**
     * @symbol ??0ResourceDropsContext\@\@QEAA\@MAEBVItemStack\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI ResourceDropsContext(float, class ItemStack const &, class BlockSource const &);
    /**
     * @symbol ??0ResourceDropsContext\@\@QEAA\@MAEBVItemStack\@\@AEAVILevel\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI ResourceDropsContext(float, class ItemStack const &, class ILevel &, class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?getRandom\@ResourceDropsContext\@\@QEBAAEAVRandom\@\@XZ
     */
    MCAPI class Random & getRandom() const;

};