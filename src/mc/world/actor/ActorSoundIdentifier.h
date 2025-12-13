#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFetcher;
class RenderParams;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
// clang-format on

class ActorSoundIdentifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9699ae;
    ::ll::UntypedStorage<8, 24> mUnk9b5ddf;
    ::ll::UntypedStorage<8, 8>  mUnk45de13;
    ::ll::UntypedStorage<1, 1>  mUnkdcfc8e;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSoundIdentifier& operator=(ActorSoundIdentifier const&);
    ActorSoundIdentifier(ActorSoundIdentifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ActorSoundIdentifier();

    MCNAPI explicit ActorSoundIdentifier(::Actor const& actor);

    MCNAPI ActorSoundIdentifier(
        ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> actorFetcher,
        ::ActorDefinitionIdentifier const&                  identifier,
        ::ActorUniqueID                                     actorid,
        bool                                                isBaby
    );

    MCNAPI_C ::std::optional<::RenderParams> tryCreateRenderParamsForVariants() const;

    MCNAPI ~ActorSoundIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI void* $ctor(::Actor const& actor);

    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ActorFetcher const> actorFetcher,
        ::ActorDefinitionIdentifier const&                  identifier,
        ::ActorUniqueID                                     actorid,
        bool                                                isBaby
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
