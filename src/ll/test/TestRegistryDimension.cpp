#include "ll/api/memory/Hook.h"
#include "mc/common/wrapper/OwnerPtrFactory.h"
#include "mc/world/level/dimension/VanillaDimensionFactory.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/NetherDimension.h"

class ILevel;
class Scheduler;
using namespace ll::memory;

using OwnerT = OwnerPtrFactory<Dimension, ILevel&, Scheduler&>;

LL_AUTO_TYPED_INSTANCE_HOOK(
    RegistryDimensionTest,
    HookPriority::Normal,
    OwnerT,
    &OwnerT::registerFactory,
    void,
    const std::string & worldName,
    std::function<OwnerPtrT<SharePtrRefTraits<Dimension>>(ILevel&, Scheduler&)> faction
) {
    using Fac = std::function<OwnerPtrT<SharePtrRefTraits<Dimension>>(ILevel&, Scheduler&)>;
    if (worldName == "nether"){
        faction = [](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
            // std::shared_ptr<NetherDimension> dim = std::make_shared<NetherDimension>(ilevel, scheduler);
            // std::shared_ptr<Dimension> dim2 = dim;
            return std::make_shared<NetherDimension>(ilevel, scheduler);;
        };
    }else origin(worldName,faction);
};