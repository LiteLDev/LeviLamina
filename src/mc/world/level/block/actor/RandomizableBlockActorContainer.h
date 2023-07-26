#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomizableBlockActorContainer {

public:
    // prevent constructor by default
    RandomizableBlockActorContainer& operator=(RandomizableBlockActorContainer const&) = delete;
    RandomizableBlockActorContainer(RandomizableBlockActorContainer const&)            = delete;
    RandomizableBlockActorContainer()                                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMIZABLEBLOCKACTORCONTAINER
    /**
     * @symbol ?dropContents\@RandomizableBlockActorContainer\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    MCVAPI void dropContents(class BlockSource&, class Vec3 const&, bool); // NOLINT
    /**
     * @symbol ?initializeContainerContents\@RandomizableBlockActorContainer\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource&); // NOLINT
    /**
     * @symbol ?setContainerChanged\@RandomizableBlockActorContainer\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int); // NOLINT
    /**
     * @symbol ?startOpen\@RandomizableBlockActorContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RandomizableBlockActorContainer(); // NOLINT
#endif
    /**
     * @symbol
     * ??0RandomizableBlockActorContainer\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@W4ContainerType\@\@\@Z
     */
    MCAPI RandomizableBlockActorContainer(
        enum class BlockActorType,
        std::string const&,
        class BlockPos const&,
        enum class ContainerType
    ); // NOLINT
};
