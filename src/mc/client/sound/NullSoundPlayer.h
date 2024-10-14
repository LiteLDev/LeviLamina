#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundPlayerInterface.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class NullSoundPlayer : public ::SoundPlayerInterface {
public:
    // prevent constructor by default
    NullSoundPlayer& operator=(NullSoundPlayer const&);
    NullSoundPlayer(NullSoundPlayer const&);
    NullSoundPlayer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullSoundPlayer() = default;

    // vIndex: 1
    virtual uint64 play(std::string const&, class Vec3 const&, float, float);

    // vIndex: 2
    virtual uint64 playUI(std::string const&, float, float);

    // vIndex: 3
    virtual void playMusic(std::string const&, float, uint&);

    // vIndex: 4
    virtual void playMusic(std::string const&, float);

    // vIndex: 5
    virtual bool isLoadingMusic() const;

    // vIndex: 6
    virtual bool isPlayingMusicEvent(std::string const&) const;

    // vIndex: 7
    virtual bool isPlayingMusic(class Core::Path const&) const;

    // vIndex: 8
    virtual void fadeToStopMusic(float);

    // vIndex: 9
    virtual void setMusicVolumeMultiplier(float);

    // vIndex: 10
    virtual void fadeOut(uint64, float);

    // vIndex: 11
    virtual void stopMusic();

    // vIndex: 12
    virtual void stop(std::string const&);

    // vIndex: 13
    virtual void stop(uint64);

    // vIndex: 14
    virtual void stopAllSounds();

    // vIndex: 15
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();

    // vIndex: 16
    virtual bool getItem(std::string const&, class Core::Path const&, class SoundItem&) const;

    // vIndex: 17
    virtual uint64 registerLoop(std::string const&, std::function<void(struct LoopingSoundState&)>, float, float);

    // vIndex: 18
    virtual void unregisterLoop(uint64, bool);

    // vIndex: 19
    virtual bool isPlayingSound(uint64) const;

    // vIndex: 20
    virtual bool isPlayingSound(class Core::Path const&) const;

    // vIndex: 21
    virtual uint64 playAttached(std::string const&, std::function<void(struct SoundInstanceProperties&)>&&);

    // vIndex: 22
    virtual void stopAllDelayedSoundActions();

    // vIndex: 23
    virtual std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const;

    // vIndex: 24
    virtual std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void fadeOut$(uint64, float);

    MCAPI void fadeToStopMusic$(float);

    MCAPI class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName$();

    MCAPI bool getItem$(std::string const&, class Core::Path const&, class SoundItem&) const;

    MCAPI bool isLoadingMusic$() const;

    MCAPI bool isPlayingMusic$(class Core::Path const&) const;

    MCAPI bool isPlayingMusicEvent$(std::string const&) const;

    MCAPI bool isPlayingSound$(uint64) const;

    MCAPI bool isPlayingSound$(class Core::Path const&) const;

    MCAPI uint64 play$(std::string const&, class Vec3 const&, float, float);

    MCAPI uint64 playAttached$(std::string const&, std::function<void(struct SoundInstanceProperties&)>&&);

    MCAPI void playMusic$(std::string const&, float, uint&);

    MCAPI void playMusic$(std::string const&, float);

    MCAPI uint64 playUI$(std::string const&, float, float);

    MCAPI uint64 registerLoop$(std::string const&, std::function<void(struct LoopingSoundState&)>, float, float);

    MCAPI void setMusicVolumeMultiplier$(float);

    MCAPI void stop$(std::string const&);

    MCAPI void stop$(uint64);

    MCAPI void stopAllDelayedSoundActions$();

    MCAPI void stopAllSounds$();

    MCAPI void stopMusic$();

    MCAPI std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes$(uint64) const;

    MCAPI std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes$(uint64) const;

    MCAPI void unregisterLoop$(uint64, bool);

    // NOLINTEND
};
