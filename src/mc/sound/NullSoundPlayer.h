#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/SoundPlayerInterface.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class Vec3;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Core { class Path; }
namespace Core { class PathView; }
class SoundItem;
struct PlaySoundOptions;
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

    virtual ::Core::PathBuffer<::std::string> const getCurrentlyPlayingMusicPath() /*override*/;

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

    virtual void fadeOut(uint64, float) /*override*/;

    virtual void stopAllSounds() /*override*/;

    virtual void pauseAllPlayingSounds() /*override*/;

    virtual void resumeAllPreviouslyPlayingSounds() /*override*/;

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

    // NOLINTEND
};
