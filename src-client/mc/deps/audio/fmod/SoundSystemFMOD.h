#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/SoundPauseSource.h"
#include "mc/deps/audio/SoundSystemBase.h"
#include "mc/deps/audio/fmod/FileSystemFMOD.h"
#include "mc/deps/audio/fmod/SoundInstanceListFMOD.h"
#include "mc/deps/audio/fmod/SoundLoaderFMOD.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundFormat.h"
#include "mc/deps/core/utility/Owner.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class DiskSoundSourceFMOD;
class FMODSoundReleaseQueue;
class ResourceLoader;
class ServerSoundHandle;
class SoundCacheFMOD;
class SoundCacheKeyFMOD;
class SoundEvent;
class SoundItem;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayMusicOptions;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
struct SoundLoadTask;
struct SoundSystemGUID;
namespace Audio { class IAudioAssetProvider; }
namespace Audio { class IStreamableAudioAsset; }
namespace Audio { class OnlineAudioStream; }
namespace Audio { class SoundStartOptions; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace FMOD { class Channel; }
namespace FMOD { class ChannelGroup; }
namespace FMOD { class Sound; }
namespace FMOD { class System; }
// clang-format on

class SoundSystemFMOD : public ::SoundSystemBase {
public:
    // SoundSystemFMOD inner types declare
    // clang-format off
    struct StreamInfo;
    // clang-format on

    // SoundSystemFMOD inner types define
    struct StreamInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::FMOD::Channel*>      mChannel;
        ::ll::TypedStorage<8, 8, ::FMOD::Sound*>        mSound;
        ::ll::TypedStorage<8, 8, uint64>                mHandle;
        ::ll::TypedStorage<4, 4, int>                   mByteDepth;
        ::ll::TypedStorage<4, 4, int>                   mChannels;
        ::ll::TypedStorage<4, 4, int>                   mSamplingRate;
        ::ll::TypedStorage<4, 4, int>                   mDecodeBufferSize;
        ::ll::TypedStorage<8, 24, ::std::vector<float>> mSwapBuffer;
        ::ll::TypedStorage<8, 80, ::std::mutex>         mDataLock;
        ::ll::TypedStorage<4, 4, uint>                  mWriteCursor;
        ::ll::TypedStorage<4, 4, uint>                  mReadCursor;
        ::ll::TypedStorage<8, 24, ::std::vector<float>> mData;
        ::ll::TypedStorage<1, 1, bool>                  mHasReceivedAllData;
        ::ll::TypedStorage<4, 4, float>                 mVolumeOnPause;
        // NOLINTEND
    };

    using LockType = ::std::mutex;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::FMOD::System*>           mSystem;
    ::ll::TypedStorage<8, 32, ::Bedrock::Owner<uint64>> mSoundUniqueID;
    ::ll::TypedStorage<8, 40, ::SoundInstanceListFMOD>  mActiveSounds;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::unique_ptr<::SoundSystemFMOD::StreamInfo>>>
                                                                                mStreamingSounds;
    ::ll::TypedStorage<8, 8, uint64>                                            mLoopingSoundUniqueID;
    ::ll::TypedStorage<8, 8, uint64>                                            mStreamingSoundUniqueID;
    ::ll::TypedStorage<1, 1, bool>                                              mEnabled;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup*>                             mPrimaryChannelGroup;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup*>                             mSoundChannelGroup;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup*>                             mMusicChannelGroup;
    ::ll::TypedStorage<8, 8, ::FMOD::ChannelGroup*>                             mTTSChannelGroup;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::FMOD::ChannelGroup*>> mSoundCategoryChannelGroups;
    ::ll::TypedStorage<1, 1, ::FileSystemFMOD>                                  mFileSystem;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::FMODSoundReleaseQueue>> const> mSoundReleaseQueue;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::SoundCacheFMOD>> const>         mSoundCache;
    ::ll::TypedStorage<8, 8, ::ResourceLoader&>                                                  mResourceLoader;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::Bedrock::UniqueOwnerPointer<::Audio::IAudioAssetProvider const>> const>
                                                                      mAudioAssetProvider;
    ::ll::TypedStorage<8, 144, ::SoundLoaderFMOD>                     mSoundLoader;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mDataUrl;
    ::ll::TypedStorage<8, 8, uint64>                                  mThreadMask;
    ::ll::TypedStorage<8, 64, ::std::function<void(::SoundLoadTask)>> mAsyncLoad;
    ::ll::TypedStorage<4, 4, float>                                   mEvictionStatTimer;
    ::ll::TypedStorage<8, 8, uint64>                                  mCurrentEvictionRate;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundSystemFMOD& operator=(SoundSystemFMOD const&);
    SoundSystemFMOD(SoundSystemFMOD const&);
    SoundSystemFMOD();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundSystemFMOD() /*override*/ = default;

