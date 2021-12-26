// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HopperContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERCONTAINERMANAGERMODEL
public:
    class HopperContainerManagerModel& operator=(class HopperContainerManagerModel const&) = delete;
    HopperContainerManagerModel(class HopperContainerManagerModel const&) = delete;
    HopperContainerManagerModel() = delete;
#endif

public:
    /*0*/ virtual ~HopperContainerManagerModel();
    /*1*/ virtual enum ContainerID getContainerId() const;
    /*2*/ virtual void setContainerId(enum ContainerID);
    /*3*/ virtual enum ContainerType getContainerType() const;
    /*4*/ virtual void setContainerType(enum ContainerType);
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual class ContainerScreenContext _postInit();
    MCAPI HopperContainerManagerModel(enum ContainerID, class Player&, struct ActorUniqueID const&);
    MCAPI HopperContainerManagerModel(enum ContainerID, class Player&, class BlockPos const&);

protected:

private:

};