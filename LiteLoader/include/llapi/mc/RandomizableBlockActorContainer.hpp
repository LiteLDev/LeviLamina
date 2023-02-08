/**
 * @file  RandomizableBlockActorContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomizableBlockActorContainer.
 *
 */
class RandomizableBlockActorContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZABLEBLOCKACTORCONTAINER
public:
    class RandomizableBlockActorContainer& operator=(class RandomizableBlockActorContainer const &) = delete;
    RandomizableBlockActorContainer(class RandomizableBlockActorContainer const &) = delete;
    RandomizableBlockActorContainer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMIZABLEBLOCKACTORCONTAINER
    /**
     * @hash   -1278263095
     * @symbol  ?dropContents\@RandomizableBlockActorContainer\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    MCVAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @hash   -698683859
     * @symbol  ?initializeContainerContents\@RandomizableBlockActorContainer\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource &);
    /**
     * @hash   1114255646
     * @symbol  ?setContainerChanged\@RandomizableBlockActorContainer\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   -1298839365
     * @symbol  ?startOpen\@RandomizableBlockActorContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -1280547544
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~RandomizableBlockActorContainer();
#endif
    /**
     * @hash   -1715724113
     * @symbol  ??0RandomizableBlockActorContainer\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@W4ContainerType\@\@\@Z
     */
    MCAPI RandomizableBlockActorContainer(enum class BlockActorType, std::string const &, class BlockPos const &, enum class ContainerType);

};