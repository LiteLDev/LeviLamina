
#include "MoreDimensionManager.h"

#include "ll/api/dimension/MoreDimension.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GlobalService.h"
#include "mc/math/Vec3.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/VanillaDimensionFactory.h"
#include "mc/world/level/dimension/VanillaDimensions.h"

void MoreDimensionManager::AddDimension(std::string_view dimensionName, AutomaticID<Dimension, int> dimensionId) {
    MoreDimensionMap.emplace(dimensionId.id, DimensionInfo(dimensionName, dimensionId));
    ll::memory::modify(VanillaDimensions::$DimensionMap(), [&](auto& dimMap) {
        loggerMoreDimMag.debug("Add new dimension");
        dimMap.mRight.insert(std::make_pair(dimensionName, dimensionId));
        dimMap.mLeft.insert(std::make_pair(dimensionId, dimensionName));
    });
    ll::memory::modify(VanillaDimensions::Undefined, [&](auto& dimId) {
        dimId.id += 1;
        loggerMoreDimMag.debug("Set VanillaDimensions::Undefined to {}", dimId.id);
    });
}

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsConverHook,
    HookPriority::Normal,
    VanillaDimensions::convertPointBetweenDimensions,
    bool,
    Vec3 const&                    oldPos,
    Vec3&                          toPos,
    DimensionType                  oldDim,
    DimensionType                  toDim,
    DimensionConversionData const& data
) {
    if (oldDim <= 2 && toDim <= 2) return origin(oldPos, toPos, oldDim, toDim, data);
    toPos = oldPos;
    return true;
};

using BedResult_Dim = Bedrock::Result<DimensionType>;
using BedResult_int = Bedrock::Result<int>&;

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHook,
    HookPriority::Normal,
    "?fromSerializedInt@VanillaDimensions@@SA?AV?$Result@V?$AutomaticID@VDimension@@H@@Verror_code@std@@@Bedrock@@$$"
    "QEAV?$Result@HVerror_code@std@@@3@@Z",
    BedResult_Dim,
    BedResult_int& dim
) {
    if (dim.value() <= 2) return origin(dim);
    return Bedrock::Result<DimensionType>(dim.value());
};

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHookI,
    HookPriority::Normal,
    "?fromSerializedInt@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@H@Z",
    DimensionType,
    int dimId
) {
    if (dimId <= 2) return origin(dimId);
    return {dimId};
}

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsToSerializedIntHook,
    HookPriority::Normal,
    VanillaDimensions::toSerializedInt,
    int,
    DimensionType const& dim
) {
    if (dim <= 2) return origin(dim);
    return dim.id;
}

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsToStringHook,
    HookPriority::Normal,
    VanillaDimensions::toString,
    std::string const,
    DimensionType const& dim
) {
    if (dim <= 2) return origin(dim);
    return ll::Global<MoreDimensionManager>->MoreDimensionMap.at(dim.id).name;
}

using fact = OwnerPtrFactory<Dimension, ILevel&, Scheduler&>;
LL_AUTO_STATIC_HOOK(
    RegistryDimensionSercive,
    HookPriority::Normal,
    VanillaDimensionFactory::registerDimensionTypes,
    void,
    fact& factory
) {
    origin(factory);
    loggerMoreDimMag.debug("VanillaDimensions::Undefined id: {}", VanillaDimensions::Undefined.id);
    loggerMoreDimMag.debug("Add Dimension");
    for (auto& dimInfo : ll::Global<MoreDimensionManager>->MoreDimensionMap) {
        factory.registerFactory(
            dimInfo.second.name,
            [&](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
                loggerMoreDimMag.debug("Create dimension, name: {}, id: {}", dimInfo.second.name, dimInfo.first);
                return std::make_shared<MoreDimension>(ilevel, scheduler, dimInfo.second);
            }
        );
    }
}

// registry dimensoin when in ll, must reload Dimension::getWeakRef
LL_AUTO_TYPED_INSTANCE_HOOK(
    DimensionGetWeakRefHook,
    HookPriority::Normal,
    Dimension,
    &Dimension::getWeakRef,
    WeakRefT<SharePtrRefTraits<Dimension>>) {
    if (this->getDimensionId() > 2 && this->getDimensionId() != VanillaDimensions::Undefined.id)
        return weak_from_this();
    return origin();
};
