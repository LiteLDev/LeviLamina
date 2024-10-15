#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"

class TagCacheManager {
public:
    // prevent constructor by default
    TagCacheManager& operator=(TagCacheManager const&);
    TagCacheManager(TagCacheManager const&);
    TagCacheManager();

public:
    // NOLINTBEGIN
    MCAPI TagCacheManager(
        class StackRefResult<class CommandManager>           commandManager,
        std::unique_ptr<class IDeregisterTagsFromActorProxy> deregisterTagsFromActorProxy
    );

    MCAPI void decrementTagCache(std::string const& tag);

    MCAPI void incrementTagCache(std::string const& tag);

    MCAPI void initialize(class ActorManager& actorManager);

    MCAPI ~TagCacheManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _deregisterTagsFromActor(class Actor& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class StackRefResult<class CommandManager>           commandManager,
        std::unique_ptr<class IDeregisterTagsFromActorProxy> deregisterTagsFromActorProxy
    );

    MCAPI void dtor$();

    // NOLINTEND
};
