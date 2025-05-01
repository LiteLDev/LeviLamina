#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundFormat.h"

// auto generated forward declare list
// clang-format off
class SoundEvent;
class SoundItem;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
struct SoundSystemGUID;
namespace Core { class Path; }
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
    // vIndex: 0
    virtual ~SoundSystemBase() = default;

    // vIndex: 1
    virtual bool preinit();

    // vIndex: 2
    virtual void init();

    // vIndex: 3
    virtual void destroy();

    // vIndex: 4
    virtual void setOutputDevice(::SoundSystemGUID&);

    // vIndex: 5
    virtual void setAsyncLoadFunction(::std::function<void(::SoundItem const&, ::std::function<void()>)>);

    // vIndex: 6
    virtual void enable(bool);

    // vIndex: 7
    virtual void mute(bool);

    // vIndex: 8
    virtual bool addListener(int const);

    // vIndex: 9
    virtual void removeListener(int const);

    // vIndex: 10
    virtual void setListenerDirection(int const, ::glm::vec3 const&, ::glm::vec3 const&);

    // vIndex: 11
    virtual void setListenerPos(int const, float, float, float);

    // vIndex: 12
    virtual void setListenerVelocity(int const, float, float, float);

    // vIndex: 13
    virtual void setMainVolume(float);

    // vIndex: 14
    virtual void setMusicVolume(float);

    // vIndex: 15
    virtual void setSoundVolume(float);

    // vIndex: 16
    virtual void setSoundCategoryVolume(::std::string const&, float);

    // vIndex: 17
    virtual void setTTSVolume(float);

    // vIndex: 18
    virtual bool load(::Core::Path const&, bool);

    // vIndex: 19
    virtual bool loadRawFromMemory(::Core::Path const&, char const*, uint64, int, int, ::SoundFormat);

    // vIndex: 20
    virtual bool loadFromMemory(::Core::Path const&, char const*, uint64);

    // vIndex: 21
    virtual bool loadExternalEvent(::std::string const&);

    // vIndex: 22
    virtual void unload(::Core::Path const&);

    // vIndex: 23
    virtual void unloadAll();

    // vIndex: 24
    virtual bool isSoundLoaded(::Core::Path const&);

    // vIndex: 25
    virtual bool usesSoundBanks();

    // vIndex: 26
    virtual void loadSoundBank(::std::string const&, bool);

    // vIndex: 27
    virtual void unloadSoundBank(::std::string const&);

    // vIndex: 28
    virtual void play(::std::string const&);

    // vIndex: 29
    virtual void pause(::std::string const&);

    // vIndex: 31
    virtual void stop(::std::string const&);

    // vIndex: 30
    virtual void stop(uint64);

    // vIndex: 32
    virtual uint64 playEvent(::SoundEvent const&, ::std::string const&, float, float);

    // vIndex: 33
    virtual uint64 playEventAt(::SoundEvent const&, ::std::string const&, float, float, float, float, float);

    // vIndex: 34
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
        bool
    );

    // vIndex: 35
    virtual uint64
    playEventAttached(::SoundEvent const&, ::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&);

    // vIndex: 36
    virtual bool isPlayingSound(uint64) const;

    // vIndex: 37
    virtual void fadeOut(uint64, float) const;

    // vIndex: 38
    virtual void playMusic(::std::string const&, ::SoundItem const&);

    // vIndex: 39
    virtual bool isPlayingMusicEvent(::std::string const&) const;

    // vIndex: 40
    virtual bool isPlayingMusic(::Core::Path const&) const;

    // vIndex: 41
    virtual bool isLoadingMusic() const;

    // vIndex: 42
    virtual ::Core::PathBuffer<::std::string> const& getCurrentlyPlayingMusicName() const;

    // vIndex: 43
    virtual ::std::string getCurrentlyPlayingEventName() const;

    // vIndex: 44
    virtual void stopMusic();

    // vIndex: 45
    virtual void stopRecords();

    // vIndex: 46
    virtual void stopAllSounds();

    // vIndex: 47
    virtual void pauseAllPlayingSounds();

    // vIndex: 48
    virtual void resumeAllPreviouslyPlayingSounds();

    // vIndex: 49
    virtual void fadeMusicOut(float);

    // vIndex: 50
    virtual bool isMusicChannelPlaying() const;

    // vIndex: 51
    virtual void pauseMusic(bool);

    // vIndex: 52
    virtual void update(float);

    // vIndex: 53
    virtual uint64 registerLoop(
        ::SoundItem const&,
        ::std::weak_ptr<::SoundEvent> const,
        ::std::string const&,
        ::std::function<void(::LoopingSoundState&)>,
        float,
        float
    );

    // vIndex: 54
    virtual void unregisterLoop(uint64, bool);

    // vIndex: 55
    virtual void displayDebugStats(::std::string&) const;

    // vIndex: 56
    virtual void startSnapshot(::std::string const&);

    // vIndex: 57
    virtual void stopSnapshot(::std::string const&);

    // vIndex: 58
    virtual void stopAllSnapshots();

    // vIndex: 59
    virtual uint64 getNewSoundHandle();

    // vIndex: 60
    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const;

    // vIndex: 61
    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
