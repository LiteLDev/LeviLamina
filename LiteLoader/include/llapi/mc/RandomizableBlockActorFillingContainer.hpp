/**
 * @file  RandomizableBlockActorFillingContainer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RandomizableBlockActorFillingContainer.
 *
 */
class RandomizableBlockActorFillingContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMIZABLEBLOCKACTORFILLINGCONTAINER
public:
    class RandomizableBlockActorFillingContainer& operator=(class RandomizableBlockActorFillingContainer const &) = delete;
    RandomizableBlockActorFillingContainer(class RandomizableBlockActorFillingContainer const &) = delete;
    RandomizableBlockActorFillingContainer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMIZABLEBLOCKACTORFILLINGCONTAINER
    /**
     * @hash   -81377514
     * @symbol ?dropContents@RandomizableBlockActorFillingContainer@@UEAAXAEAVBlockSource@@AEBVVec3@@_N@Z
     */
    MCVAPI void dropContents(class BlockSource &, class Vec3 const &, bool);
    /**
     * @hash   -1985881414
     * @symbol ?initializeContainerContents@RandomizableBlockActorFillingContainer@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource &);
    /**
     * @hash   791543579
     * @symbol ?setContainerChanged@RandomizableBlockActorFillingContainer@@UEAAXH@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @hash   1101870232
     * @symbol ?startOpen@RandomizableBlockActorFillingContainer@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   -390435468
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RandomizableBlockActorFillingContainer();
#endif
    /**
     * @hash   -1197011621
     * @symbol ??0RandomizableBlockActorFillingContainer@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@HW4ContainerType@@@Z
     */
    MCAPI RandomizableBlockActorFillingContainer(enum class BlockActorType, std::string const &, class BlockPos const &, int, enum class ContainerType);

};