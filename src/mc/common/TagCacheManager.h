#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"

class TagCacheManager {
public:
    // prevent constructor by default
    TagCacheManager& operator=(TagCacheManager const&);
    TagCacheManager(TagCacheManager const&);
    TagCacheManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0TagCacheManager@@QEAA@V?$StackRefResult@VCommandManager@@@@V?$unique_ptr@VIDeregisterTagsFromActorProxy@@U?$default_delete@VIDeregisterTagsFromActorProxy@@@std@@@std@@@Z
    MCAPI
    TagCacheManager(class StackRefResult<class CommandManager>, std::unique_ptr<class IDeregisterTagsFromActorProxy>);

    // symbol:
    // ?decrementTagCache@TagCacheManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void decrementTagCache(std::string const&);

    // symbol:
    // ?incrementTagCache@TagCacheManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void incrementTagCache(std::string const&);

    // symbol: ?initialize@TagCacheManager@@QEAAXAEAVActorManager@@@Z
    MCAPI void initialize(class ActorManager&);

    // symbol: ??1TagCacheManager@@QEAA@XZ
    MCAPI ~TagCacheManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_deregisterTagsFromActor@TagCacheManager@@AEAAXAEAVActor@@@Z
    MCAPI void _deregisterTagsFromActor(class Actor&);

    // NOLINTEND
};
