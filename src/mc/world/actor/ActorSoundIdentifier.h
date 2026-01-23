#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFetcher;
class RenderParams;
struct ActorDefinitionIdentifier;
// clang-format on

class ActorSoundIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const&>                mIdentifier;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ActorFetcher const>> mActorFetcher;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                   mActorId;
    ::ll::TypedStorage<1, 1, bool>                                              mIsBaby;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSoundIdentifier& operator=(ActorSoundIdentifier const&);
    ActorSoundIdentifier(ActorSoundIdentifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorSoundIdentifier();

    MCAPI explicit ActorSoundIdentifier(::Actor const& actor);

    MCAPI ActorSoundIdentifier(
        ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> actorFetcher,
        ::ActorDefinitionIdentifier const&                  identifier,
        ::ActorUniqueID                                     actorid,
        bool                                                isBaby
    );

    MCAPI_C ::std::optional<::RenderParams> tryCreateRenderParamsForVariants() const;

    MCAPI ~ActorSoundIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Actor const& actor);

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> actorFetcher,
        ::ActorDefinitionIdentifier const&                  identifier,
        ::ActorUniqueID                                     actorid,
        bool                                                isBaby
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
