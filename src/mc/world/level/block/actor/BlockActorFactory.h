#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockActorFactory {

public:
    // prevent constructor by default
    BlockActorFactory& operator=(BlockActorFactory const&) = delete;
    BlockActorFactory(BlockActorFactory const&)            = delete;
    BlockActorFactory()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createBlockEntity\@BlockActorFactory\@\@SA?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@W4BlockActorType\@\@AEBVBlockPos\@\@AEBVBlockLegacy\@\@\@Z
     */
    MCAPI static std::shared_ptr<class BlockActor>
    createBlockEntity(enum class BlockActorType, class BlockPos const&, class BlockLegacy const&);
    /**
     * @symbol ?flushCustomBlockEntityCreationCallbacks\@BlockActorFactory\@\@SAXXZ
     */
    MCAPI static void flushCustomBlockEntityCreationCallbacks();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mCustomBlockEntityCreation\@BlockActorFactory\@\@0V?$vector\@U?$pair\@W4BlockActorType\@\@V?$function\@$$A6A?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@\@Z\@std\@\@\@std\@\@V?$allocator\@U?$pair\@W4BlockActorType\@\@V?$function\@$$A6A?AV?$shared_ptr\@VBlockActor\@\@\@std\@\@AEBVBlockPos\@\@\@Z\@std\@\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::vector<
        std::pair<enum class BlockActorType, std::function<std::shared_ptr<class BlockActor>(class BlockPos const&)>>>
        mCustomBlockEntityCreation;
    // NOLINTEND
};
