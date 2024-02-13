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
    // vIndex: 0, symbol: __gen_??1SoundPlayerInterface@@UEAA@XZ
    virtual ~SoundPlayerInterface() = default;

    // vIndex: 1, symbol:
    // ?play@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
    virtual uint64 play(std::string const& name, class Vec3 const& pos, float volume, float pitch) = 0;

    // vIndex: 2, symbol:
    // ?playUI@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MM@Z
    virtual uint64 playUI(std::string const& name, float volume, float pitch) = 0;

    // vIndex: 3, symbol:
    // ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEAI@Z
    virtual void playMusic(std::string const& name, float volume, uint& index) = 0;

    // vIndex: 4, symbol:
    // ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
    virtual void playMusic(std::string const& name, float volume) = 0;

    // vIndex: 5, symbol: ?isLoadingMusic@NullSoundPlayer@@UEBA_NXZ
    virtual bool isLoadingMusic() const = 0;

    // vIndex: 6, symbol:
    // ?isPlayingMusicEvent@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isPlayingMusicEvent(std::string const& name) const = 0;

    // vIndex: 7, symbol: ?isPlayingMusic@NullSoundPlayer@@UEBA_NAEBVPath@Core@@@Z
    virtual bool isPlayingMusic(class Core::Path const& soundName) const = 0;

    // vIndex: 8, symbol: ?fadeToStopMusic@NullSoundPlayer@@UEAAXM@Z
    virtual void fadeToStopMusic(float) = 0;

    // vIndex: 9, symbol: ?setMusicVolumeMultiplier@NullSoundPlayer@@UEAAXM@Z
    virtual void setMusicVolumeMultiplier(float) = 0;

    // vIndex: 10, symbol: ?fadeOut@NullSoundPlayer@@UEAAX_KM@Z
    virtual void fadeOut(uint64 handle, float duration) = 0;

    // vIndex: 11, symbol: ?stopMusic@NullSoundPlayer@@UEAAXXZ
    virtual void stopMusic() = 0;

    // vIndex: 12, symbol:
    // ?stop@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void stop(std::string const& name) = 0;

    // vIndex: 13, symbol: ?stop@NullSoundPlayer@@UEAAX_K@Z
    virtual void stop(uint64 handle) = 0;

    // vIndex: 14, symbol: ?stopAllSounds@NullSoundPlayer@@UEAAXXZ
    virtual void stopAllSounds() = 0;

    // vIndex: 15, symbol:
    // ?getCurrentlyPlayingMusicName@NullSoundPlayer@@UEAA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName() = 0;

    // vIndex: 16, symbol:
    // ?getItem@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEAVSoundItem@@@Z
    virtual bool
    getItem(std::string const& eventName, class Core::Path const& soundName, class SoundItem& soundItem) const = 0;

    // vIndex: 17, symbol:
    // ?registerLoop@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXAEAULoopingSoundState@@@Z@3@MM@Z
    virtual uint64 registerLoop(
        std::string const&                             name,
        std::function<void(struct LoopingSoundState&)> getSoundState,
        float,
        float
    ) = 0;

    // vIndex: 18, symbol: ?unregisterLoop@NullSoundPlayer@@UEAAX_K_N@Z
    virtual void unregisterLoop(uint64 handle, bool) = 0;

    // vIndex: 19, symbol: ?isPlayingSound@NullSoundPlayer@@UEBA_N_K@Z
    virtual bool isPlayingSound(uint64 handle) const = 0;

    // vIndex: 20, symbol: ?isPlayingSound@NullSoundPlayer@@UEBA_NAEBVPath@Core@@@Z
    virtual bool isPlayingSound(class Core::Path const&) const = 0;

    // vIndex: 21, symbol:
    // ?playAttached@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAUSoundInstanceProperties@@@Z@3@@Z
    virtual uint64 playAttached(
        std::string const&                                     eventName,
        std::function<void(struct SoundInstanceProperties&)>&& getSoundProperties
    ) = 0;

    // vIndex: 22, symbol: ?stopAllDelayedSoundActions@NullSoundPlayer@@UEAAXXZ
    virtual void stopAllDelayedSoundActions() = 0;

    // vIndex: 23, symbol:
    // ?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z
    virtual std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64 handle) const = 0;

    // vIndex: 24, symbol:
    // ?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z
    virtual std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64 handle) const = 0;

    // NOLINTEND
};
