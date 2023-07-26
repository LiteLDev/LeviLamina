/**
 * @file  DefaultMobSpawner.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "BaseMobSpawner.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DefaultMobSpawner.
 *
 */
class DefaultMobSpawner : public BaseMobSpawner {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFAULTMOBSPAWNER
public:
    class DefaultMobSpawner& operator=(class DefaultMobSpawner const &) = delete;
    DefaultMobSpawner(class DefaultMobSpawner const &) = delete;
    DefaultMobSpawner() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~DefaultMobSpawner();
    /**
     * @vftbl  4
     * @symbol  ?getPos\@DefaultMobSpawner\@\@UEAAAEBVBlockPos\@\@XZ
     */
    virtual class BlockPos const & getPos();

};