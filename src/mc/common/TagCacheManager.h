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
    MCAPI
    TagCacheManager(class StackRefResult<class CommandManager>, std::unique_ptr<class IDeregisterTagsFromActorProxy>);

    MCAPI void decrementTagCache(std::string const&);

    MCAPI void incrementTagCache(std::string const&);

    MCAPI void initialize(class ActorManager&);

    MCAPI ~TagCacheManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _deregisterTagsFromActor(class Actor&);

    // NOLINTEND
};