    virtual bool preinit() /*override*/;

    virtual void init() /*override*/;

    virtual void destroy() /*override*/;

    virtual void setOutputDevice(::SoundSystemGUID& outputDevice) /*override*/;

    virtual void setAsyncLoadFunction(::std::function<void(::SoundLoadTask)> asyncLoad) /*override*/;

    virtual void enable(bool status) /*override*/;

    virtual void mute(bool muted) /*override*/;

    virtual bool addListener(int const handle) /*override*/;

    virtual void removeListener(int const handle) /*override*/;

    virtual void setMainVolume(float vol) /*override*/;

    virtual void setMusicVolume(float vol) /*override*/;

    virtual void setSoundVolume(float vol) /*override*/;

    virtual void setSoundCategoryVolume(::std::string const& category, float vol) /*override*/;

    virtual void setTTSVolume(float vol) /*override*/;

    virtual bool loadRawFromMemory(
        ::Core::Path const& soundPath,
        char const*         data,
        uint64              dataSize,
        int                 numchannels,
        int                 defaultfrequency,
        ::SoundFormat       format
    ) /*override*/;

    virtual bool loadFromMemory(::Core::Path const& soundPath, char const* data, uint64 dataSize) /*override*/;

    virtual void unload(::Core::Path const& soundPath) /*override*/;

    virtual void unloadAllExcept(::std::vector<::Core::PathBuffer<::std::string>> const& exceptions) /*override*/;

    virtual void stop(::std::string const& eventName) /*override*/;

    virtual void stop(uint64 handle) /*override*/;

    virtual void stop(::ServerSoundHandle serverSoundHandle) /*override*/;

    virtual void setVolume(::ServerSoundHandle serverSoundHandle, float volume) /*override*/;

    virtual void setPitch(::ServerSoundHandle serverSoundHandle, float pitch) /*override*/;

    virtual void fade(::ServerSoundHandle serverSoundHandle, float duration, float targetVolume) /*override*/;

    virtual void setPlaybackPosition(::ServerSoundHandle serverSoundHandle, float seconds) /*override*/;

    virtual void setPlaybackPosition(uint64 soundHandle, float seconds) /*override*/;

    virtual void pause(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source) /*override*/;

    virtual void pause(uint64 soundHandle, ::SoundPauseSource source) /*override*/;

    virtual void resume(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source) /*override*/;

    virtual void resume(uint64 soundHandle, ::SoundPauseSource source) /*override*/;

    virtual void signalStart(uint64 soundHandle) /*override*/;

    virtual void stopAllSounds() /*override*/;

