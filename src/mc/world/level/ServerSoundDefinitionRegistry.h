#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
struct AudioContentPlaybackRegistration;
struct ServerSoundDefinitionLocalOffline;
struct ServerSoundDefinitionOnlineAudio;
struct ServerSoundDefinitionPlayer;
struct ServerSoundDefinitionWorld;
namespace ServerSoundRuntime { struct Definition; }
namespace SharedTypes::v1_26_60::Sound { struct ServerSoundDefinitionDocument; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ServerSoundDefinitionRegistry {
public:
    // ServerSoundDefinitionRegistry inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // ServerSoundDefinitionRegistry inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk6baf90;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc6ff5f;
    ::ll::UntypedStorage<8, 16> mUnkb92808;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundDefinitionRegistry& operator=(ServerSoundDefinitionRegistry const&);
    ServerSoundDefinitionRegistry(ServerSoundDefinitionRegistry const&);
    ServerSoundDefinitionRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addDefinitions(
        ::std::variant<
            ::ServerSoundDefinitionWorld,
            ::ServerSoundDefinitionOnlineAudio,
            ::ServerSoundDefinitionPlayer,
            ::ServerSoundDefinitionLocalOffline> const&               source,
        ::SharedTypes::v1_26_60::Sound::ServerSoundDefinitionDocument document,
        ::std::shared_ptr<::AudioContentPlaybackRegistration const>   audioContentPlaybackRegistration
    );

    MCNAPI void addAudioContentDefinitions(
        ::ServerSoundDefinitionOnlineAudio const&                     source,
        ::SharedTypes::v1_26_60::Sound::ServerSoundDefinitionDocument document,
        ::std::shared_ptr<::AudioContentPlaybackRegistration const>   audioContentPlaybackRegistration
    );

    MCNAPI void loadFromPacks(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager const& resourcePackManager);

    MCNAPI void removeDefinitionsForSource(
        ::std::variant<
            ::ServerSoundDefinitionWorld,
            ::ServerSoundDefinitionOnlineAudio,
            ::ServerSoundDefinitionPlayer,
            ::ServerSoundDefinitionLocalOffline> const& source
    );

    MCNAPI ::std::shared_ptr<::ServerSoundRuntime::Definition const> tryGet(::std::string const& soundEventName) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::SharedTypes::v1_26_60::Sound::ServerSoundDefinitionDocument>
    parseDefinitionDocument(::cereal::ReflectionCtx const& ctx, ::std::string fileData);
    // NOLINTEND
};
