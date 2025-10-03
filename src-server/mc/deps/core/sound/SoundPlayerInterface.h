#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class SoundItem;
class Vec3;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Core { class Path; }
// clang-format on

class SoundPlayerInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SoundPlayerInterface() /*override*/ = default;

    // vIndex: 1
    virtual uint64 play(::std::string const&, ::Vec3 const&, float, float) = 0;

    // vIndex: 2
    virtual uint64 playUI(::std::string const&, float, float) = 0;

    // vIndex: 4
    virtual void playMusic(::std::string const&, float, uint&) = 0;

    // vIndex: 3
    virtual void playMusic(::std::string const&, float) = 0;

    // vIndex: 5
    virtual bool isLoadingMusic() const = 0;

    // vIndex: 6
    virtual bool isPlayingMusicEvent(::std::string const&) const = 0;

    // vIndex: 7
    virtual bool isPlayingMusic(::Core::Path const&) const = 0;

    // vIndex: 8
    virtual void fadeToStopMusic(float) = 0;

    // vIndex: 9
    virtual void setMusicCommandVolumeMultiplier(float) = 0;

    // vIndex: 10
    virtual void fadeOut(uint64, float) = 0;

    // vIndex: 11
    virtual void stopMusic() = 0;

    // vIndex: 13
    virtual void stop(::std::string const&) = 0;

    // vIndex: 12
    virtual void stop(uint64) = 0;

    // vIndex: 14
    virtual void stopAllSounds() = 0;

    // vIndex: 15
    virtual void pauseAllPlayingSounds() = 0;

    // vIndex: 16
    virtual void resumeAllPreviouslyPlayingSounds() = 0;

    // vIndex: 17
    virtual void pauseMusic(bool) = 0;

    // vIndex: 18
    virtual ::Core::PathBuffer<::std::string> const getCurrentlyPlayingMusicName() = 0;

    // vIndex: 19
    virtual bool getItem(::std::string const&, ::Core::Path const&, ::SoundItem&) const = 0;

    // vIndex: 20
    virtual uint64 registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float) = 0;

    // vIndex: 21
    virtual void unregisterLoop(uint64, bool) = 0;

    // vIndex: 23
    virtual bool isPlayingSound(uint64) const = 0;

    // vIndex: 22
    virtual bool isPlayingSound(::Core::Path const&) const = 0;

    // vIndex: 24
    virtual uint64 playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&) = 0;

    // vIndex: 25
    virtual void stopAllDelayedSoundActions() = 0;

    // vIndex: 26
    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const = 0;

    // vIndex: 27
    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
