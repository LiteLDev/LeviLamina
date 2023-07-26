#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomizableBlockActorFillingContainer {

public:
    // prevent constructor by default
    RandomizableBlockActorFillingContainer& operator=(RandomizableBlockActorFillingContainer const&) = delete;
    RandomizableBlockActorFillingContainer(RandomizableBlockActorFillingContainer const&)            = delete;
    RandomizableBlockActorFillingContainer()                                                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMIZABLEBLOCKACTORFILLINGCONTAINER
    /**
     * @symbol ?dropContents\@RandomizableBlockActorFillingContainer\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    MCVAPI void dropContents(class BlockSource&, class Vec3 const&, bool); // NOLINT
    /**
     * @symbol ?initializeContainerContents\@RandomizableBlockActorFillingContainer\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource&); // NOLINT
    /**
     * @symbol ?setContainerChanged\@RandomizableBlockActorFillingContainer\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int); // NOLINT
    /**
     * @symbol ?startOpen\@RandomizableBlockActorFillingContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RandomizableBlockActorFillingContainer(); // NOLINT
#endif
    /**
     * @symbol
     * ??0RandomizableBlockActorFillingContainer\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@HW4ContainerType\@\@\@Z
     */
    MCAPI RandomizableBlockActorFillingContainer(
        enum class BlockActorType,
        std::string const&,
        class BlockPos const&,
        int,
        enum class ContainerType
    ); // NOLINT
};
