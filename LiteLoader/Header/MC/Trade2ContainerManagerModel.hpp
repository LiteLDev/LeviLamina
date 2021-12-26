// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Trade2ContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADE2CONTAINERMANAGERMODEL
public:
    class Trade2ContainerManagerModel& operator=(class Trade2ContainerManagerModel const&) = delete;
    Trade2ContainerManagerModel(class Trade2ContainerManagerModel const&) = delete;
    Trade2ContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~Trade2ContainerManagerModel();
    /*1*/ virtual enum ContainerID getContainerId() const;
    /*2*/ virtual void setContainerId(enum ContainerID);
    /*3*/ virtual enum ContainerType getContainerType() const;
    /*4*/ virtual void setContainerType(enum ContainerType);
    /*5*/ virtual std::vector<class ItemStack> getItemCopies() const;
    /*6*/ virtual void setSlot(int, class ItemStack const&, bool);
    /*7*/ virtual class ItemStack const& getSlot(int) const;
    /*8*/ virtual void __unk_vfn_0();
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual bool isValid(float);
    /*11*/ virtual class ContainerScreenContext _postInit();
    /*
    inline void broadcastChanges(){
        void (Trade2ContainerManagerModel::*rv)();
        *((void**)&rv) = dlsym("?broadcastChanges@Trade2ContainerManagerModel@@UEAAXXZ");
        return (this->*rv)();
    }
    */
    MCAPI Trade2ContainerManagerModel(enum ContainerID, class Player&, struct ActorUniqueID const&);

protected:

private:

};