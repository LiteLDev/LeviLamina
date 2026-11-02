#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/SoundPauseSource.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundFormat.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class SoundEvent;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayMusicOptions;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Audio { class IStreamableAudioAsset; }
namespace Audio { class OnlineAudioStream; }
namespace Audio { class SoundStartOptions; }
namespace Core { class Path; }
namespace Core { class PathView; }
class SoundItem;
struct SoundLoadTask;
struct SoundSystemGUID;
// clang-format on

class SoundSystemBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka195be;
    ::ll::UntypedStorage<8, 64> mUnk9cb548;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundSystemBase& operator=(SoundSystemBase const&);
    SoundSystemBase(SoundSystemBase const&);
    SoundSystemBase();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~SoundSystemBase() = default;
#else // LL_PLAT_C
    virtual ~SoundSystemBase();
#endif

    virtual bool preinit();

    virtual void init();

    virtual void destroy();

    virtual void setOutputDevice(::SoundSystemGUID& outputDevice);

    virtual void setAsyncLoadFunction(::std::function<void(::SoundLoadTask)> asyncLoad);

    virtual void enable(bool status);

    virtual void mute(bool muted);

    virtual bool addListener(int const handle);

    virtual void removeListener(int const handle);

    virtual void setListenerDirection(int const listenerHandle, ::glm::vec3 const& forward, ::glm::vec3 const& up);

    virtual void setListenerPos(int const listenerHandle, float x, float y, float z);

    virtual void setListenerVelocity(int const listenerHandle, float x, float y, float z);

    virtual void setMainVolume(float vol);

    virtual void setMusicVolume(float vol);

    virtual void setSoundVolume(float vol);

    virtual void setSoundCategoryVolume(::std::string const& category, float vol);

    virtual void setTTSVolume(float vol);

    virtual bool loadRawFromMemory(
        ::Core::Path const& soundPath,
        char const*         data,
        uint64              dataSize,
        int                 numchannels,
        int                 defaultfrequency,
        ::SoundFormat       format
    );

    virtual bool loadFromMemory(::Core::Path const& soundPath, char const* data, uint64 dataSize);

    virtual void unload(::Core::Path const& soundPath);

    virtual void unloadAllExcept(::std::vector<::Core::PathBuffer<::std::string>> const& exceptions);

    virtual void stop(::std::string const& eventName);

    virtual void stop(uint64 handle);

    virtual void stop(::ServerSoundHandle serverSoundHandle);

    virtual uint64 playEvent(::SoundEvent const& soundEvent, ::std::string const& eventName, float volume, float pitch);

    virtual uint64 playEventAt(
        ::SoundEvent const&                  soundEvent,
        ::std::string const&                 eventName,
        float                                x,
        float                                y,
        float                                z,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    );

    virtual uint64 playEventAt(::SoundEvent const& soundEvent, ::PlaySoundOptions const& options);

    virtual uint64 playStreamableEventAt(
        ::SoundEvent const&                               soundEvent,
        ::SoundItem const&                                soundItem,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset,
        ::PlaySoundOptions const&                         options
    );

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
    );

    virtual uint64 playEventAttached(
        ::SoundEvent const&                                 soundEvent,
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    );

    virtual bool isPlayingSound(uint64 handle) const;

    virtual bool isPlayingSound(::Core::Path const& soundPath) const;

    virtual bool isPlayingSound(::ServerSoundHandle serverSoundHandle) const;

    virtual bool isSoundActive(uint64 handle) const;

    virtual bool wasSoundStoppedExplicitly(::ServerSoundHandle serverSoundHandle) const;

    virtual void setVolume(::ServerSoundHandle serverSoundHandle, float volume);

    virtual void setPitch(::ServerSoundHandle serverSoundHandle, float pitch);

    virtual void fade(::ServerSoundHandle serverSoundHandle, float duration, float targetVolume);

    virtual void setPlaybackPosition(::ServerSoundHandle serverSoundHandle, float seconds);

    virtual void setPlaybackPosition(uint64 soundHandle, float seconds);

    virtual void pause(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    virtual void pause(uint64 soundHandle, ::SoundPauseSource source);

    virtual void resume(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    virtual void resume(uint64 soundHandle, ::SoundPauseSource source);

    virtual void signalStart(uint64 soundHandle);

    virtual void fadeOut(uint64 handle, float duration) const;

    virtual void playMusic(::PlayMusicOptions options, ::SoundItem const& soundItem);

    virtual uint64 playStreamableMusic(
        ::std::string const&                              eventName,
        ::SoundItem const&                                soundItem,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset
    );

    virtual bool isPlayingMusicEvent(::std::string const& eventName) const;

    virtual bool isPlayingMusic(::Core::PathView soundPath) const;

    virtual bool isLoadingMusic() const;

    virtual void cancelLoadMusic();

    virtual ::Core::PathView getCurrentlyPlayingMusicPath() const;

    virtual ::std::string getCurrentlyPlayingEventName() const;

    virtual void stopMusic();

    virtual void stopRecords();

    virtual void stopAllSounds();

    virtual void pauseAllPlayingSounds(::SoundPauseSource source);

    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource source);

    virtual void fadeMusicOut(float time);

    virtual bool isMusicChannelPlaying() const;

    virtual void pauseMusic(bool paused);

    virtual void update(float elapsedTime);

    virtual uint64 registerLoop(
        ::SoundItem const&                          soundItem,
        ::std::weak_ptr<::SoundEvent> const         soundEvent,
        ::std::string const&                        eventName,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    );

    virtual void unregisterLoop(uint64 handle, bool hard);

    virtual void displayDebugStats(::std::string& debugOutputFormat) const;

    virtual uint64 getNewSoundHandle();

    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const;

    virtual ::std::optional<::PlayingSoundAttributes>
    tryGetPlayingSoundAttributes(::ServerSoundHandle serverSoundHandle) const;

    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const;

    virtual uint64 createRawUISoundStream(int bitDepth, int channels, float samplingRate);

    virtual void closeRawUISoundStream(uint64 handle);

    virtual void playRawUISoundStream(uint64 handle);

    virtual void pauseRawUISoundStream(uint64 handle);

    virtual void feedRawUISoundStream(uint64 handle, int samples, float** pcm, int channels);

    virtual void endRawUISoundStream(uint64 handle);

    virtual void setRawUISoundStreamVolume(uint64 handle, float volume);

    virtual void flushRawUISoundStreamData(uint64 handle);

    virtual uint64 playOnlineMusic(
        ::std::string const&                  eventName,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        ::Audio::SoundStartOptions            startOptions
    );

    virtual uint64 playOnlineMusic(
        ::std::string const&                  eventName,
        ::SoundItem const&                    soundItem,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        ::Audio::SoundStartOptions            startOptions
    );

    virtual uint64 playOnlineSound(
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        float                                 pitch,
        ::Audio::SoundStartOptions            startOptions
    );

    virtual uint64 playOnlineSound(
        ::SoundEvent const&                   soundEvent,
        ::SoundItem const&                    soundItem,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        ::PlaySoundOptions const&             options,
        ::Audio::SoundStartOptions            startOptions
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $preinit();

    MCNAPI void $init();

    MCNAPI void $destroy();

    MCNAPI void $setOutputDevice(::SoundSystemGUID& outputDevice);

    MCNAPI void $setAsyncLoadFunction(::std::function<void(::SoundLoadTask)> asyncLoad);

    MCNAPI void $enable(bool status);

    MCNAPI void $mute(bool muted);

    MCNAPI bool $addListener(int const handle);

    MCNAPI void $removeListener(int const handle);

    MCNAPI void $setListenerDirection(int const listenerHandle, ::glm::vec3 const& forward, ::glm::vec3 const& up);

    MCNAPI void $setListenerPos(int const listenerHandle, float x, float y, float z);

    MCNAPI void $setListenerVelocity(int const listenerHandle, float x, float y, float z);

    MCNAPI void $setMainVolume(float vol);

    MCNAPI void $setMusicVolume(float vol);

    MCNAPI void $setSoundVolume(float vol);

    MCNAPI void $setSoundCategoryVolume(::std::string const& category, float vol);

    MCNAPI void $setTTSVolume(float vol);

    MCNAPI bool $loadRawFromMemory(
        ::Core::Path const& soundPath,
        char const*         data,
        uint64              dataSize,
        int                 numchannels,
        int                 defaultfrequency,
        ::SoundFormat       format
    );

    MCNAPI bool $loadFromMemory(::Core::Path const& soundPath, char const* data, uint64 dataSize);

    MCNAPI void $unload(::Core::Path const& soundPath);

    MCNAPI void $unloadAllExcept(::std::vector<::Core::PathBuffer<::std::string>> const& exceptions);

    MCNAPI void $stop(::std::string const& eventName);

    MCNAPI void $stop(uint64 handle);

    MCNAPI void $stop(::ServerSoundHandle serverSoundHandle);

    MCNAPI uint64 $playEvent(::SoundEvent const& soundEvent, ::std::string const& eventName, float volume, float pitch);

    MCNAPI uint64 $playEventAt(
        ::SoundEvent const&                  soundEvent,
        ::std::string const&                 eventName,
        float                                x,
        float                                y,
        float                                z,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    );

    MCNAPI uint64 $playEventAt(::SoundEvent const& soundEvent, ::PlaySoundOptions const& options);

    MCNAPI uint64 $playStreamableEventAt(
        ::SoundEvent const&                               soundEvent,
        ::SoundItem const&                                soundItem,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset,
        ::PlaySoundOptions const&                         options
    );

    MCNAPI uint64 $playAt(
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

    MCNAPI uint64 $playEventAttached(
        ::SoundEvent const&                                 soundEvent,
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    );

    MCNAPI bool $isPlayingSound(uint64 handle) const;

    MCNAPI bool $isPlayingSound(::Core::Path const& soundPath) const;

    MCNAPI bool $isPlayingSound(::ServerSoundHandle serverSoundHandle) const;

    MCNAPI bool $isSoundActive(uint64 handle) const;

    MCNAPI bool $wasSoundStoppedExplicitly(::ServerSoundHandle serverSoundHandle) const;

    MCNAPI void $setVolume(::ServerSoundHandle serverSoundHandle, float volume);

    MCNAPI void $setPitch(::ServerSoundHandle serverSoundHandle, float pitch);

    MCNAPI void $fade(::ServerSoundHandle serverSoundHandle, float duration, float targetVolume);

    MCNAPI void $setPlaybackPosition(::ServerSoundHandle serverSoundHandle, float seconds);

    MCNAPI void $setPlaybackPosition(uint64 soundHandle, float seconds);

    MCNAPI void $pause(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    MCNAPI void $pause(uint64 soundHandle, ::SoundPauseSource source);

    MCNAPI void $resume(::ServerSoundHandle serverSoundHandle, ::SoundPauseSource source);

    MCNAPI void $resume(uint64 soundHandle, ::SoundPauseSource source);

    MCNAPI void $signalStart(uint64 soundHandle);

    MCNAPI void $fadeOut(uint64 handle, float duration) const;

    MCNAPI void $playMusic(::PlayMusicOptions options, ::SoundItem const& soundItem);

    MCNAPI uint64 $playStreamableMusic(
        ::std::string const&                              eventName,
        ::SoundItem const&                                soundItem,
        ::std::unique_ptr<::Audio::IStreamableAudioAsset> streamableAudioAsset
    );

    MCNAPI bool $isPlayingMusicEvent(::std::string const& eventName) const;

    MCNAPI bool $isPlayingMusic(::Core::PathView soundPath) const;

    MCNAPI bool $isLoadingMusic() const;

    MCNAPI void $cancelLoadMusic();

    MCNAPI ::Core::PathView $getCurrentlyPlayingMusicPath() const;

    MCNAPI ::std::string $getCurrentlyPlayingEventName() const;

    MCNAPI void $stopMusic();

    MCNAPI void $stopRecords();

    MCNAPI void $stopAllSounds();

    MCNAPI void $pauseAllPlayingSounds(::SoundPauseSource source);

    MCNAPI void $resumeAllPreviouslyPlayingSounds(::SoundPauseSource source);

    MCNAPI void $fadeMusicOut(float time);

    MCNAPI bool $isMusicChannelPlaying() const;

    MCNAPI void $pauseMusic(bool paused);

    MCNAPI void $update(float elapsedTime);

    MCNAPI uint64 $registerLoop(
        ::SoundItem const&                          soundItem,
        ::std::weak_ptr<::SoundEvent> const         soundEvent,
        ::std::string const&                        eventName,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    );

    MCNAPI void $unregisterLoop(uint64 handle, bool hard);

    MCNAPI void $displayDebugStats(::std::string& debugOutputFormat) const;

    MCNAPI uint64 $getNewSoundHandle();

    MCNAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64 handle) const;

    MCNAPI ::std::optional<::PlayingSoundAttributes>
    $tryGetPlayingSoundAttributes(::ServerSoundHandle serverSoundHandle) const;

    MCNAPI ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64 handle) const;

    MCNAPI uint64 $createRawUISoundStream(int bitDepth, int channels, float samplingRate);

    MCNAPI void $closeRawUISoundStream(uint64 handle);

    MCNAPI void $playRawUISoundStream(uint64 handle);

    MCNAPI void $pauseRawUISoundStream(uint64 handle);

    MCNAPI void $feedRawUISoundStream(uint64 handle, int samples, float** pcm, int channels);

    MCNAPI void $endRawUISoundStream(uint64 handle);

    MCNAPI void $setRawUISoundStreamVolume(uint64 handle, float volume);

    MCNAPI void $flushRawUISoundStreamData(uint64 handle);

    MCNAPI uint64 $playOnlineMusic(
        ::std::string const&                  eventName,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        ::Audio::SoundStartOptions            startOptions
    );

    MCNAPI uint64 $playOnlineMusic(
        ::std::string const&                  eventName,
        ::SoundItem const&                    soundItem,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        ::Audio::SoundStartOptions            startOptions
    );

    MCNAPI uint64 $playOnlineSound(
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        float                                 volume,
        float                                 pitch,
        ::Audio::SoundStartOptions            startOptions
    );

    MCNAPI uint64 $playOnlineSound(
        ::SoundEvent const&                   soundEvent,
        ::SoundItem const&                    soundItem,
        ::WeakRef<::Audio::OnlineAudioStream> stream,
        ::PlaySoundOptions const&             options,
        ::Audio::SoundStartOptions            startOptions
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
