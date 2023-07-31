#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util { class EntityComponentProcessor; }
// clang-format on

class BlockCollisionBoxProcessor {

public:
    // prevent constructor by default
    BlockCollisionBoxProcessor& operator=(BlockCollisionBoxProcessor const&) = delete;
    BlockCollisionBoxProcessor(BlockCollisionBoxProcessor const&)            = delete;
    BlockCollisionBoxProcessor()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?_tryBake\@BlockCollisionBoxProcessor\@\@SAXAEBVMatrix\@\@PEAUBlockCollisionBoxComponent\@\@\@Z
     */
    MCAPI static void _tryBake(class Matrix const&, struct BlockCollisionBoxComponent*);
    /**
     * @symbol
     * ?getProcessor\@BlockCollisionBoxProcessor\@\@SA?AV?$unique_ptr\@VEntityComponentProcessor\@Util\@\@U?$default_delete\@VEntityComponentProcessor\@Util\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI static std::unique_ptr<class Util::EntityComponentProcessor> getProcessor();
    // NOLINTEND
};
