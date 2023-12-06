
#include "MoreDimensionManager.h"

#include "ll/api/dimension/FakeDimensionID.h"
#include "ll/api/dimension/MoreDimension.h"
#include "ll/api/dimension/MoreDimensionConfig.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/GlobalService.h"
#include "mc/math/Vec3.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/VanillaDimensionFactory.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/storage/LevelData.h"

namespace moredimension::hooklist {
LL_TYPED_STATIC_HOOK(
    VanillaDimensionsConverHook,
    HookPriority::Normal,
    VanillaDimensions,
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

LL_TYPED_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHook,
    HookPriority::Normal,
    VanillaDimensions,
    "?fromSerializedInt@VanillaDimensions@@SA?AV?$Result@V?$AutomaticID@VDimension@@H@@Verror_code@std@@@Bedrock@@$$"
    "QEAV?$Result@HVerror_code@std@@@3@@Z",
    BedResult_Dim,
    BedResult_int& dim
) {
    if (dim.value() <= 2) return origin(dim);
    return Bedrock::Result<DimensionType>(dim.value());
};

LL_TYPED_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHookI,
    HookPriority::Normal,
    VanillaDimensions,
    "?fromSerializedInt@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@H@Z",
    DimensionType,
    int dimId
) {
    if (dimId <= 2) return origin(dimId);
    return {dimId};
}

LL_TYPED_STATIC_HOOK(
    VanillaDimensionsToSerializedIntHook,
    HookPriority::Normal,
    VanillaDimensions,
    VanillaDimensions::toSerializedInt,
    int,
    DimensionType const& dim
) {
    if (dim <= 2) return origin(dim);
    return dim.id;
}

LL_TYPED_STATIC_HOOK(
    VanillaDimensionsToStringHook,
    HookPriority::Normal,
    VanillaDimensions,
    VanillaDimensions::toString,
    std::string const,
    DimensionType const& dim
) {
    if (dim <= 2) return origin(dim);
    return ll::Global<MoreDimensionManager>->MoreDimensionMap.at(dim.id).name;
}

// Registry New Dimension Hook
using fact = OwnerPtrFactory<Dimension, ILevel&, Scheduler&>;
LL_STATIC_HOOK(
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
LL_TYPED_INSTANCE_HOOK(DimensionGetWeakRefHook, HookPriority::Normal, Dimension, &Dimension::getWeakRef, WeakRefT<SharePtrRefTraits<Dimension>>) {
    if (this->getDimensionId() > 2 && this->getDimensionId() != VanillaDimensions::Undefined.id)
        return weak_from_this();
    return origin();
};

void hookAll() {
    VanillaDimensionsConverHook::hook();
    VanillaDimensionsFromSerializedIntHook::hook();
    VanillaDimensionsFromSerializedIntHookI::hook();
    VanillaDimensionsToSerializedIntHook::hook();
    VanillaDimensionsToStringHook::hook();
    RegistryDimensionSercive::hook();
    DimensionGetWeakRefHook::hook();
}
void unhookAll() {
    VanillaDimensionsConverHook::unhook();
    VanillaDimensionsFromSerializedIntHook::unhook();
    VanillaDimensionsFromSerializedIntHookI::unhook();
    VanillaDimensionsToSerializedIntHook::unhook();
    VanillaDimensionsToStringHook::unhook();
    RegistryDimensionSercive::unhook();
    DimensionGetWeakRefHook::unhook();
}
} // namespace moredimension::hooklist

MoreDimensionManager::MoreDimensionManager() {
    MoreDimensionConfig::loadConfigFile();
    if (!MoreDimensionConfig::dimConfig.dimensionList.empty()) {
        for (auto& dim : MoreDimensionConfig::dimConfig.dimensionList) {
            this->MoreDimensionMap.emplace(dim.second.id, DimensionInfo(dim.first, dim.second.id, dim.second.seed));
        }
        moredimension::hooklist::hookAll();
    }
};

MoreDimensionManager& MoreDimensionManager::getInstance() {
    static MoreDimensionManager instance{};
    return instance;
}

bool MoreDimensionManager::AddDimension(DimensionInfo& dimInfo) {
    if (MoreDimensionMap.find(dimInfo.id) != MoreDimensionMap.end()) {
        loggerMoreDimMag.error("The Dimension Id Already exists. Id: {}", dimInfo.id.id);
        return false;
    }
    if (dimInfo.id == VanillaDimensions::Overworld || dimInfo.id == VanillaDimensions::Nether
        || dimInfo.id == VanillaDimensions::TheEnd) {
        loggerMoreDimMag.error("Cannot use vanilla dimension id, Id: {}", dimInfo.id.id);
        return false;
    }
    MoreDimensionMap.emplace(dimInfo.id.id, dimInfo);
    MoreDimensionConfig::dimConfig.dimensionList.emplace(
        dimInfo.name,
        MoreDimensionConfig::Config::dimensionInfo{dimInfo.id.id, dimInfo.seed, dimInfo.generatorType}
    );

    // registry create dimension function
    ll::Global<Level>->getDimensionFactory().registerFactory(
        dimInfo.name,
        [&](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
            loggerMoreDimMag.debug("Create dimension, name: {}, id: {}", dimInfo.name, dimInfo.id.id);
            return std::make_shared<MoreDimension>(ilevel, scheduler, dimInfo);
        }
    );

    // modify default dimension map
    ll::memory::modify(VanillaDimensions::$DimensionMap(), [&](auto& dimMap) {
        loggerMoreDimMag.debug("Add new dimension to DimensionMap");
        dimMap.mRight.insert(std::make_pair(dimInfo.name, dimInfo.id));
        dimMap.mLeft.insert(std::make_pair(dimInfo.id, dimInfo.name));
    });
    // modify default Undefined dimension id
    ll::memory::modify(VanillaDimensions::Undefined, [&](auto& dimId) {
        dimId.id += 1;
        loggerMoreDimMag.debug("Set VanillaDimensions::Undefined to {}", dimId.id);
    });

    return true;
}
