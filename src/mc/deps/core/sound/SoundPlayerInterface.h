#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct LoopingSoundAttributes;
struct LoopingSoundState;
struct PlayingSoundAttributes;
struct SoundInstanceProperties;
namespace Core { class Path; }
namespace Core { class PathView; }
class SoundItem;
// clang-format on

class SoundPlayerInterface : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~SoundPlayerInterface() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~SoundPlayerInterface() /*override*/;
#endif

    virtual uint64 play(::std::string const&, ::Vec3 const&, float, float) = 0;

    virtual uint64 playUI(::std::string const&, float, float) = 0;

    virtual void playMusic(::std::string const&, float, uint&) = 0;

    virtual void playMusic(::std::string const&, float) = 0;

    virtual bool isLoadingMusic() const = 0;

    virtual bool isPlayingMusicEvent(::std::string const&) const = 0;

    virtual bool isPlayingMusic(::Core::PathView) const = 0;

    virtual void fadeToStopMusic(float) = 0;

    virtual void setMusicCommandVolumeMultiplier(float) = 0;

    virtual void fadeOut(uint64 soundHandle, float duration) = 0;

    virtual void stopMusic() = 0;

    virtual void stop(::std::string const&) = 0;

    virtual void stop(uint64) = 0;

    virtual void stopAllSounds() = 0;

    virtual void pauseAllPlayingSounds() = 0;

    virtual void resumeAllPreviouslyPlayingSounds() = 0;

    virtual void pauseMusic(bool) = 0;

    virtual ::Core::PathBuffer<::std::string> const getCurrentlyPlayingMusicName() = 0;

    virtual bool getItem(::std::string const&, ::Core::PathView, ::SoundItem&) const = 0;

    virtual uint64 registerLoop(::std::string const&, ::std::function<void(::LoopingSoundState&)>, float, float) = 0;

    virtual void unregisterLoop(uint64, bool) = 0;

    virtual bool isPlayingSound(uint64) const = 0;

    virtual bool isPlayingSound(::Core::Path const&) const = 0;

    virtual uint64 playAttached(::std::string const&, ::std::function<void(::SoundInstanceProperties&)>&&) = 0;

    virtual void stopAllDelayedSoundActions() = 0;

    virtual ::std::optional<::PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64) const = 0;

    virtual ::std::optional<::LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
