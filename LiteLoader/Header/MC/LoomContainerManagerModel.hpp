// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LoomContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOMCONTAINERMANAGERMODEL
public:
    class LoomContainerManagerModel& operator=(class LoomContainerManagerModel const&) = delete;
    LoomContainerManagerModel(class LoomContainerManagerModel const&) = delete;
    LoomContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~LoomContainerManagerModel();
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
        void (LoomContainerManagerModel::*rv)();
        *((void**)&rv) = dlsym("?broadcastChanges@LoomContainerManagerModel@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void setData(int a0, int a1){
        void (LoomContainerManagerModel::*rv)(int, int);
        *((void**)&rv) = dlsym("?setData@LoomContainerManagerModel@@UEAAXHH@Z");
        return (this->*rv)(std::forward<int>(a0), std::forward<int>(a1));
    }
    */
    MCAPI LoomContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);
    MCAPI static int const BANNER_SLOT;
    MCAPI static int const DYE_SLOT;
    MCAPI static int const MATERIAL_SLOT;
    MCAPI static int const RESULT_SLOT;

protected:

private:

};