    virtual void pauseAllPlayingSounds(::SoundPauseSource source) /*override*/;

    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource source) /*override*/;

    virtual void fadeOut(uint64 handle, float duration) const /*override*/;

    virtual uint64
    playEvent(::SoundEvent const& soundEvent, ::std::string const& eventName, float volume, float pitch) /*override*/;

    virtual uint64 playEventAt(
        ::SoundEvent const&                  soundEvent,
        ::std::string const&                 eventName,
        float                                x,
        float                                y,
        float                                z,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    ) /*override*/;

    virtual uint64 playEventAt(::SoundEvent const& soundEvent, ::PlaySoundOptions const& options) /*override*/;

    virtual uint64 playStreamableEventAt(
        ::SoundEvent const&                               soundEvent,
        ::SoundItem const&                                soundItem,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset,
        ::PlaySoundOptions const&                         options
    ) /*override*/;

    virtual uint64 playEventAttached(
        ::SoundEvent const&                                 soundEvent,
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    ) /*override*/;

    virtual uint64 playAt(
        ::Core::Path const&                  soundPath,
        ::SoundEvent const*                  soundEvent,
        ::std::string const&                 eventName,
        uint64                               soundHandle,
        float                                x,
        float                                y,
        float                                z,
        float                                volume,
        float                                pitch,
        bool                                 is3D,
        float                                minDistance,
        float                                maxDistance,
        bool                                 useLegacyMaxDistance,
        bool                                 isTTS,
        ::std::optional<::ServerSoundHandle> serverSoundHandle,
        int                                  loopCount,
        float                                volumeBase
    ) /*override*/;

    virtual void playMusic(::PlayMusicOptions options, ::SoundItem const& soundItem) /*override*/;

    virtual uint64 playStreamableMusic(
        ::std::string const&                              eventName,
        ::SoundItem const&                                soundItem,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset
    ) /*override*/;

    virtual void pauseMusic(bool paused) /*override*/;

    virtual void stopMusic() /*override*/;

    virtual void fadeMusicOut(float time) /*override*/;

    virtual bool isMusicChannelPlaying() const /*override*/;

    virtual bool isPlayingMusicEvent(::std::string const& eventName) const /*override*/;

    virtual bool isPlayingMusic(::Core::PathView soundPath) const /*override*/;

    virtual bool isLoadingMusic() const /*override*/;

    virtual void cancelLoadMusic() /*override*/;

    virtual ::Core::PathView getCurrentlyPlayingMusicPath() const /*override*/;

    virtual ::std::string getCurrentlyPlayingEventName() const /*override*/;

    virtual void update(float elapsedTime) /*override*/;

    virtual void playSound(
        float                 x,
        float                 y,
        float                 z,
        float                 volume,
        float                 pitch,
        ::FMOD::ChannelGroup* channelGroup,
        ::FMOD::Channel*&     channel,
        ::FMOD::Sound*&       soundToPlay,
        bool                  is3D,
        float                 minDistance,
        float                 maxDistance,
        bool                  useLegacyMaxDistance,
        int                   loopCount
    );

    virtual ::FMOD::Sound* getFirstSubSound(::std::shared_ptr<::FMOD::Sound> const& sound) const;

    virtual bool isPlayingSound(uint64 handle) const /*override*/;

    virtual bool isPlayingSound(::Core::Path const& soundPath) const /*override*/;

    virtual bool isPlayingSound(::ServerSoundHandle serverSoundHandle) const /*override*/;

    virtual bool isSoundActive(uint64 handle) const /*override*/;

    virtual bool wasSoundStoppedExplicitly(::ServerSoundHandle serverSoundHandle) const /*override*/;

    virtual uint64 registerLoop(
        ::SoundItem const&                          soundItem,
        ::std::weak_ptr<::SoundEvent> const         soundEvent,
        ::std::string const&                        eventName,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    ) /*override*/;

    virtual void unregisterLoop(uint64 handle, bool hard) /*override*/;

    virtual void displayDebugStats(::std::string& debugOutputFormat) const /*override*/;

    virtual uint64 getNewSoundHandle() /*override*/;

    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const /*override*/;

    virtual ::std::optional<::PlayingSoundAttributes>
    tryGetPlayingSoundAttributes(::ServerSoundHandle serverSoundHandle) const /*override*/;

    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const /*override*/;

    virtual uint64 playOnlineMusic(
        ::std::string const&                  eventName,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        ::Audio::SoundStartOptions            startOptions
    ) /*override*/;

    virtual uint64 playOnlineMusic(
        ::std::string const&                  eventName,
        ::SoundItem const&                    soundItem,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        ::Audio::SoundStartOptions            startOptions
    ) /*override*/;

    virtual uint64 playOnlineSound(
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        float                                 pitch,
        ::Audio::SoundStartOptions            startOptions
    ) /*override*/;

    virtual uint64 playOnlineSound(
        ::SoundEvent const&                   soundEvent,
        ::SoundItem const&                    soundItem,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        ::PlaySoundOptions const&             options,
        ::Audio::SoundStartOptions            startOptions
    ) /*override*/;

    virtual uint64 createRawUISoundStream(int bitDepth, int channels, float samplingRate) /*override*/;

    virtual void closeRawUISoundStream(uint64 handle) /*override*/;

    virtual void playRawUISoundStream(uint64 handle) /*override*/;

    virtual void pauseRawUISoundStream(uint64 handle) /*override*/;

    virtual void feedRawUISoundStream(uint64 handle, int samples, float** pcm, int channels) /*override*/;

    virtual void endRawUISoundStream(uint64 handle) /*override*/;

    virtual void setRawUISoundStreamVolume(uint64 handle, float volume) /*override*/;

    virtual void flushRawUISoundStreamData(uint64 handle) /*override*/;

    virtual bool _createSystem();

    virtual bool _initSystem();

    virtual void _updateSystem(float elapsedTime);

    virtual void _destroySystem();

    virtual void _updateListenerAttributes();

    virtual void _setPositionalAttributes(
        ::FMOD::Channel* channel,
        ::FMOD::Sound*   sound,
        ::FMOD::Sound*   soundToPlay,
        float            x,
        float            y,
        float            z,
        float            volume
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SoundSystemFMOD(
        ::ResourceLoader&                                     resourceLoader,
        ::std::unique_ptr<::Audio::IAudioAssetProvider const> audioAssetProvider,
        ::Core::Path const&                                   tempFolderPath,
        ::Core::Path const&                                   dataUrl,
        uint64                                                threadMask
    );

    MCAPI void _loadSoundAsync(
        ::SoundItem const&                     soundItem,
        ::SoundCacheKeyFMOD                    soundCacheKey,
        ::std::weak_ptr<::DiskSoundSourceFMOD> weakSoundSource
    );

    MCAPI void _loadSoundAsync(
        ::Core::Path const&                               soundPath,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset,
        ::SoundCacheKeyFMOD                               soundCacheKey,
        ::std::weak_ptr<::DiskSoundSourceFMOD>            weakSoundSource
    );

    MCAPI uint64 _playAt(
        ::Core::Path const&                  soundPath,
        ::SoundEvent const*                  soundEvent,
        ::std::string const&                 eventName,
        uint64                               soundHandle,
        float                                x,
        float                                y,
        float                                z,
        float                                volume,
        float                                pitch,
        bool                                 is3D,
        float                                minDistance,
        float                                maxDistance,
        bool                                 useLegacyMaxDistance,
        bool                                 isTTS,
        ::std::optional<::ServerSoundHandle> serverSoundHandle,
        int                                  loopCount,
        float                                volumeBase,
        int                                  channelPriority
    );

    MCAPI uint64 _playEvent(
        ::SoundEvent const&                  soundEvent,
        ::std::string const&                 eventName,
        float                                volumeScalar,
        float                                pitchScalar,
        bool                                 is2D,
        float                                x,
        float                                y,
        float                                z,
        ::std::optional<::ServerSoundHandle> serverSoundHandle,
        int                                  loopCount,
        ::std::optional<float>               playbackPositionSeconds,
        int                                  channelPriority
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ResourceLoader&                                     resourceLoader,
        ::std::unique_ptr<::Audio::IAudioAssetProvider const> audioAssetProvider,
        ::Core::Path const&                                   tempFolderPath,
        ::Core::Path const&                                   dataUrl,
        uint64                                                threadMask
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $preinit();

    MCAPI void $init();

    MCAPI void $destroy();

    MCAPI void $setOutputDevice(::SoundSystemGUID& outputDevice);

    MCAPI void $setAsyncLoadFunction(::std::function<void(::SoundLoadTask)> asyncLoad);

    MCAPI void $enable(bool status);

    MCAPI void $mute(bool muted);

    MCAPI bool $addListener(int const handle);

    MCAPI void $removeListener(int const handle);

    MCAPI void $setMainVolume(float vol);

    MCAPI void $setMusicVolume(float vol);

    MCAPI void $setSoundVolume(float vol);

    MCAPI void $setSoundCategoryVolume(::std::string const& category, float vol);

    MCAPI void $setTTSVolume(float vol);

    MCAPI bool $loadRawFromMemory(
        ::Core::Path const& soundPath,
        char const*         data,
        uint64              dataSize,
        int                 numchannels,
        int                 defaultfrequency,
        ::SoundFormat       format
    );

    MCAPI bool $loadFromMemory(::Core::Path const& soundPath, char const* data, uint64 dataSize);

    MCAPI void $unload(::Core::Path const& soundPath);

    MCAPI void $unloadAllExcept(::std::vector<::Core::PathBuffer<::std::string>> const& exceptions);

    MCAPI void $stop(::std::string const& eventName);

    MCAPI void $stop(uint64 handle);

    MCAPI void $stop(::ServerSoundHandle serverSoundHandle);

    MCAPI void $setVolume(::ServerSoundHandle serverSoundHandle, float volume);

    MCAPI void $setPitch(::ServerSoundHandle serverSoundHandle, float pitch);

    MCAPI void $fade(::ServerSoundHandle serverSoundHandle, float duration, float targetVolume);

    MCAPI void $setPlaybackPosition(::ServerSoundHandle serverSoundHandle, float seconds);

    MCAPI void $setPlaybackPosition(uint64 soundHandle, float seconds);

    MCAPI void $pause(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    MCAPI void $pause(uint64 soundHandle, ::SoundPauseSource source);

    MCAPI void $resume(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    MCAPI void $resume(uint64 soundHandle, ::SoundPauseSource source);

    MCAPI void $signalStart(uint64 soundHandle);

    MCAPI void $stopAllSounds();

    MCAPI void $pauseAllPlayingSounds(::SoundPauseSource source);

    MCAPI void $resumeAllPreviouslyPlayingSounds(::SoundPauseSource source);

    MCAPI void $fadeOut(uint64 handle, float duration) const;

    MCAPI uint64 $playEvent(::SoundEvent const& soundEvent, ::std::string const& eventName, float volume, float pitch);

    MCAPI uint64 $playEventAt(
        ::SoundEvent const&                  soundEvent,
        ::std::string const&                 eventName,
        float                                x,
        float                                y,
        float                                z,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    );

    MCAPI uint64 $playEventAt(::SoundEvent const& soundEvent, ::PlaySoundOptions const& options);

    MCAPI uint64 $playStreamableEventAt(
        ::SoundEvent const&                               soundEvent,
        ::SoundItem const&                                soundItem,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset,
        ::PlaySoundOptions const&                         options
    );

    MCAPI uint64 $playEventAttached(
        ::SoundEvent const&                                 soundEvent,
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    );

    MCAPI uint64 $playAt(
        ::Core::Path const&                  soundPath,
        ::SoundEvent const*                  soundEvent,
        ::std::string const&                 eventName,
        uint64                               soundHandle,
        float                                x,
        float                                y,
        float                                z,
        float                                volume,
        float                                pitch,
        bool                                 is3D,
        float                                minDistance,
        float                                maxDistance,
        bool                                 useLegacyMaxDistance,
        bool                                 isTTS,
        ::std::optional<::ServerSoundHandle> serverSoundHandle,
        int                                  loopCount,
        float                                volumeBase
    );

    MCAPI void $playMusic(::PlayMusicOptions options, ::SoundItem const& soundItem);

    MCAPI uint64 $playStreamableMusic(
        ::std::string const&                              eventName,
        ::SoundItem const&                                soundItem,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset
    );

    MCAPI void $pauseMusic(bool paused);

    MCAPI void $stopMusic();

    MCAPI void $fadeMusicOut(float time);

    MCAPI bool $isMusicChannelPlaying() const;

    MCAPI bool $isPlayingMusicEvent(::std::string const& eventName) const;

    MCAPI bool $isPlayingMusic(::Core::PathView soundPath) const;

    MCAPI bool $isLoadingMusic() const;

    MCAPI void $cancelLoadMusic();

    MCAPI ::Core::PathView $getCurrentlyPlayingMusicPath() const;

    MCAPI ::std::string $getCurrentlyPlayingEventName() const;

    MCAPI void $update(float elapsedTime);

    MCAPI void $playSound(
        float                 x,
        float                 y,
        float                 z,
        float                 volume,
        float                 pitch,
        ::FMOD::ChannelGroup* channelGroup,
        ::FMOD::Channel*&     channel,
        ::FMOD::Sound*&       soundToPlay,
        bool                  is3D,
        float                 minDistance,
        float                 maxDistance,
        bool                  useLegacyMaxDistance,
        int                   loopCount
    );

    MCAPI ::FMOD::Sound* $getFirstSubSound(::std::shared_ptr<::FMOD::Sound> const& sound) const;

    MCAPI bool $isPlayingSound(uint64 handle) const;

    MCAPI bool $isPlayingSound(::Core::Path const& soundPath) const;

    MCAPI bool $isPlayingSound(::ServerSoundHandle serverSoundHandle) const;

    MCAPI bool $isSoundActive(uint64 handle) const;

    MCAPI bool $wasSoundStoppedExplicitly(::ServerSoundHandle serverSoundHandle) const;

    MCAPI uint64 $registerLoop(
        ::SoundItem const&                          soundItem,
        ::std::weak_ptr<::SoundEvent> const         soundEvent,
        ::std::string const&                        eventName,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    );

    MCAPI void $unregisterLoop(uint64 handle, bool hard);

    MCAPI void $displayDebugStats(::std::string& debugOutputFormat) const;

    MCAPI uint64 $getNewSoundHandle();

    MCAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64 handle) const;

    MCAPI ::std::optional<::PlayingSoundAttributes>
    $tryGetPlayingSoundAttributes(::ServerSoundHandle serverSoundHandle) const;

    MCAPI ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64 handle) const;

    MCAPI uint64 $playOnlineMusic(
        ::std::string const&                  eventName,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        ::Audio::SoundStartOptions            startOptions
    );

    MCAPI uint64 $playOnlineMusic(
        ::std::string const&                  eventName,
        ::SoundItem const&                    soundItem,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        ::Audio::SoundStartOptions            startOptions
    );

    MCAPI uint64 $playOnlineSound(
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        float                                 pitch,
        ::Audio::SoundStartOptions            startOptions
    );

    MCAPI uint64 $playOnlineSound(
        ::SoundEvent const&                   soundEvent,
        ::SoundItem const&                    soundItem,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        ::PlaySoundOptions const&             options,
        ::Audio::SoundStartOptions            startOptions
    );

    MCAPI uint64 $createRawUISoundStream(int bitDepth, int channels, float samplingRate);

    MCAPI void $closeRawUISoundStream(uint64 handle);

    MCAPI void $playRawUISoundStream(uint64 handle);

    MCAPI void $pauseRawUISoundStream(uint64 handle);

    MCAPI void $feedRawUISoundStream(uint64 handle, int samples, float** pcm, int channels);

    MCAPI void $endRawUISoundStream(uint64 handle);

    MCAPI void $setRawUISoundStreamVolume(uint64 handle, float volume);

    MCAPI void $flushRawUISoundStreamData(uint64 handle);

    MCAPI bool $_createSystem();

    MCAPI bool $_initSystem();

    MCAPI void $_updateSystem(float elapsedTime);

    MCAPI void $_destroySystem();

    MCAPI void $_updateListenerAttributes();

    MCAPI void $_setPositionalAttributes(
        ::FMOD::Channel* channel,
        ::FMOD::Sound*   sound,
        ::FMOD::Sound*   soundToPlay,
        float            x,
        float            y,
        float            z,
        float            volume
    );
    // NOLINTEND
};
