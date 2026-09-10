#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/sound/SoundMapping.h"
#include "mc/client/sound/VolumeMultipliers.h"
#include "mc/deps/audio/SoundEventRepository.h"
#include "mc/deps/audio/SoundPauseSource.h"
#include "mc/deps/audio/SoundPlayerInterface.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class IReadWriteOptions;
class LinkedAssetValidator;
class ResourceLoadManager;
class ResourcePackManager;
class ServerSoundHandle;
class SoundEvent;
class SoundItem;
class SoundSystemBase;
class StreamingAudioExperiment;
class TextToSpeechClient;
class Vec3;
struct ListenerState;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Audio { class OnlineAudioStreamManager; }
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class SoundEngine : public ::SoundPlayerInterface {
public:
    // SoundEngine inner types define
    enum class MusicVolumeSource : uint64 {
        CurrentTrack = 0,
        Option       = 1,
        MusicCommand = 2,
        BiomeDuck    = 3,
        JukeboxDuck  = 4,
        Count        = 5,
    };

    using SoundEventQueue = ::std::vector<::std::pair<::std::string, ::std::shared_ptr<::SoundEvent>>>;

    using ListenerStatesSpan = ::gsl::span<::std::pair<int, ::ListenerState>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::SoundSystemBase>> const> mSoundSystem;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<uint64>>                               mFrameUniqueSoundSet;
    ::ll::TypedStorage<8, 144, ::SoundEventRepository>                                    mSoundEventRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IReadWriteOptions>>                     mOptions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::TextToSpeechClient>>                    mTTSClient;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mMainVolumeOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mSoundVolumeOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mMusicVolumeOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mTextToSpeechVolumeOptionSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mOnPauseStateChangeSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>> mSoundCategoryVolumeOptionSubscriptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePackManager>>   mResourceManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>>  mLinkedAssetValidator;
    ::ll::TypedStorage<4, 140, ::VolumeMultipliers<5>>                             mMusicVolumeMultipliers;
    ::ll::TypedStorage<4, 4, float>                                                mMainVolume;
    ::ll::TypedStorage<4, 4, float>                                                mTTSVolume;
    ::ll::TypedStorage<1, 1, bool>                                                 mMuted;
    ::ll::TypedStorage<1, 1, bool>                                                 mFadeToStopMusic;
    ::ll::TypedStorage<8, 392, ::SoundMapping>                                     mSounds;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Audio::OnlineAudioStreamManager>> mOnlineStreamManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StreamingAudioExperiment> const>  mStreamingExperiment;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>>      mFileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>           mFileAccess;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                   mDataPath;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                  mResourceLoadManagerMutex;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourceLoadManager>>   mResourceLoadManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundEngine() /*override*/ = default;

    virtual void pauseMusic(bool state) /*override*/;

    virtual uint64 play(
        ::std::string const&                 name,
        ::Vec3 const&                        pos,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    ) /*override*/;

    virtual uint64 play(::PlaySoundOptions options) /*override*/;

    virtual void stop(::std::string const& name) /*override*/;

    virtual void stop(uint64 handle) /*override*/;

    virtual void stop(::ServerSoundHandle serverSoundHandle) /*override*/;

    virtual void setVolume(::ServerSoundHandle serverSoundHandle, float volume) /*override*/;

    virtual void setPitch(::ServerSoundHandle serverSoundHandle, float pitch) /*override*/;

    virtual void fade(::ServerSoundHandle serverSoundHandle, float duration, float targetVolume) /*override*/;

    virtual void setPlaybackPosition(::ServerSoundHandle serverSoundHandle, float seconds) /*override*/;

    virtual void pause(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source) /*override*/;

    virtual void resume(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source) /*override*/;

    virtual void stopAllSounds() /*override*/;

    virtual void pauseAllPlayingSounds(::SoundPauseSource source) /*override*/;

    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource source) /*override*/;

    virtual ::std::optional<::std::string> getSubtitle(::std::string const& name) const /*override*/;

    virtual uint64 playUI(::std::string const& name, float volume, float pitch) /*override*/;

    virtual void playMusic(::std::string const& eventName, float volume, uint& playlistIndex) /*override*/;

    virtual void playMusic(::std::string const& eventName, float volume) /*override*/;

    virtual bool isLoadingMusic() const /*override*/;

    virtual bool isPlayingMusicEvent(::std::string const& eventName) const /*override*/;

    virtual bool isPlayingMusic(::Core::PathView soundPath) const /*override*/;

    virtual void fadeToStopMusic(float fadeSeconds) /*override*/;

    virtual void setMusicCommandVolumeMultiplier(float volumeMultiplier) /*override*/;

    virtual void fadeOut(uint64 handle, float duration) /*override*/;

    virtual void stopMusic() /*override*/;

    virtual uint64 registerLoop(
        ::std::string const&                        name,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    ) /*override*/;

    virtual void unregisterLoop(uint64 handle, bool hard) /*override*/;

    virtual bool isPlayingSound(uint64 handle) const /*override*/;

    virtual bool isPlayingSound(::Core::Path const& soundName) const /*override*/;

    virtual bool isPlayingSound(::ServerSoundHandle serverSoundHandle) const /*override*/;

    virtual uint64 playAttached(
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    ) /*override*/;

    virtual bool getItem(::std::string const& eventName, ::Core::PathView soundPath, ::SoundItem& soundItem) const
        /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getCurrentlyPlayingMusicPath() /*override*/;

    virtual void displaySoundEngineStats(::std::string& debugOutputFormat) const;

    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const /*override*/;

    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadSoundEvents(
        ::std::vector<::std::pair<::std::string, ::std::shared_ptr<::SoundEvent>>>& soundEvents,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>                          validator
    );

    MCAPI bool
    _tryPlayMusicFromStreamingExperiment(::std::string const& eventName, ::SoundItem const& soundItem, float volume);

    MCAPI void load(
        bool,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>                          validator,
        ::std::shared_ptr<::std::vector<::Bedrock::Resources::PreloadedPathHandle>> preloadHandles
    );

    MCAPI uint64 playFromMemory(
        ::Core::Path const& soundName,
        char const*         data,
        uint64              dataSize,
        bool                is3D,
        float               minDistance,
        float               maxDistance,
        float               volume,
        float               pitch,
        bool                useLegacyMaxDistance,
        bool                isTTS
    );

    MCAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCAPI void setOptions(::std::shared_ptr<::IReadWriteOptions> options);

    MCAPI void setTTSClient(::std::shared_ptr<::TextToSpeechClient> ttsClient);

    MCAPI void update(::gsl::span<::std::pair<int, ::ListenerState>> listenerStates, float elapsedTime);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $pauseMusic(bool state);

    MCAPI uint64 $play(
        ::std::string const&                 name,
        ::Vec3 const&                        pos,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    );

    MCAPI uint64 $play(::PlaySoundOptions options);

    MCAPI void $stop(::std::string const& name);

    MCAPI void $stop(uint64 handle);

    MCAPI void $stop(::ServerSoundHandle serverSoundHandle);

    MCAPI void $setVolume(::ServerSoundHandle serverSoundHandle, float volume);

    MCAPI void $setPitch(::ServerSoundHandle serverSoundHandle, float pitch);

    MCAPI void $fade(::ServerSoundHandle serverSoundHandle, float duration, float targetVolume);

    MCAPI void $setPlaybackPosition(::ServerSoundHandle serverSoundHandle, float seconds);

    MCAPI void $pause(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    MCAPI void $resume(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    MCAPI void $stopAllSounds();

    MCAPI void $pauseAllPlayingSounds(::SoundPauseSource source);

    MCAPI void $resumeAllPreviouslyPlayingSounds(::SoundPauseSource source);

    MCAPI ::std::optional<::std::string> $getSubtitle(::std::string const& name) const;

    MCAPI uint64 $playUI(::std::string const& name, float volume, float pitch);

    MCAPI void $playMusic(::std::string const& eventName, float volume, uint& playlistIndex);

    MCAPI void $playMusic(::std::string const& eventName, float volume);

    MCAPI bool $isLoadingMusic() const;

    MCAPI bool $isPlayingMusicEvent(::std::string const& eventName) const;

    MCAPI bool $isPlayingMusic(::Core::PathView soundPath) const;

    MCAPI void $fadeToStopMusic(float fadeSeconds);

    MCAPI void $setMusicCommandVolumeMultiplier(float volumeMultiplier);

    MCAPI void $fadeOut(uint64 handle, float duration);

    MCAPI void $stopMusic();

    MCAPI uint64 $registerLoop(
        ::std::string const&                        name,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    );

    MCAPI void $unregisterLoop(uint64 handle, bool hard);

    MCAPI bool $isPlayingSound(uint64 handle) const;

    MCAPI bool $isPlayingSound(::Core::Path const& soundName) const;

    MCAPI bool $isPlayingSound(::ServerSoundHandle serverSoundHandle) const;

    MCAPI uint64 $playAttached(
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    );

    MCAPI bool $getItem(::std::string const& eventName, ::Core::PathView soundPath, ::SoundItem& soundItem) const;

    MCAPI ::Core::PathBuffer<::std::string> const& $getCurrentlyPlayingMusicPath();

    MCAPI void $displaySoundEngineStats(::std::string& debugOutputFormat) const;

    MCAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64 handle) const;

    MCAPI ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64 handle) const;
    // NOLINTEND
};
