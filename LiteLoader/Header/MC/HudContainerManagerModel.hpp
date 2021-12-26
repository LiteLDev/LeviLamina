// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HudContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMANAGERMODEL
public:
    class HudContainerManagerModel& operator=(class HudContainerManagerModel const&) = delete;
    HudContainerManagerModel(class HudContainerManagerModel const&) = delete;
    HudContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~HudContainerManagerModel();
    /*1*/ virtual enum ContainerID getContainerId() const;
    /*2*/ virtual void setContainerId(enum ContainerID);
    /*3*/ virtual enum ContainerType getContainerType() const;
    /*4*/ virtual void setContainerType(enum ContainerType);
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual void setSlot(int, class ItemStack const&, bool);
    /*7*/ virtual class ItemStack const& getSlot(int) const;
    /*8*/ virtual void __unk_vfn_1();
    /*9*/ virtual void broadcastChanges();
    /*10*/ virtual class ContainerScreenContext _postInit();
    /*
    inline void setData(int a0, int a1){
        void (HudContainerManagerModel::*rv)(int, int);
        *((void**)&rv) = dlsym("?setData@HudContainerManagerModel@@UEAAXHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    inline std::vector<class ItemStack> getItemCopies() const{
        std::vector<class ItemStack> (HudContainerManagerModel::*rv)() const;
        *((void**)&rv) = dlsym("?getItemCopies@HudContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI HudContainerManagerModel(enum ContainerID, class Player&);

protected:

private:

};