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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol
     * ?getCurrentlyPlayingMusicName\@NullSoundPlayer\@\@UEAA?BV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@XZ
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 17
     * @symbol
     * ?registerLoop\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$function\@$$A6AXAEAULoopingSoundState\@\@\@Z\@3\@MM\@Z
     */
    virtual uint64_t registerLoop(std::string const&, std::function<void(struct LoopingSoundState&)>, float, float);
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 20
     * @symbol __unk_vfn_20
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21();
    /**
     * @vftbl 22
     * @symbol
     * ?tryGetPlayingSoundAttributes\@NullSoundPlayer\@\@UEBA?AV?$optional\@UPlayingSoundAttributes\@\@\@std\@\@_K\@Z
     */
    virtual std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(uint64_t) const;
    /**
     * @vftbl 23
     * @symbol
     * ?tryGetLoopingSoundAttributes\@NullSoundPlayer\@\@UEBA?AV?$optional\@ULoopingSoundAttributes\@\@\@std\@\@_K\@Z
     */
    virtual std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(uint64_t) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    /**
     * @symbol ?fadeOut\@NullSoundPlayer\@\@UEAAX_KM\@Z
     */
    MCVAPI void fadeOut(uint64_t, float);
    /**
     * @symbol ?fadeToStopMusic\@NullSoundPlayer\@\@UEAAXM\@Z
     */
    MCVAPI void fadeToStopMusic(float);
    /**
     * @symbol
     * ?getItem\@NullSoundPlayer\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPath\@Core\@\@AEAVSoundItem\@\@\@Z
     */
    MCVAPI bool getItem(std::string const&, class Core::Path const&, class SoundItem&) const;
    /**
     * @symbol ?isLoadingMusic\@NullSoundPlayer\@\@UEBA_NXZ
     */
    MCVAPI bool isLoadingMusic() const;
    /**
     * @symbol ?isPlayingMusic\@NullSoundPlayer\@\@UEBA_NAEBVPath\@Core\@\@\@Z
     */
    MCVAPI bool isPlayingMusic(class Core::Path const&) const;
    /**
     * @symbol
     * ?isPlayingMusicEvent\@NullSoundPlayer\@\@UEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI bool isPlayingMusicEvent(std::string const&) const;
    /**
     * @symbol ?isPlayingSound\@NullSoundPlayer\@\@UEBA_N_K\@Z
     */
    MCVAPI bool isPlayingSound(uint64_t) const;
    /**
     * @symbol
     * ?play\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCVAPI uint64_t play(std::string const&, class Vec3 const&, float, float);
    /**
     * @symbol
     * ?playAttached\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@$$QEAV?$function\@$$A6AXAEAUSoundInstanceProperties\@\@\@Z\@3\@\@Z
     */
    MCVAPI uint64_t playAttached(std::string const&, std::function<void(struct SoundInstanceProperties&)>&&);
    /**
     * @symbol
     * ?playMusic\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MAEAI\@Z
     */
    MCVAPI void playMusic(std::string const&, float, unsigned int&);
    /**
     * @symbol
     * ?playMusic\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@M\@Z
     */
    MCVAPI void playMusic(std::string const&, float);
    /**
     * @symbol
     * ?playUI\@NullSoundPlayer\@\@UEAA_KAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MM\@Z
     */
    MCVAPI uint64_t playUI(std::string const&, float, float);
    /**
     * @symbol ?setMusicVolumeMultiplier\@NullSoundPlayer\@\@UEAAXM\@Z
     */
    MCVAPI void setMusicVolumeMultiplier(float);
    /**
     * @symbol
     * ?stop\@NullSoundPlayer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void stop(std::string const&);
    /**
     * @symbol ?stop\@NullSoundPlayer\@\@UEAAX_K\@Z
     */
    MCVAPI void stop(uint64_t);
    /**
     * @symbol ?stopAllDelayedSoundActions\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopAllDelayedSoundActions();
    /**
     * @symbol ?stopAllSounds\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopAllSounds();
    /**
     * @symbol ?stopMusic\@NullSoundPlayer\@\@UEAAXXZ
     */
    MCVAPI void stopMusic();
    /**
     * @symbol ?unregisterLoop\@NullSoundPlayer\@\@UEAAX_K_N\@Z
     */
    MCVAPI void unregisterLoop(uint64_t, bool);
#endif
    // NOLINTEND
};
