#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundPlayerInterface.h"

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

class NullSoundPlayer : public ::SoundPlayerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual uint64 play(::std::string const&, ::Vec3 const&, float, float) /*override*/;

    // vIndex: 2
    virtual uint64 playUI(::std::string const&, float, float) /*override*/;

    // vIndex: 4
    virtual void playMusic(::std::string const&, float, uint&) /*override*/;

    // vIndex: 3
    virtual void playMusic(::std::string const&, float) /*override*/;

    // vIndex: 5
    virtual bool isLoadingMusic() const /*override*/;

    // vIndex: 6
    virtual bool isPlayingMusicEvent(::std::string const&) const /*override*/;

    // vIndex: 7
    virtual bool isPlayingMusic(::Core::Path const&) const /*override*/;

    // vIndex: 18
    virtual ::Core::PathBuffer<::std::string> const getCurrentlyPlayingMusicName() /*override*/;

    // vIndex: 19
    virtual bool getItem(::std::string const&, ::Core::Path const&, ::SoundItem&) const /*override*/;

    // vIndex: 8
    virtual void fadeToStopMusic(float) /*override*/;

    // vIndex: 9
    virtual void setMusicCommandVolumeMultiplier(float) /*override*/;

    // vIndex: 17
    virtual void pauseMusic(bool) /*override*/;

    // vIndex: 11
    virtual void stopMusic() /*override*/;

    // vIndex: 20
    virtual uint64
    registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float) /*override*/;

    // vIndex: 21
    virtual void unregisterLoop(uint64, bool) /*override*/;

    // vIndex: 13
    virtual void stop(::std::string const&) /*override*/;

    // vIndex: 12
    virtual void stop(uint64) /*override*/;

    // vIndex: 10
    virtual void fadeOut(uint64, float) /*override*/;

    // vIndex: 14
    virtual void stopAllSounds() /*override*/;

    // vIndex: 15
    virtual void pauseAllPlayingSounds() /*override*/;

    // vIndex: 16
    virtual void resumeAllPreviouslyPlayingSounds() /*override*/;

    // vIndex: 23
    virtual bool isPlayingSound(uint64) const /*override*/;

    // vIndex: 22
    virtual bool isPlayingSound(::Core::Path const&) const /*override*/;

    // vIndex: 24
    virtual uint64 playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&) /*override*/;

    // vIndex: 25
    virtual void stopAllDelayedSoundActions() /*override*/;

    // vIndex: 26
    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const /*override*/;

    // vIndex: 27
    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const /*override*/;

    // vIndex: 0
    virtual ~NullSoundPlayer() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $play(::std::string const&, ::Vec3 const&, float, float);

    MCNAPI uint64 $playUI(::std::string const&, float, float);

    MCNAPI void $playMusic(::std::string const&, float, uint&);

    MCNAPI void $playMusic(::std::string const&, float);

    MCNAPI bool $isLoadingMusic() const;

    MCNAPI bool $isPlayingMusicEvent(::std::string const&) const;

    MCNAPI bool $isPlayingMusic(::Core::Path const&) const;

    MCNAPI ::Core::PathBuffer<::std::string> const $getCurrentlyPlayingMusicName();

    MCNAPI bool $getItem(::std::string const&, ::Core::Path const&, ::SoundItem&) const;

    MCNAPI void $fadeToStopMusic(float);

    MCNAPI void $setMusicCommandVolumeMultiplier(float);

    MCNAPI void $pauseMusic(bool);

    MCNAPI void $stopMusic();

    MCNAPI uint64 $registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float);

    MCNAPI void $unregisterLoop(uint64, bool);

    MCNAPI void $stop(::std::string const&);

    MCNAPI void $stop(uint64);

    MCNAPI void $fadeOut(uint64, float);

    MCNAPI void $stopAllSounds();

    MCNAPI void $pauseAllPlayingSounds();

    MCNAPI void $resumeAllPreviouslyPlayingSounds();

    MCNAPI bool $isPlayingSound(uint64) const;

    MCNAPI bool $isPlayingSound(::Core::Path const&) const;

    MCNAPI uint64 $playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&);

    MCNAPI void $stopAllDelayedSoundActions();

    MCNAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64) const;

    MCNAPI ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
