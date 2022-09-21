/**
 * @file  MC/NullSoundPlayer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NullSoundPlayer.
 *
 */
class NullSoundPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSOUNDPLAYER
public:
    class NullSoundPlayer& operator=(class NullSoundPlayer const &) = delete;
    NullSoundPlayer(class NullSoundPlayer const &) = delete;
    NullSoundPlayer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NullSoundPlayer();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @hash   382530901
     * @vftbl  15
     * @symbol ?getCurrentlyPlayingMusicName@NullSoundPlayer@@UEAA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     */
    virtual class Core::PathBuffer<std::string> const getCurrentlyPlayingMusicName();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   -24183215
     * @vftbl  17
     * @symbol ?registerLoop@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$function@$$A6AXAEAULoopingSoundState@@@Z@3@MM@Z
     */
    virtual unsigned __int64 registerLoop(std::string const &, class std::function<void (struct LoopingSoundState &)>, float, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NULLSOUNDPLAYER
    /**
     * @hash   39157278
     * @symbol ?fadeOut@NullSoundPlayer@@UEAAX_KM@Z
     */
    MCVAPI void fadeOut(unsigned __int64, float);
    /**
     * @hash   -879475048
     * @symbol ?fadeToStopMusic@NullSoundPlayer@@UEAAXM@Z
     */
    MCVAPI void fadeToStopMusic(float);
    /**
     * @hash   2067744199
     * @symbol ?getItem@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEAVSoundItem@@@Z
     */
    MCVAPI bool getItem(std::string const &, class Core::Path const &, class SoundItem &) const;
    /**
     * @hash   325964226
     * @symbol ?isLoadingMusic@NullSoundPlayer@@UEBA_NXZ
     */
    MCVAPI bool isLoadingMusic() const;
    /**
     * @hash   26519811
     * @symbol ?isPlayingMusic@NullSoundPlayer@@UEBA_NAEBVPath@Core@@@Z
     */
    MCVAPI bool isPlayingMusic(class Core::Path const &) const;
    /**
     * @hash   1064869570
     * @symbol ?isPlayingMusicEvent@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI bool isPlayingMusicEvent(std::string const &) const;
    /**
     * @hash   1677996168
     * @symbol ?isPlayingSound@NullSoundPlayer@@UEBA_N_K@Z
     */
    MCVAPI bool isPlayingSound(unsigned __int64) const;
    /**
     * @hash   -1931575230
     * @symbol ?play@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z
     */
    MCVAPI unsigned __int64 play(std::string const &, class Vec3 const &, float, float);
    /**
     * @hash   886640202
     * @symbol ?playAttached@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAUSoundInstanceProperties@@@Z@3@@Z
     */
    MCVAPI unsigned __int64 playAttached(std::string const &, class std::function<void (struct SoundInstanceProperties &)> &&);
    /**
     * @hash   -99529549
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEAI@Z
     */
    MCVAPI void playMusic(std::string const &, float, unsigned int &);
    /**
     * @hash   763472613
     * @symbol ?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
     */
    MCVAPI void playMusic(std::string const &, float);
    /**
     * @hash   2117878140
     * @symbol ?playUI@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MM@Z
     */
    MCVAPI unsigned __int64 playUI(std::string const &, float, float);
    /**
     * @hash   642881862
     * @symbol ?setMusicVolumeMultiplier@NullSoundPlayer@@UEAAXM@Z
     */
    MCVAPI void setMusicVolumeMultiplier(float);
    /**
     * @hash   -1317502836
     * @symbol ?stop@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void stop(std::string const &);
    /**
     * @hash   553359828
     * @symbol ?stop@NullSoundPlayer@@UEAAX_K@Z
     */
    MCVAPI void stop(unsigned __int64);
    /**
     * @hash   20481167
     * @symbol ?stopAllDelayedSoundActions@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopAllDelayedSoundActions();
    /**
     * @hash   -1347183935
     * @symbol ?stopAllSounds@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopAllSounds();
    /**
     * @hash   -890132063
     * @symbol ?stopMusic@NullSoundPlayer@@UEAAXXZ
     */
    MCVAPI void stopMusic();
    /**
     * @hash   -1634134035
     * @symbol ?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z
     */
    MCVAPI class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64) const;
    /**
     * @hash   -2105552179
     * @symbol ?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z
     */
    MCVAPI class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64) const;
    /**
     * @hash   2144565206
     * @symbol ?unregisterLoop@NullSoundPlayer@@UEAAX_K_N@Z
     */
    MCVAPI void unregisterLoop(unsigned __int64, bool);
#endif

};