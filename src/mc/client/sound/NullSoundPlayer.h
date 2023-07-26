#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class NullSoundPlayer {

public:
    // prevent constructor by default
    NullSoundPlayer& operator=(NullSoundPlayer const&) = delete;
    NullSoundPlayer(NullSoundPlayer const&)            = delete;
    NullSoundPlayer()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6(); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 15
     * @symbol
     * ?getCurrentlyPlayingMusicName\@NullSoundPlayer\@\@UEAA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol
     * ?registerLoop\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXAEAULoopingSoundState\@\@\@Z\@3\@MM\@Z
     */
    virtual unsigned __int64
    registerLoop(std::string const&, class std::function<void(struct LoopingSoundState&)>, float, float); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19(); // NOLINT
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 22
     * @symbol
     * ?tryGetPlayingSoundAttributes\@NullSoundPlayer\@\@UEBA?AV?$optional\@UPlayingSoundAttributes\@\@\@std\@\@_K\@Z
     */
    virtual class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64
    ) const; // NOLINT
    /**
     * @vftbl 23
     * @symbol
     * ?tryGetLoopingSoundAttributes\@NullSoundPlayer\@\@UEBA?AV?$optional\@ULoopingSoundAttributes\@\@\@std\@\@_K\@Z
     */
    virtual class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64
    ) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    /**
     * @symbol ?fadeOut\@NullSoundPlayer\@\@UEAAX_KM\@Z
     */
    MCVAPI void fadeOut(unsigned __int64, float); // NOLINT
    /**
     * @symbol ?fadeToStopMusic\@NullSoundPlayer\@\@UEAAXM\@Z
     */
    MCVAPI void fadeToStopMusic(float); // NOLINT
    /**
     * @symbol
     * ?getItem\@NullSoundPlayer\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@AEAVSoundItem\@\@\@Z
     */
    MCVAPI bool getItem(std::string const&, class Core::Path const&, class SoundItem&) const; // NOLINT
    /**
     * @symbol ?isLoadingMusic\@NullSoundPlayer\@\@UEBA_NXZ
     */
    MCVAPI bool isLoadingMusic() const; // NOLINT
    /**
     * @symbol ?isPlayingMusic\@NullSoundPlayer\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCVAPI bool isPlayingMusic(class Core::Path const&) const; // NOLINT
    /**
     * @symbol
     * ?isPlayingMusicEvent\@NullSoundPlayer\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool isPlayingMusicEvent(std::string const&) const; // NOLINT
    /**
     * @symbol ?isPlayingSound\@NullSoundPlayer\@\@UEBA_N_K\@Z
     */
    MCVAPI bool isPlayingSound(unsigned __int64) const; // NOLINT
    /**
     * @symbol
     * ?play\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI unsigned __int64 play(std::string const&, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol
     * ?playAttached\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAUSoundInstanceProperties\@\@\@Z\@3\@\@Z
     */
    MCVAPI unsigned __int64
    playAttached(std::string const&, class std::function<void(struct SoundInstanceProperties&)>&&); // NOLINT
    /**
     * @symbol
     * ?playMusic\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MAEAI\@Z
     */
    MCVAPI void playMusic(std::string const&, float, unsigned int&); // NOLINT
    /**
     * @symbol
     * ?playMusic\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@Z
     */
    MCVAPI void playMusic(std::string const&, float); // NOLINT
    /**
     * @symbol
     * ?playUI\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MM\@Z
     */
    MCVAPI unsigned __int64 playUI(std::string const&, float, float); // NOLINT
    /**
     * @symbol ?setMusicVolumeMultiplier\@NullSoundPlayer\@\@UEAAXM\@Z
     */
    MCVAPI void setMusicVolumeMultiplier(float); // NOLINT
    /**
     * @symbol
     * ?stop\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void stop(std::string const&); // NOLINT
    /**
     * @symbol ?stop\@NullSoundPlayer\@\@UEAAX_K\@Z
     */
    MCVAPI void stop(unsigned __int64); // NOLINT
    /**
     * @symbol ?stopAllDelayedSoundActions\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopAllDelayedSoundActions(); // NOLINT
    /**
     * @symbol ?stopAllSounds\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopAllSounds(); // NOLINT
    /**
     * @symbol ?stopMusic\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopMusic(); // NOLINT
    /**
     * @symbol ?unregisterLoop\@NullSoundPlayer\@\@UEAAX_K_N\@Z
     */
    MCVAPI void unregisterLoop(unsigned __int64, bool); // NOLINT
#endif
};
