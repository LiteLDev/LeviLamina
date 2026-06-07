#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundFormat.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class SoundEvent;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Core { class Path; }
namespace Core { class PathView; }
class SoundItem;
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

#ifdef LL_PLAT_S
    virtual void setOutputDevice(::SoundSystemGUID&);
#else // LL_PLAT_C
    virtual void setOutputDevice(::SoundSystemGUID& outputDevice);
#endif

#ifdef LL_PLAT_S
    virtual void setAsyncLoadFunction(::std::function<void(::SoundItem const&, ::std::function<void()>)>);
#else // LL_PLAT_C
    virtual void setAsyncLoadFunction(::std::function<void(::SoundItem const&, ::std::function<void()>)> asyncLoad);
#endif

#ifdef LL_PLAT_S
    virtual void enable(bool);
#else // LL_PLAT_C
    virtual void enable(bool status);
#endif

#ifdef LL_PLAT_S
    virtual void mute(bool);
#else // LL_PLAT_C
    virtual void mute(bool muted);
#endif

#ifdef LL_PLAT_S
    virtual bool addListener(int const);
#else // LL_PLAT_C
    virtual bool addListener(int const handle);
#endif

#ifdef LL_PLAT_S
    virtual void removeListener(int const);
#else // LL_PLAT_C
    virtual void removeListener(int const handle);
#endif

#ifdef LL_PLAT_S
    virtual void setListenerDirection(int const, ::glm::vec3 const&, ::glm::vec3 const&);
#else // LL_PLAT_C
    virtual void setListenerDirection(int const listenerHandle, ::glm::vec3 const& forward, ::glm::vec3 const& up);
#endif

#ifdef LL_PLAT_S
    virtual void setListenerPos(int const, float, float, float);
#else // LL_PLAT_C
    virtual void setListenerPos(int const listenerHandle, float x, float y, float z);
#endif

#ifdef LL_PLAT_S
    virtual void setListenerVelocity(int const, float, float, float);
#else // LL_PLAT_C
    virtual void setListenerVelocity(int const listenerHandle, float x, float y, float z);
#endif

#ifdef LL_PLAT_S
    virtual void setMainVolume(float);
#else // LL_PLAT_C
    virtual void setMainVolume(float vol);
#endif

#ifdef LL_PLAT_S
    virtual void setMusicVolume(float);
#else // LL_PLAT_C
    virtual void setMusicVolume(float vol);
#endif

#ifdef LL_PLAT_S
    virtual void setSoundVolume(float);
#else // LL_PLAT_C
    virtual void setSoundVolume(float vol);
#endif

#ifdef LL_PLAT_S
    virtual void setSoundCategoryVolume(::std::string const&, float);
#else // LL_PLAT_C
    virtual void setSoundCategoryVolume(::std::string const& category, float vol);
#endif

#ifdef LL_PLAT_S
    virtual void setTTSVolume(float);
#else // LL_PLAT_C
    virtual void setTTSVolume(float vol);
#endif

#ifdef LL_PLAT_S
    virtual bool load(::Core::Path const&, bool);
#else // LL_PLAT_C
    virtual bool load(::Core::Path const& soundName, bool isStream);
#endif

#ifdef LL_PLAT_S
    virtual bool loadRawFromMemory(::Core::Path const&, char const*, uint64, int, int, ::SoundFormat);
#else // LL_PLAT_C
    virtual bool loadRawFromMemory(
        ::Core::Path const& soundName,
        char const*         data,
        uint64              dataSize,
        int                 numchannels,
        int                 defaultfrequency,
        ::SoundFormat       format
    );
#endif

#ifdef LL_PLAT_S
    virtual bool loadFromMemory(::Core::Path const&, char const*, uint64);
#else // LL_PLAT_C
    virtual bool loadFromMemory(::Core::Path const& soundName, char const* data, uint64 dataSize);
#endif

    virtual bool loadExternalEvent(::std::string const&);

#ifdef LL_PLAT_S
    virtual void unload(::Core::Path const&);
#else // LL_PLAT_C
    virtual void unload(::Core::Path const& soundName);
#endif

    virtual void unloadAll();

#ifdef LL_PLAT_S
    virtual bool isSoundLoaded(::Core::Path const&);
#else // LL_PLAT_C
    virtual bool isSoundLoaded(::Core::Path const& name);
#endif

    virtual bool usesSoundBanks();

    virtual void loadSoundBank(::std::string const&, bool);

    virtual void unloadSoundBank(::std::string const&);

    virtual void play(::std::string const&);

    virtual void pause(::std::string const&);

#ifdef LL_PLAT_S
    virtual void stop(::std::string const&);
#else // LL_PLAT_C
    virtual void stop(::std::string const& soundName);
#endif

#ifdef LL_PLAT_S
    virtual void stop(uint64);
#else // LL_PLAT_C
    virtual void stop(uint64 handle);
#endif

#ifdef LL_PLAT_S
    virtual uint64 playEvent(::SoundEvent const&, ::std::string const&, float, float);
#else // LL_PLAT_C
    virtual uint64 playEvent(::SoundEvent const& soundEvent, ::std::string const& eventName, float volume, float pitch);
#endif

#ifdef LL_PLAT_S
    virtual uint64 playEventAt(
        ::SoundEvent const&,
        ::std::string const&,
        float,
        float,
        float,
        float,
        float,
        ::std::optional<::ServerSoundHandle>
    );
