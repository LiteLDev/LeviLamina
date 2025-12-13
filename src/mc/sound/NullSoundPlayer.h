#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sound/SoundPlayerInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Core { class Path; }
struct SoundItem;
// clang-format on

class NullSoundPlayer : public ::SoundPlayerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint64 play(::std::string const&, ::Vec3 const&, float, float) /*override*/;

    virtual uint64 playUI(::std::string const&, float, float) /*override*/;

    virtual void playMusic(::std::string const&, float, uint&) /*override*/;

    virtual void playMusic(::std::string const&, float) /*override*/;

    virtual bool isLoadingMusic() const /*override*/;

    virtual bool isPlayingMusicEvent(::std::string const&) const /*override*/;

    virtual bool isPlayingMusic(::Core::Path const&) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const getCurrentlyPlayingMusicName() /*override*/;

    virtual bool getItem(::std::string const&, ::Core::Path const&, ::SoundItem&) const /*override*/;

    virtual void fadeToStopMusic(float) /*override*/;

    virtual void setMusicCommandVolumeMultiplier(float) /*override*/;

    virtual void pauseMusic(bool) /*override*/;

    virtual void stopMusic() /*override*/;

    virtual uint64
    registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float) /*override*/;

    virtual void unregisterLoop(uint64, bool) /*override*/;

    virtual void stop(::std::string const&) /*override*/;

    virtual void stop(uint64) /*override*/;

    virtual void fadeOut(uint64 soundHandle, float duration) /*override*/;

    virtual void stopAllSounds() /*override*/;

    virtual void pauseAllPlayingSounds() /*override*/;

    virtual void resumeAllPreviouslyPlayingSounds() /*override*/;

    virtual bool isPlayingSound(uint64) const /*override*/;

    virtual bool isPlayingSound(::Core::Path const&) const /*override*/;

    virtual uint64 playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&) /*override*/;

    virtual void stopAllDelayedSoundActions() /*override*/;

    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const /*override*/;

    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const /*override*/;

    virtual ~NullSoundPlayer() /*override*/ = default;
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

    MCNAPI void $fadeOut(uint64 soundHandle, float duration);

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
