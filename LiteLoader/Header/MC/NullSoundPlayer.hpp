// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NullSoundPlayer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLSOUNDPLAYER
public:
    class NullSoundPlayer& operator=(class NullSoundPlayer const&) = delete;
    NullSoundPlayer(class NullSoundPlayer const&) = delete;
    NullSoundPlayer() = delete;
#endif

public:
    /*0*/ virtual ~NullSoundPlayer();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_7();
    /*9*/ virtual void __unk_vfn_8();
    /*10*/ virtual void __unk_vfn_9();
    /*11*/ virtual void __unk_vfn_10();
    /*12*/ virtual void __unk_vfn_11();
    /*13*/ virtual void __unk_vfn_12();
    /*14*/ virtual void __unk_vfn_13();
    /*15*/ virtual class Core::PathBuffer<std::string > const getCurrentlyPlayingMusicName();
    /*16*/ virtual void __unk_vfn_14();
    /*17*/ virtual unsigned __int64 registerLoop(std::string const&, class std::function<void (struct LoopingSoundState& )>, float, float);
    /*18*/ virtual void __unk_vfn_15();
    /*19*/ virtual void __unk_vfn_16();
    /*20*/ virtual void __unk_vfn_17();
    /*21*/ virtual void __unk_vfn_18();
    /*22*/ virtual void __unk_vfn_19();
    /*23*/ virtual void __unk_vfn_20();
    /*
    inline bool isPlayingMusic(class Core::Path const& a0) const{
        bool (NullSoundPlayer::*rv)(class Core::Path const&) const;
        *((void**)&rv) = dlsym("?isPlayingMusic@NullSoundPlayer@@UEBA_NAEBVPath@Core@@@Z");
        return (this->*rv)(std::forward<class Core::Path const&>(a0));
    }
    inline bool isPlayingMusicEvent(std::string const& a0) const{
        bool (NullSoundPlayer::*rv)(std::string const&) const;
        *((void**)&rv) = dlsym("?isPlayingMusicEvent@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    inline bool getItem(std::string const& a0, class Core::Path const& a1, class SoundItem& a2) const{
        bool (NullSoundPlayer::*rv)(std::string const&, class Core::Path const&, class SoundItem&) const;
        *((void**)&rv) = dlsym("?getItem@NullSoundPlayer@@UEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@AEAVSoundItem@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class Core::Path const&>(a1), std::forward<class SoundItem&>(a2));
    }
    inline bool isLoadingMusic() const{
        bool (NullSoundPlayer::*rv)() const;
        *((void**)&rv) = dlsym("?isLoadingMusic@NullSoundPlayer@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isPlayingSound(unsigned __int64 a0) const{
        bool (NullSoundPlayer::*rv)(unsigned __int64) const;
        *((void**)&rv) = dlsym("?isPlayingSound@NullSoundPlayer@@UEBA_N_K@Z");
        return (this->*rv)(std::forward<unsigned __int64>(a0));
    }
    inline void stop(unsigned __int64 a0){
        void (NullSoundPlayer::*rv)(unsigned __int64);
        *((void**)&rv) = dlsym("?stop@NullSoundPlayer@@UEAAX_K@Z");
        return (this->*rv)(std::forward<unsigned __int64>(a0));
    }
    inline void stopMusic(){
        void (NullSoundPlayer::*rv)();
        *((void**)&rv) = dlsym("?stopMusic@NullSoundPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setMusicVolumeMultiplier(float a0){
        void (NullSoundPlayer::*rv)(float);
        *((void**)&rv) = dlsym("?setMusicVolumeMultiplier@NullSoundPlayer@@UEAAXM@Z");
        return (this->*rv)(std::forward<float>(a0));
    }
    inline void fadeOut(unsigned __int64 a0, float a1){
        void (NullSoundPlayer::*rv)(unsigned __int64, float);
        *((void**)&rv) = dlsym("?fadeOut@NullSoundPlayer@@UEAAX_KM@Z");
        return (this->*rv)(std::forward<unsigned __int64>(a0), std::forward<float>(a1));
    }
    inline void fadeToStopMusic(float a0){
        void (NullSoundPlayer::*rv)(float);
        *((void**)&rv) = dlsym("?fadeToStopMusic@NullSoundPlayer@@UEAAXM@Z");
        return (this->*rv)(std::forward<float>(a0));
    }
    inline void playMusic(std::string const& a0, float a1){
        void (NullSoundPlayer::*rv)(std::string const&, float);
        *((void**)&rv) = dlsym("?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<float>(a1));
    }
    inline void unregisterLoop(unsigned __int64 a0, bool a1){
        void (NullSoundPlayer::*rv)(unsigned __int64, bool);
        *((void**)&rv) = dlsym("?unregisterLoop@NullSoundPlayer@@UEAAX_K_N@Z");
        return (this->*rv)(std::forward<unsigned __int64>(a0), std::forward<bool>(a1));
    }
    inline void stopAllDelayedSoundActions(){
        void (NullSoundPlayer::*rv)();
        *((void**)&rv) = dlsym("?stopAllDelayedSoundActions@NullSoundPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void playMusic(std::string const& a0, float a1, unsigned int& a2){
        void (NullSoundPlayer::*rv)(std::string const&, float, unsigned int&);
        *((void**)&rv) = dlsym("?playMusic@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEAI@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<float>(a1), std::forward<unsigned int&>(a2));
    }
    inline void stopAllSounds(){
        void (NullSoundPlayer::*rv)();
        *((void**)&rv) = dlsym("?stopAllSounds@NullSoundPlayer@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void stop(std::string const& a0){
        void (NullSoundPlayer::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?stop@NullSoundPlayer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }
    inline unsigned __int64 play(std::string const& a0, class Vec3 const& a1, float a2, float a3){
        unsigned __int64 (NullSoundPlayer::*rv)(std::string const&, class Vec3 const&, float, float);
        *((void**)&rv) = dlsym("?play@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@MM@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class Vec3 const&>(a1), std::forward<float>(a2), std::forward<float>(a3));
    }
    inline unsigned __int64 playUI(std::string const& a0, float a1, float a2){
        unsigned __int64 (NullSoundPlayer::*rv)(std::string const&, float, float);
        *((void**)&rv) = dlsym("?playUI@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MM@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<float>(a1), std::forward<float>(a2));
    }
    inline unsigned __int64 playAttached(std::string const& a0, class std::function<void (struct SoundInstanceProperties& )>&& a1){
        unsigned __int64 (NullSoundPlayer::*rv)(std::string const&, class std::function<void (struct SoundInstanceProperties& )>&&);
        *((void**)&rv) = dlsym("?playAttached@NullSoundPlayer@@UEAA_KAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAUSoundInstanceProperties@@@Z@3@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0), std::forward<class std::function<void (struct SoundInstanceProperties& )>&&>(a1));
    }
    inline class std::optional<struct LoopingSoundAttributes> tryGetLoopingSoundAttributes(unsigned __int64 a0) const{
        class std::optional<struct LoopingSoundAttributes> (NullSoundPlayer::*rv)(unsigned __int64) const;
        *((void**)&rv) = dlsym("?tryGetLoopingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@ULoopingSoundAttributes@@@std@@_K@Z");
        return (this->*rv)(std::forward<unsigned __int64>(a0));
    }
    inline class std::optional<struct PlayingSoundAttributes> tryGetPlayingSoundAttributes(unsigned __int64 a0) const{
        class std::optional<struct PlayingSoundAttributes> (NullSoundPlayer::*rv)(unsigned __int64) const;
        *((void**)&rv) = dlsym("?tryGetPlayingSoundAttributes@NullSoundPlayer@@UEBA?AV?$optional@UPlayingSoundAttributes@@@std@@_K@Z");
        return (this->*rv)(std::forward<unsigned __int64>(a0));
    }
    */

protected:

private:

};