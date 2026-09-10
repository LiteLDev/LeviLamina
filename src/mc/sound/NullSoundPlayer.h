#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/SoundPauseSource.h"
#include "mc/deps/audio/SoundPlayerInterface.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class Vec3;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlaySoundOptions;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Core { class Path; }
namespace Core { class PathView; }
class SoundItem;
// clang-format on

class NullSoundPlayer : public ::SoundPlayerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint64
    play(::std::string const&, ::Vec3 const&, float, float, ::std::optional<::ServerSoundHandle>) /*override*/;

    virtual uint64 play(::PlaySoundOptions) /*override*/;

    virtual uint64 playUI(::std::string const&, float, float) /*override*/;

    virtual ::std::optional<::std::string> getSubtitle(::std::string const&) const /*override*/;

    virtual void playMusic(::std::string const&, float, uint&) /*override*/;

    virtual void playMusic(::std::string const&, float) /*override*/;

    virtual bool isLoadingMusic() const /*override*/;

    virtual bool isPlayingMusicEvent(::std::string const&) const /*override*/;

    virtual bool isPlayingMusic(::Core::PathView) const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getCurrentlyPlayingMusicPath() /*override*/;

    virtual bool getItem(::std::string const&, ::Core::PathView, ::SoundItem&) const /*override*/;

    virtual void fadeToStopMusic(float) /*override*/;

    virtual void setMusicCommandVolumeMultiplier(float) /*override*/;

    virtual void pauseMusic(bool) /*override*/;

    virtual void stopMusic() /*override*/;

    virtual uint64
    registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float) /*override*/;

    virtual void unregisterLoop(uint64, bool) /*override*/;

    virtual void stop(::std::string const&) /*override*/;

    virtual void stop(uint64) /*override*/;

    virtual void stop(::ServerSoundHandle) /*override*/;

    virtual void setVolume(::ServerSoundHandle, float) /*override*/;

    virtual void setPitch(::ServerSoundHandle, float) /*override*/;

    virtual void fade(::ServerSoundHandle, float, float) /*override*/;

    virtual void setPlaybackPosition(::ServerSoundHandle, float) /*override*/;

    virtual void pause(::ServerSoundHandle, ::SoundPauseSource) /*override*/;

    virtual void resume(::ServerSoundHandle, ::SoundPauseSource) /*override*/;

    virtual void fadeOut(uint64, float) /*override*/;

    virtual void stopAllSounds() /*override*/;

    virtual void pauseAllPlayingSounds(::SoundPauseSource) /*override*/;

    virtual void resumeAllPreviouslyPlayingSounds(::SoundPauseSource) /*override*/;

    virtual bool isPlayingSound(uint64) const /*override*/;

    virtual bool isPlayingSound(::Core::Path const&) const /*override*/;

    virtual bool isPlayingSound(::ServerSoundHandle) const /*override*/;

    virtual uint64 playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&) /*override*/;

    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const /*override*/;

    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $play(::std::string const&, ::Vec3 const&, float, float, ::std::optional<::ServerSoundHandle>);

    MCNAPI uint64 $play(::PlaySoundOptions);

    MCNAPI uint64 $playUI(::std::string const&, float, float);

    MCNAPI ::std::optional<::std::string> $getSubtitle(::std::string const&) const;

    MCNAPI void $playMusic(::std::string const&, float, uint&);

    MCNAPI void $playMusic(::std::string const&, float);

    MCNAPI bool $isLoadingMusic() const;

    MCNAPI bool $isPlayingMusicEvent(::std::string const&) const;

    MCNAPI bool $isPlayingMusic(::Core::PathView) const;

    MCNAPI ::Core::PathBuffer<::std::string> const& $getCurrentlyPlayingMusicPath();

    MCNAPI bool $getItem(::std::string const&, ::Core::PathView, ::SoundItem&) const;

    MCNAPI void $fadeToStopMusic(float);

    MCNAPI void $setMusicCommandVolumeMultiplier(float);

    MCNAPI void $pauseMusic(bool);

    MCNAPI void $stopMusic();

    MCNAPI uint64 $registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float);

    MCNAPI void $unregisterLoop(uint64, bool);

    MCNAPI void $stop(::std::string const&);

    MCNAPI void $stop(uint64);

    MCNAPI void $stop(::ServerSoundHandle);

    MCNAPI void $setVolume(::ServerSoundHandle, float);

    MCNAPI void $setPitch(::ServerSoundHandle, float);

    MCNAPI void $fade(::ServerSoundHandle, float, float);

    MCNAPI void $setPlaybackPosition(::ServerSoundHandle, float);

    MCNAPI void $pause(::ServerSoundHandle, ::SoundPauseSource);

    MCNAPI void $resume(::ServerSoundHandle, ::SoundPauseSource);

    MCNAPI void $fadeOut(uint64, float);

    MCNAPI void $stopAllSounds();

    MCNAPI void $pauseAllPlayingSounds(::SoundPauseSource);

    MCNAPI void $resumeAllPreviouslyPlayingSounds(::SoundPauseSource);

    MCNAPI bool $isPlayingSound(uint64) const;

    MCNAPI bool $isPlayingSound(::Core::Path const&) const;

    MCNAPI bool $isPlayingSound(::ServerSoundHandle) const;

    MCNAPI uint64 $playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&);

    MCNAPI ::std::optional<::PlayingSoundAttributes> $tryGetPlayingSoundAttributes(uint64) const;

    MCNAPI ::std::optional<::LoopingSoundAttributes> $tryGetLoopingSoundAttributes(uint64) const;


    // NOLINTEND
};
