#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerSoundDefinitionRegistry;
struct AudioContentRegistration;
struct ServerSoundDefinitionPlayer;
namespace Audio { class IAudioContentVerifier; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerAudioContentRegistry {
public:
    // ServerAudioContentRegistry inner types declare
    // clang-format off
    struct RegisteredAudioContent;
    // clang-format on

    // ServerAudioContentRegistry inner types define
    enum class RegisterResult : int {
        Success                 = 0,
        VerificationFailed      = 1,
        UnsupportedSchema       = 2,
        InvalidServerDefinition = 3,
        ConflictingContent      = 4,
    };

    struct RegisteredAudioContent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk48c903;
        ::ll::UntypedStorage<8, 32> mUnk9cd471;
        ::ll::UntypedStorage<8, 24> mUnk858cde;
        ::ll::UntypedStorage<8, 24> mUnk408133;
        // NOLINTEND

    public:
        // prevent constructor by default
        RegisteredAudioContent& operator=(RegisteredAudioContent const&);
        RegisteredAudioContent(RegisteredAudioContent const&);
        RegisteredAudioContent();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~RegisteredAudioContent();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5fa103;
    ::ll::UntypedStorage<8, 64> mUnk807100;
    ::ll::UntypedStorage<8, 64> mUnkaa65f2;
    ::ll::UntypedStorage<8, 16> mUnk552830;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerAudioContentRegistry& operator=(ServerAudioContentRegistry const&);
    ServerAudioContentRegistry(ServerAudioContentRegistry const&);
    ServerAudioContentRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerAudioContentRegistry(
        ::Bedrock::NotNullNonOwnerPtr<::ServerSoundDefinitionRegistry> const& serverSoundDefinitionRegistry
    );

    MCNAPI bool
    _removeAudioContentOwner(::ServerSoundDefinitionPlayer const& owner, ::std::string const& audioContentId);

    MCNAPI ::ServerAudioContentRegistry::RegisterResult registerAudioContent(
        ::cereal::ReflectionCtx const&        ctx,
        ::ServerSoundDefinitionPlayer const&  owner,
        ::AudioContentRegistration            audioContentRegistration,
        ::Audio::IAudioContentVerifier const& verifier
    );

    MCNAPI void removeDefinitionsForOwner(::ServerSoundDefinitionPlayer const& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::ServerSoundDefinitionRegistry> const& serverSoundDefinitionRegistry);
    // NOLINTEND
};
