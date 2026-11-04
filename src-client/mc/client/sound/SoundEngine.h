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
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/game_refs/WeakRef.h"

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
class SoundLoadScheduler;
class SoundSystemBase;
class StreamingAudioExperiment;
class TextToSpeechClient;
class Vec3;
struct ListenerState;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayMusicOptions;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Audio { class OnlineAudioStream; }
namespace Audio { class OnlineAudioStreamManager; }
namespace Audio { class SoundStartOptions; }
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePackManager>>                mResourceManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LinkedAssetValidator>>               mLinkedAssetValidator;
    ::ll::TypedStorage<4, 140, ::VolumeMultipliers<5>>                                          mMusicVolumeMultipliers;
    ::ll::TypedStorage<4, 4, float>                                                             mMainVolume;
    ::ll::TypedStorage<4, 4, float>                                                             mTTSVolume;
    ::ll::TypedStorage<1, 1, bool>                                                              mMuted;
    ::ll::TypedStorage<1, 1, bool>                                                              mFadeToStopMusic;
    ::ll::TypedStorage<1, 1, bool>                                                              mSoundsReady;
    ::ll::TypedStorage<8, 392, ::SoundMapping>                                                  mSounds;
    ::ll::TypedStorage<8, 16, ::Bedrock::UniqueOwnerPointer<::Audio::OnlineAudioStreamManager>> mOnlineStreamManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::StreamingAudioExperiment> const>               mStreamingExperiment;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>>                   mFileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>                        mFileAccess;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                                mDataPath;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::SoundLoadScheduler>> const>    mSoundLoadScheduler;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                mResourceLoadManagerMutex;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourceLoadManager>> mResourceLoadManager;
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

    virtual void playMusic(::PlayMusicOptions options) /*override*/;

    virtual void playMusic(::PlayMusicOptions options, uint& playlistIndex) /*override*/;

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

    virtual bool wasSoundStoppedExplicitly(::ServerSoundHandle serverSoundHandle) const /*override*/;

    virtual uint64 playAttached(
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    ) /*override*/;

    virtual bool getItem(::std::string const& eventName, ::Core::PathView soundPath, ::SoundItem& soundItem) const
        /*override*/;

    virtual ::Core::PathView getCurrentlyPlayingMusicPath() const /*override*/;

    virtual void displaySoundEngineStats(::std::string& debugOutputFormat) const;

    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const /*override*/;

    virtual ::std::optional<::PlayingSoundAttributes>
    tryGetPlayingSoundAttributes(::ServerSoundHandle serverSoundHandle) const /*override*/;

    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _playMusic(::PlayMusicOptions options, ::SoundItem soundItem);

    MCNAPI void load(
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

    MCNAPI uint64 playOnlineMusic(
        ::std::string const&                  eventName,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        ::Audio::SoundStartOptions            startOptions
    );

    MCNAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCNAPI void releaseSoundFileHandles();

    MCNAPI void setOptions(::std::shared_ptr<::IReadWriteOptions> options);

    MCNAPI void setTTSClient(::std::shared_ptr<::TextToSpeechClient> ttsClient);

    MCNAPI void update(::gsl::span<::std::pair<int, ::ListenerState>> listenerStates, float elapsedTime);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $pauseMusic(bool state);

    MCNAPI uint64 $play(
        ::std::string const&                 name,
        ::Vec3 const&                        pos,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    );

    MCNAPI uint64 $play(::PlaySoundOptions options);

    MCNAPI void $stop(::std::string const& name);

    MCNAPI void $stop(uint64 handle);

    MCNAPI void $stop(::ServerSoundHandle serverSoundHandle);

    MCNAPI void $setVolume(::ServerSoundHandle serverSoundHandle, float volume);

    MCNAPI void $setPitch(::ServerSoundHandle serverSoundHandle, float pitch);

    MCNAPI void $fade(::ServerSoundHandle serverSoundHandle, float duration, float targetVolume);

    MCNAPI void $setPlaybackPosition(::ServerSoundHandle serverSoundHandle, float seconds);

    MCNAPI void $pause(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    MCNAPI void $resume(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    MCNAPI void $stopAllSounds();

    MCNAPI void $pauseAllPlayingSounds(::SoundPauseSource source);

    MCNAPI void $resumeAllPreviouslyPlayingSounds(::SoundPauseSource source);

    MCNAPI ::std::optional<::std::string> $getSubtitle(::std::string const& name) const;

    MCNAPI uint64 $playUI(::std::string const& name, float volume, float pitch);

    MCNAPI void $playMusic(::PlayMusicOptions options);

    MCNAPI void $playMusic(::PlayMusicOptions options, uint& playlistIndex);

    MCNAPI bool $isLoadingMusic() const;

    MCNAPI bool $isPlayingMusicEvent(::std::string const& eventName) const;

    MCNAPI bool $isPlayingMusic(::Core::PathView soundPath) const;

    MCNAPI void $fadeToStopMusic(float fadeSeconds);

    MCNAPI void $setMusicCommandVolumeMultiplier(float volumeMultiplier);

    MCNAPI void $fadeOut(uint64 handle, float duration);

    MCNAPI void $stopMusic();

    MCAPI uint64 $registerLoop(
        ::std::string const&                        name,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    );

    MCNAPI void $unregisterLoop(uint64 handle, bool hard);

    MCNAPI bool $isPlayingSound(uint64 handle) const;

    MCNAPI bool $isPlayingSound(::Core::Path const& soundName) const;

    MCNAPI bool $isPlayingSound(::ServerSoundHandle serverSoundHandle) const;

    MCNAPI bool $wasSoundStoppedExplicitly(::ServerSoundHandle serverSoundHandle) const;

    MCNAPI uint64 $playAttached(
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    );

    MCNAPI bool $getItem(::std::string const& eventName, ::Core::PathView soundPath, ::SoundItem& soundItem) const;

    MCNAPI ::Core::PathView $getCurrentlyPlayingMusicPath() const;

    MCNAPI void $displaySoundEngineStats(::std::string& debugOutputFormat) const;

    MCNAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64 handle) const;

    MCNAPI ::std::optional<::PlayingSoundAttributes>
    $tryGetPlayingSoundAttributes(::ServerSoundHandle serverSoundHandle) const;

    MCNAPI ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64 handle) const;
    // NOLINTEND
};
