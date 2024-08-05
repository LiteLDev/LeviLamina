#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
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
    virtual uint64 play(std::string const& name, class Vec3 const& pos, float volume, float pitch);

    // vIndex: 2
    virtual uint64 playUI(std::string const& name, float volume, float pitch);

    // vIndex: 3
    virtual void playMusic(std::string const& name, float volume, uint& index);

    // vIndex: 4
    virtual void playMusic(std::string const& name, float volume);

    // vIndex: 5
    virtual bool isLoadingMusic() const;

    // vIndex: 6
    virtual bool isPlayingMusicEvent(std::string const& name) const;

    // vIndex: 7
    virtual bool isPlayingMusic(class Core::Path const& soundName) const;

    // vIndex: 8
    virtual void fadeToStopMusic(float);

    // vIndex: 9
    virtual void setMusicVolumeMultiplier(float);

    // vIndex: 10
    virtual void fadeOut(uint64 handle, float duration);

    // vIndex: 11
    virtual void stopMusic();

    // vIndex: 12
    virtual void stop(std::string const& name);

    // vIndex: 13
    virtual void stop(uint64 handle);

    // vIndex: 14
    virtual void stopAllSounds();

    // vIndex: 15
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();

    // vIndex: 16
    virtual bool
    getItem(std::string const& eventName, class Core::Path const& soundName, class SoundItem& soundItem) const;

    // vIndex: 17
    virtual uint64
    registerLoop(std::string const& name, std::function<void(struct LoopingSoundState&)> getSoundState, float, float);

    // vIndex: 18
    virtual void unregisterLoop(uint64 handle, bool);

    // vIndex: 19
    virtual bool isPlayingSound(uint64 handle) const;

    // vIndex: 20
    virtual bool isPlayingSound(class Core::Path const&) const;

    // vIndex: 21
    virtual uint64 playAttached(
        std::string const&                                     eventName,
        std::function<void(struct SoundInstanceProperties&)>&& getSoundProperties
    );

    // vIndex: 22
    virtual void stopAllDelayedSoundActions();

    // vIndex: 23
    virtual std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const;

    // vIndex: 24
    virtual std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const;

    // NOLINTEND
};
