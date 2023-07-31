#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RandomizableBlockActorContainer {

public:
    // prevent constructor by default
    RandomizableBlockActorContainer& operator=(RandomizableBlockActorContainer const&) = delete;
    RandomizableBlockActorContainer(RandomizableBlockActorContainer const&)            = delete;
    RandomizableBlockActorContainer()                                                  = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMIZABLEBLOCKACTORCONTAINER
    /**
     * @symbol ?dropContents\@RandomizableBlockActorContainer\@\@UEAAXAEAVBlockSource\@\@AEBVVec3\@\@_N\@Z
     */
    MCVAPI void dropContents(class BlockSource&, class Vec3 const&, bool);
    /**
     * @symbol ?initializeContainerContents\@RandomizableBlockActorContainer\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void initializeContainerContents(class BlockSource&);
    /**
     * @symbol ?setContainerChanged\@RandomizableBlockActorContainer\@\@UEAAXH\@Z
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @symbol ?startOpen\@RandomizableBlockActorContainer\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RandomizableBlockActorContainer();
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
    );
    // NOLINTEND
};