#else // LL_PLAT_C
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
#endif

#ifdef LL_PLAT_S
    virtual uint64 playAt(
        ::Core::Path const&,
        ::SoundEvent const*,
        ::std::string const&,
        uint64,
        float,
        float,
        float,
        float,
        float,
        bool,
        float,
        float,
        bool,
        bool,
        ::std::optional<::ServerSoundHandle>
    );
#else // LL_PLAT_C
    virtual uint64 playAt(
        ::Core::Path const&                  soundName,
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
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    );
#endif

#ifdef LL_PLAT_S
    virtual uint64
    playEventAttached(::SoundEvent const&, ::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&);
#else // LL_PLAT_C
    virtual uint64 playEventAttached(
        ::SoundEvent const&                                 soundEvent,
        ::std::string const&                                eventName,
        ::std::function<void(::SoundInstanceProperties&)>&& getSoundProperties
    );
#endif

#ifdef LL_PLAT_S
    virtual bool isPlayingSound(uint64) const;
#else // LL_PLAT_C
    virtual bool isPlayingSound(uint64 handle) const;
#endif

#ifdef LL_PLAT_S
    virtual void fadeOut(uint64, float) const;
#else // LL_PLAT_C
    virtual void fadeOut(uint64 handle, float duration) const;
#endif

#ifdef LL_PLAT_S
    virtual void playMusic(::std::string const&, ::SoundItem const&);
#else // LL_PLAT_C
    virtual void playMusic(::std::string const& eventName, ::SoundItem const& soundItem);
#endif

#ifdef LL_PLAT_S
    virtual bool isPlayingMusicEvent(::std::string const&) const;
#else // LL_PLAT_C
    virtual bool isPlayingMusicEvent(::std::string const& eventName) const;
#endif

#ifdef LL_PLAT_S
    virtual bool isPlayingMusic(::Core::PathView) const;
#else // LL_PLAT_C
    virtual bool isPlayingMusic(::Core::PathView soundName) const;
#endif

    virtual bool isLoadingMusic() const;

    virtual void cancelLoadMusic();

    virtual ::Core::PathBuffer<::std::string> const& getCurrentlyPlayingMusicName() const;

    virtual ::std::string getCurrentlyPlayingEventName() const;

    virtual void stopMusic();

    virtual void stopRecords();

    virtual void stopAllSounds();

    virtual void pauseAllPlayingSounds();

    virtual void resumeAllPreviouslyPlayingSounds();

#ifdef LL_PLAT_S
    virtual void fadeMusicOut(float);
#else // LL_PLAT_C
    virtual void fadeMusicOut(float time);
#endif

    virtual bool isMusicChannelPlaying() const;

#ifdef LL_PLAT_S
    virtual void pauseMusic(bool);
#else // LL_PLAT_C
    virtual void pauseMusic(bool state);
#endif

#ifdef LL_PLAT_S
    virtual void update(float);
#else // LL_PLAT_C
    virtual void update(float elapsedTime);
#endif

#ifdef LL_PLAT_S
    virtual uint64 registerLoop(
        ::SoundItem const&,
        ::std::weak_ptr<::SoundEvent> const,
        ::std::string const&,
        ::std::function<void(::LoopingSoundState&)>,
        float,
        float
    );
#else // LL_PLAT_C
    virtual uint64 registerLoop(
        ::SoundItem const&                          soundItem,
        ::std::weak_ptr<::SoundEvent> const         soundEvent,
        ::std::string const&                        eventName,
        ::std::function<void(::LoopingSoundState&)> getSoundState,
        float                                       fadeInDuration,
        float                                       fadeOutDuration
    );
#endif

#ifdef LL_PLAT_S
    virtual void unregisterLoop(uint64, bool);
#else // LL_PLAT_C
    virtual void unregisterLoop(uint64 handle, bool hard);
#endif

#ifdef LL_PLAT_S
    virtual void displayDebugStats(::std::string&) const;
#else // LL_PLAT_C
    virtual void displayDebugStats(::std::string& debugOutputFormat) const;
#endif

    virtual void startSnapshot(::std::string const&);

    virtual void stopSnapshot(::std::string const&);

    virtual void stopAllSnapshots();

    virtual uint64 getNewSoundHandle();

#ifdef LL_PLAT_S
    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const;
#else // LL_PLAT_C
    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const;
#endif

#ifdef LL_PLAT_S
    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const;
#else // LL_PLAT_C
    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int getNumListeners();
#endif
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

    MCNAPI bool $loadExternalEvent(::std::string const&);

    MCNAPI void $unload(::Core::Path const& soundName);

    MCNAPI void $unloadAll();

    MCNAPI bool $isSoundLoaded(::Core::Path const& name);

    MCNAPI bool $usesSoundBanks();

    MCNAPI void $loadSoundBank(::std::string const&, bool);

    MCNAPI void $unloadSoundBank(::std::string const&);

    MCNAPI void $play(::std::string const&);

    MCNAPI void $pause(::std::string const&);

    MCNAPI void $stop(::std::string const& soundName);

    MCNAPI void $stop(uint64 handle);

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

    MCNAPI uint64 $playAt(
        ::Core::Path const&                  soundName,
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
        ::std::optional<::ServerSoundHandle> serverSoundHandle
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

    MCNAPI void $startSnapshot(::std::string const&);

    MCNAPI void $stopSnapshot(::std::string const&);

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
