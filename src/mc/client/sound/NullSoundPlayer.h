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

    // vIndex: 15
    virtual ::Core::PathBuffer<::std::string> const getCurrentlyPlayingMusicName() /*override*/;

    // vIndex: 16
    virtual bool getItem(::std::string const&, ::Core::Path const&, ::SoundItem&) const /*override*/;

    // vIndex: 8
    virtual void fadeToStopMusic(float) /*override*/;

    // vIndex: 9
    virtual void setMusicCommandVolumeMultiplier(float) /*override*/;

    // vIndex: 11
    virtual void stopMusic() /*override*/;

    // vIndex: 17
    virtual uint64
    registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float) /*override*/;

    // vIndex: 18
    virtual void unregisterLoop(uint64, bool) /*override*/;

    // vIndex: 13
    virtual void stop(::std::string const&) /*override*/;

    // vIndex: 12
    virtual void stop(uint64) /*override*/;

    // vIndex: 10
    virtual void fadeOut(uint64, float) /*override*/;

    // vIndex: 14
    virtual void stopAllSounds() /*override*/;

    // vIndex: 20
    virtual bool isPlayingSound(uint64) const /*override*/;

    // vIndex: 19
    virtual bool isPlayingSound(::Core::Path const&) const /*override*/;

    // vIndex: 21
    virtual uint64 playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&) /*override*/;

    // vIndex: 22
    virtual void stopAllDelayedSoundActions() /*override*/;

    // vIndex: 23
    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const /*override*/;

    // vIndex: 24
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
    MCFOLD uint64 $play(::std::string const&, ::Vec3 const&, float, float);

    MCFOLD uint64 $playUI(::std::string const&, float, float);

    MCFOLD void $playMusic(::std::string const&, float, uint&);

    MCFOLD void $playMusic(::std::string const&, float);

    MCFOLD bool $isLoadingMusic() const;

    MCFOLD bool $isPlayingMusicEvent(::std::string const&) const;

    MCFOLD bool $isPlayingMusic(::Core::Path const&) const;

    MCFOLD ::Core::PathBuffer<::std::string> const $getCurrentlyPlayingMusicName();

    MCFOLD bool $getItem(::std::string const&, ::Core::Path const&, ::SoundItem&) const;

    MCFOLD void $fadeToStopMusic(float);

    MCFOLD void $setMusicCommandVolumeMultiplier(float);

    MCFOLD void $stopMusic();

    MCAPI uint64 $registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float);

    MCFOLD void $unregisterLoop(uint64, bool);

    MCFOLD void $stop(::std::string const&);

    MCFOLD void $stop(uint64);

    MCFOLD void $fadeOut(uint64, float);

    MCFOLD void $stopAllSounds();

    MCFOLD bool $isPlayingSound(uint64) const;

    MCFOLD bool $isPlayingSound(::Core::Path const&) const;

    MCFOLD uint64 $playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&);

    MCFOLD void $stopAllDelayedSoundActions();

    MCAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64) const;

    MCFOLD ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
