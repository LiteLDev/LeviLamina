#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandManager;
class HashedString;
class IActorManagerConnector;
class IDeregisterTagsFromActorProxy;
// clang-format on

class TagCacheManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk919191;
    ::ll::UntypedStorage<8, 24> mUnk87584e;
    ::ll::UntypedStorage<8, 8> mUnk8c7ba1;
    ::ll::UntypedStorage<8, 16> mUnke1eb64;
    // NOLINTEND

public:
    // prevent constructor by default
    TagCacheManager& operator=(TagCacheManager const&);
    TagCacheManager(TagCacheManager const&);
    TagCacheManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TagCacheManager(::Bedrock::NonOwnerPointer<::CommandManager> commandManager, ::std::unique_ptr<::IDeregisterTagsFromActorProxy> deregisterTagsFromActorProxy);

    MCNAPI void _deregisterTagsFromActor(::Actor& actor);

    MCNAPI void decrementTagCache(::std::string const& tag);

    MCNAPI void incrementTagCache(::std::string const& tag);

    MCNAPI void initialize(::IActorManagerConnector& actorManagerConnector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::CommandManager> commandManager, ::std::unique_ptr<::IDeregisterTagsFromActorProxy> deregisterTagsFromActorProxy);
    // NOLINTEND

};
