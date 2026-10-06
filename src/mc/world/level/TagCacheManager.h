#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandManager;
class IActorManagerConnector;
class IDeregisterTagsFromActorProxy;
// clang-format on

class TagCacheManager {
public:
    // TagCacheManager inner types define
    using TagCache = ::std::unordered_map<::HashedString, uint>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, uint>>              mTagCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::CommandManager> const>      mCommandManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IDeregisterTagsFromActorProxy> const> mDeregisterTagsFromActorProxy;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mOnRemoveActorEntityReferences;
    // NOLINTEND

public:
    // prevent constructor by default
    TagCacheManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TagCacheManager(
        ::Bedrock::NonOwnerPointer<::CommandManager>       commandManager,
        ::std::unique_ptr<::IDeregisterTagsFromActorProxy> deregisterTagsFromActorProxy
    );

    MCAPI void _deregisterTagsFromActor(::Actor& actor);

    MCAPI void decrementTagCache(::std::string const& tag);

    MCAPI void incrementTagCache(::std::string const& tag);

    MCAPI void initialize(::IActorManagerConnector& actorManagerConnector);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NonOwnerPointer<::CommandManager>       commandManager,
        ::std::unique_ptr<::IDeregisterTagsFromActorProxy> deregisterTagsFromActorProxy
    );
    // NOLINTEND
};
