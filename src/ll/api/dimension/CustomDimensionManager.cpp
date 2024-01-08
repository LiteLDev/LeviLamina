
#include "CustomDimensionManager.h"

#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "ll/core/dimension/CustomDimension.h"
#include "ll/core/dimension/CustomDimensionConfig.h"
#include "ll/core/dimension/FakeDimensionId.h"

#include "mc/math/Vec3.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/VanillaDimensionFactory.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/storage/LevelData.h"

class Scheduler;

namespace ll::dimension {

static ll::Logger loggerMoreDimMag("CustomDimensionManager");


namespace CustomDimensionHookList {
LL_TYPE_STATIC_HOOK(
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

LL_TYPE_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHook,
    HookPriority::Normal,
    VanillaDimensions,
    "?fromSerializedInt@VanillaDimensions@@SA?AV?$Result@V?$AutomaticID@VDimension@@H@@Verror_code@std@@@Bedrock@@$$"
    "QEAV?$Result@HVerror_code@std@@@3@@Z",
    BedResult_Dim,
    BedResult_int& dim
) {
    if (dim.value() <= 2) return origin(dim);
    return dim.value();
};

LL_TYPE_STATIC_HOOK(
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

LL_TYPE_STATIC_HOOK(
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

LL_TYPE_STATIC_HOOK(
    VanillaDimensionsToStringHook,
    HookPriority::Normal,
    VanillaDimensions,
    VanillaDimensions::toString,
    std::string const,
    DimensionType const& dim
) {
    if (dim <= 2) return origin(dim);
    return VanillaDimensions::$DimensionMap().mLeft.at(dim);
}

// registry dimensoin when in ll, must reload Dimension::getWeakRef
LL_TYPE_INSTANCE_HOOK(DimensionGetWeakRefHook, HookPriority::Normal, Dimension, &Dimension::getWeakRef, WeakRefT<SharePtrRefTraits<Dimension>>) {
    if (getDimensionId() > 2 && getDimensionId() != VanillaDimensions::Undefined.id) return weak_from_this();
    return origin();
};

using HookReg = memory::HookRegistrar<
    VanillaDimensionsConverHook,
    VanillaDimensionsFromSerializedIntHook,
    VanillaDimensionsFromSerializedIntHookI,
    VanillaDimensionsToSerializedIntHook,
    VanillaDimensionsToStringHook,
    DimensionGetWeakRefHook>;

} // namespace CustomDimensionHookList

CustomDimensionManager::CustomDimensionManager() : mNewDimensionId(3) {
    CustomDimensionConfig::loadConfigFile();
    if (!CustomDimensionConfig::dimConfig.dimensionList.empty()) {
        for (auto& dim : CustomDimensionConfig::dimConfig.dimensionList) {
            customDimensionMap.emplace(
                dim.first,
                DimensionInfo{dim.first, dim.second.id, dim.second.seed, dim.second.generatorType}
            );
        }
        mNewDimensionId += static_cast<int>(customDimensionMap.size());

        CustomDimensionHookList::HookReg::hook();

        fakeDimensionIdInstance = std::make_unique<FakeDimensionId>();
    }
};

CustomDimensionManager::~CustomDimensionManager() { CustomDimensionHookList::HookReg::unhook(); }

CustomDimensionManager& CustomDimensionManager::getInstance() {
    static CustomDimensionManager instance{};
    return instance;
}

AutomaticID<Dimension, int>
CustomDimensionManager::addDimension(std::string_view dimensionName, uint seed, GeneratorType generatorType) {
    std::string                 dimName(dimensionName);
    AutomaticID<Dimension, int> dimId = -1;
    if (customDimensionMap.find(dimName) != customDimensionMap.end()) {
        dimId = customDimensionMap.at(dimName).id;
        loggerMoreDimMag.info("The dimension already registry. use old id, name: {}, id: {}", dimName, dimId.id);
    } else {
        // Assign new id
        {
            std::lock_guard lock{mMapMutex};
            dimId = mNewDimensionId.load();
            mNewDimensionId++;
            customDimensionMap.emplace(dimName, DimensionInfo{dimName, dimId, seed, generatorType});
            CustomDimensionConfig::dimConfig.dimensionList.emplace(
                dimName,
                CustomDimensionConfig::Config::dimensionInfo{dimId, seed, generatorType}
            );
        };
        CustomDimensionConfig::saveConfigFile();
    };

    // registry create dimension function
    if (ll::service::getLevel()) {
        ll::service::getLevel()->getDimensionFactory().registerFactory(
            dimName,
            [dimName, dimId, seed, generatorType](ILevel& ilevel, Scheduler& scheduler)
                -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
                loggerMoreDimMag.debug("Create dimension, name: {}, id: {}", dimName, dimId.id);
                DimensionInfo dimensionInfo{dimName, dimId, seed, generatorType};
                return std::make_shared<CustomDimension>(ilevel, scheduler, dimensionInfo);
            }
        );
        {
            std::lock_guard lock{mMapMutex};
            registeredDimensionMap.emplace(dimName, DimensionInfo{dimName, dimId, seed, generatorType});
        };
    } else {
        loggerMoreDimMag.error("Level is nullptr, cannot registry new dimension, name: {}, id: {}", dimName, dimId.id);
        return {-1};
    }

    // modify default dimension map
    loggerMoreDimMag.debug("Add new dimension to DimensionMap");
    ll::memory::modify(VanillaDimensions::$DimensionMap(), [&](auto& dimMap) {
        loggerMoreDimMag.debug("Add new dimension: name->{}, id->{} to DimensionMap", dimName, dimId.id);
        dimMap.set(dimName, dimId);
    });
    // modify default Undefined dimension id
    ll::memory::modify(VanillaDimensions::Undefined, [&](auto& dimId) {
        dimId.id = mNewDimensionId;
        loggerMoreDimMag.debug("Set VanillaDimensions::Undefined to {}", dimId.id);
    });
    return dimId;
}
} // namespace ll::dimension
