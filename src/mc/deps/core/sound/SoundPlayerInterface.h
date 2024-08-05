#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
// clang-format on

class SoundPlayerInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    SoundPlayerInterface& operator=(SoundPlayerInterface const&);
    SoundPlayerInterface(SoundPlayerInterface const&);
    SoundPlayerInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SoundPlayerInterface() = default;

    // vIndex: 1
    virtual uint64 play(std::string const& name, class Vec3 const& pos, float volume, float pitch) = 0;

    // vIndex: 2
    virtual uint64 playUI(std::string const& name, float volume, float pitch) = 0;

    // vIndex: 3
    virtual void playMusic(std::string const& name, float volume, uint& index) = 0;

    // vIndex: 4
    virtual void playMusic(std::string const& name, float volume) = 0;

    // vIndex: 5
    virtual bool isLoadingMusic() const = 0;

    // vIndex: 6
    virtual bool isPlayingMusicEvent(std::string const& name) const = 0;

    // vIndex: 7
    virtual bool isPlayingMusic(class Core::Path const& soundName) const = 0;

    // vIndex: 8
    virtual void fadeToStopMusic(float) = 0;

    // vIndex: 9
    virtual void setMusicVolumeMultiplier(float) = 0;

    // vIndex: 10
    virtual void fadeOut(uint64 handle, float duration) = 0;

    // vIndex: 11
    virtual void stopMusic() = 0;

    // vIndex: 12
    virtual void stop(std::string const& name) = 0;

    // vIndex: 13
    virtual void stop(uint64 handle) = 0;

    // vIndex: 14
    virtual void stopAllSounds() = 0;

    // vIndex: 15
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName() = 0;

    // vIndex: 16
    virtual bool
    getItem(std::string const& eventName, class Core::Path const& soundName, class SoundItem& soundItem) const = 0;

    // vIndex: 17
    virtual uint64 registerLoop(
        std::string const&                             name,
        std::function<void(struct LoopingSoundState&)> getSoundState,
        float,
        float
    ) = 0;

    // vIndex: 18
    virtual void unregisterLoop(uint64 handle, bool) = 0;

    // vIndex: 19
    virtual bool isPlayingSound(uint64 handle) const = 0;

    // vIndex: 20
    virtual bool isPlayingSound(class Core::Path const&) const = 0;

    // vIndex: 21
    virtual uint64 playAttached(
        std::string const&                                     eventName,
        std::function<void(struct SoundInstanceProperties&)>&& getSoundProperties
    ) = 0;

    // vIndex: 22
    virtual void stopAllDelayedSoundActions() = 0;

    // vIndex: 23
    virtual std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const = 0;

    // vIndex: 24
    virtual std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const = 0;

    // NOLINTEND
};
