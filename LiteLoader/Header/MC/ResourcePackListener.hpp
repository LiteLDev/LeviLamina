// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourcePackListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKLISTENER
public:
    class ResourcePackListener& operator=(class ResourcePackListener const&) = delete;
    ResourcePackListener(class ResourcePackListener const&) = delete;
    ResourcePackListener() = delete;
#endif

public:
    /*0*/ virtual ~ResourcePackListener();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4() = 0;
    /*
    inline void onBaseGamePackDownloadComplete(){
        void (ResourcePackListener::*rv)();
        *((void**)&rv) = dlsym("?onBaseGamePackDownloadComplete@ResourcePackListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onFullPackStackInvalid(){
        void (ResourcePackListener::*rv)();
        *((void**)&rv) = dlsym("?onFullPackStackInvalid@ResourcePackListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void onResourceManagerDestroyed(class ResourcePackManager& a0){
        void (ResourcePackListener::*rv)(class ResourcePackManager&);
        *((void**)&rv) = dlsym("?onResourceManagerDestroyed@ResourcePackListener@@UEAAXAEAVResourcePackManager@@@Z");
        return (this->*rv)(std::forward<class ResourcePackManager&>(a0));
    }
    inline void onLanguageSubpacksChanged(){
        void (ResourcePackListener::*rv)();
        *((void**)&rv) = dlsym("?onLanguageSubpacksChanged@ResourcePackListener@@UEAAXXZ");
        return (this->*rv)();
    }
    inline  ~ResourcePackListener(){
         (ResourcePackListener::*rv)();
        *((void**)&rv) = dlsym("??1ResourcePackListener@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};