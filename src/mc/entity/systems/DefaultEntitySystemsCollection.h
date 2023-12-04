#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/systems/ComponentInfo.h"
#include "mc/entity/systems/IEntitySystemsCollection.h"
#include "mc/entity/systems/ISystem.h"
#include "mc/entity/systems/InternalSystemInfo.h"
#include "mc/entity/systems/SystemTiming.h"

class DefaultEntitySystemsCollection : public IEntitySystemsCollection {
public:
    struct ECSTiming {
        int   mCount{0};  // this+0x0
        float mMsTime{0}; // this+0x4
    };
    struct TickingSystemsInCategory {
        Bedrock::typeid_t<struct SystemCategory> mCategory;  // this+0x0
        std::vector<uint>                        mSystems{}; // this+0x8
        std::vector<ECSTiming>                   mTimings{}; // this+0x20
    };

    std::vector<std::shared_ptr<ISystem>> mAllSystems;              // this+0x8
    std::vector<InternalSystemInfo>       mAllSystemsInfo;          // this+0x20
    std::vector<TickingSystemsInCategory> mTickingSystemCategories; // this+0x38
    entt::dense_map<uint, ComponentInfo>  mAllComponentsInfo;       // this+0x50
    std::mutex                            mTimingMutex;             // this+0x98

    // need vftable
};
