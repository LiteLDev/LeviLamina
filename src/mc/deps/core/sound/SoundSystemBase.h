#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundFormat.h"

// auto generated forward declare list
// clang-format off
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
struct SoundSystemGUID;
namespace Core { class Path; }
namespace Core { class PathView; }
class SoundEvent;
class SoundItem;
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

    virtual void setAsyncLoadFunction(::std::function<void(::SoundItem const&, ::std::function<void()>)> asyncLoad);

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

    virtual bool load(::Core::Path const& soundName, bool isStream);

    virtual bool loadRawFromMemory(
        ::Core::Path const& soundName,
        char const*         data,
        uint64              dataSize,
        int                 numchannels,
        int                 defaultfrequency,
        ::SoundFormat       format
    );

    virtual bool loadFromMemory(::Core::Path const& soundName, char const* data, uint64 dataSize);

    virtual bool loadExternalEvent(::std::string const& soundName);

    virtual void unload(::Core::Path const& soundName);

    virtual void unloadAll();

    virtual bool isSoundLoaded(::Core::Path const& name);

    virtual bool usesSoundBanks();

    virtual void loadSoundBank(::std::string const& name, bool isNonBlocking);

    virtual void unloadSoundBank(::std::string const& name);

    virtual void play(::std::string const& name);

    virtual void pause(::std::string const& name);

    virtual void stop(::std::string const& name);

    virtual void stop(uint64 handle);

    virtual uint64 playEvent(::SoundEvent const& soundEvent, ::std::string const& eventName, float volume, float pitch);

    virtual uint64 playEventAt(
        ::SoundEvent const&  soundEvent,
        ::std::string const& eventName,
        float                x,
        float                y,
        float                z,
        float                volume,
        float                pitch
    );

    virtual uint64 playAt(
        ::Core::Path const&  soundName,
        ::SoundEvent const*  soundEvent,
        ::std::string const& eventName,
        uint64               soundHandle,
        float                x,
        float                y,
        float                z,
        float                volume,
        float                pitch,
        bool                 is3D,
        float                minDistance,
        float                maxDistance,
        bool                 useLegacyMaxDistance,
        bool                 isTTS
    );

    virtual uint64 playEventAttached(
        ::SoundEvent const&                                 soundEvent,
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    );

    virtual bool isPlayingSound(uint64 handle) const;

    virtual void fadeOut(uint64 handle, float duration) const;

    virtual void playMusic(::std::string const& eventName, ::SoundItem const& soundItem);

    virtual bool isPlayingMusicEvent(::std::string const& eventName) const;

    virtual bool isPlayingMusic(::Core::PathView soundName) const;

    virtual bool isLoadingMusic() const;

    virtual void cancelLoadMusic();

    virtual ::Core::PathBuffer<::std::string> const& getCurrentlyPlayingMusicName() const;

    virtual ::std::string getCurrentlyPlayingEventName() const;

    virtual void stopMusic();

    virtual void stopRecords();

    virtual void stopAllSounds();

    virtual void pauseAllPlayingSounds();

    virtual void resumeAllPreviouslyPlayingSounds();

    virtual void fadeMusicOut(float time);

    virtual bool isMusicChannelPlaying() const;

    virtual void pauseMusic(bool state);

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

    virtual void startSnapshot(::std::string const& name);

    virtual void stopSnapshot(::std::string const& name);

    virtual void stopAllSnapshots();

    virtual uint64 getNewSoundHandle();

    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const;

    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $preinit();

    MCNAPI void $init();

    MCNAPI void $destroy();

    MCNAPI void $setOutputDevice(::SoundSystemGUID& outputDevice);

    MCNAPI void $setAsyncLoadFunction(::std::function<void(::SoundItem const&, ::std::function<void()>)> asyncLoad);

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

    MCNAPI bool $load(::Core::Path const& soundName, bool isStream);

    MCNAPI bool $loadRawFromMemory(
        ::Core::Path const& soundName,
        char const*         data,
        uint64              dataSize,
        int                 numchannels,
        int                 defaultfrequency,
        ::SoundFormat       format
    );

    MCNAPI bool $loadFromMemory(::Core::Path const& soundName, char const* data, uint64 dataSize);

    MCNAPI bool $loadExternalEvent(::std::string const& soundName);

    MCNAPI void $unload(::Core::Path const& soundName);

    MCNAPI void $unloadAll();

    MCNAPI bool $isSoundLoaded(::Core::Path const& name);

    MCNAPI bool $usesSoundBanks();

    MCNAPI void $loadSoundBank(::std::string const& name, bool isNonBlocking);

    MCNAPI void $unloadSoundBank(::std::string const& name);

    MCNAPI void $play(::std::string const& name);

    MCNAPI void $pause(::std::string const& name);

    MCNAPI void $stop(::std::string const& name);

    MCNAPI void $stop(uint64 handle);

    MCNAPI uint64 $playEvent(::SoundEvent const& soundEvent, ::std::string const& eventName, float volume, float pitch);

    MCNAPI uint64 $playEventAt(
        ::SoundEvent const&  soundEvent,
        ::std::string const& eventName,
        float                x,
        float                y,
        float                z,
        float                volume,
        float                pitch
    );

    MCNAPI uint64 $playAt(
        ::Core::Path const&  soundName,
        ::SoundEvent const*  soundEvent,
        ::std::string const& eventName,
        uint64               soundHandle,
        float                x,
        float                y,
        float                z,
        float                volume,
        float                pitch,
        bool                 is3D,
        float                minDistance,
        float                maxDistance,
        bool                 useLegacyMaxDistance,
        bool                 isTTS
    );

    MCNAPI uint64 $playEventAttached(
        ::SoundEvent const&                                 soundEvent,
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    );

    MCNAPI bool $isPlayingSound(uint64 handle) const;

    MCNAPI void $fadeOut(uint64 handle, float duration) const;

    MCNAPI void $playMusic(::std::string const& eventName, ::SoundItem const& soundItem);

    MCNAPI bool $isPlayingMusicEvent(::std::string const& eventName) const;

    MCNAPI bool $isPlayingMusic(::Core::PathView soundName) const;

    MCNAPI bool $isLoadingMusic() const;

    MCNAPI void $cancelLoadMusic();

    MCNAPI ::Core::PathBuffer<::std::string> const& $getCurrentlyPlayingMusicName() const;

    MCNAPI ::std::string $getCurrentlyPlayingEventName() const;

    MCNAPI void $stopMusic();

    MCNAPI void $stopRecords();

    MCNAPI void $stopAllSounds();

    MCNAPI void $pauseAllPlayingSounds();

    MCNAPI void $resumeAllPreviouslyPlayingSounds();

    MCNAPI void $fadeMusicOut(float time);

    MCNAPI bool $isMusicChannelPlaying() const;

    MCNAPI void $pauseMusic(bool state);

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

    MCNAPI void $startSnapshot(::std::string const& name);

    MCNAPI void $stopSnapshot(::std::string const& name);

    MCNAPI void $stopAllSnapshots();

    MCNAPI uint64 $getNewSoundHandle();

    MCNAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64 handle) const;

    MCNAPI ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64 handle) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
