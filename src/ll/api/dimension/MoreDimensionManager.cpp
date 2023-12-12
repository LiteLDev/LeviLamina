
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
    return VanillaDimensions::$DimensionMap().at(dim);
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
    DimensionGetWeakRefHook::hook();
}
void unhookAll() {
    VanillaDimensionsConverHook::unhook();
    VanillaDimensionsFromSerializedIntHook::unhook();
    VanillaDimensionsFromSerializedIntHookI::unhook();
    VanillaDimensionsToSerializedIntHook::unhook();
    VanillaDimensionsToStringHook::unhook();
    DimensionGetWeakRefHook::unhook();
}
} // namespace moredimension::hooklist

MoreDimensionManager::MoreDimensionManager() {
    MoreDimensionConfig::loadConfigFile();
    if (!MoreDimensionConfig::dimConfig.dimensionList.empty()) {
        for (auto& dim : MoreDimensionConfig::dimConfig.dimensionList) {
            this->MoreDimensionMap.emplace(
                dim.first,
                DimensionInfo{dim.first, dim.second.id, dim.second.seed, dim.second.generatorType}
            );
        }
        this->new_dimension_id_ = MoreDimensionMap.size() + 3;
        moredimension::hooklist::hookAll();
    }
};

MoreDimensionManager::~MoreDimensionManager() { moredimension::hooklist::unhookAll(); }

MoreDimensionManager& MoreDimensionManager::getInstance() {
    static MoreDimensionManager instance{};
    return instance;
}

AutomaticID<Dimension, int>
MoreDimensionManager::AddDimension(std::string_view dimensionName, uint seed, GeneratorType generatorType) {
    std::string                 dimName(dimensionName);
    AutomaticID<Dimension, int> dimId = -1;
    if (MoreDimensionMap.find(dimName) != MoreDimensionMap.end()) {
        dimId = MoreDimensionMap.at(dimName).id;
        loggerMoreDimMag.info("The dimension already registry. use old id, name: {}, id: {}", dimName, dimId.id);
    } else {
        // Assign new id
        dimId = this->new_dimension_id_.load();
        this->new_dimension_id_++;
        {
            std::lock_guard lock{map_mutex_};
            MoreDimensionMap.emplace(dimName, DimensionInfo{dimName, dimId, seed, generatorType});
            MoreDimensionConfig::dimConfig.dimensionList.emplace(
                dimName,
                MoreDimensionConfig::Config::dimensionInfo{dimId, seed, generatorType}
            );
        };
        MoreDimensionConfig::saveConfigFile();
    };

    // registry create dimension function
    if (ll::Global<Level>) {
        ll::Global<Level>->getDimensionFactory().registerFactory(
            dimName,
            [&](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
                loggerMoreDimMag.debug("Create dimension, name: {}, id: {}", dimName, dimId.id);
                DimensionInfo dimensionInfo{dimName, dimId, seed, generatorType};
                return std::make_shared<MoreDimension>(ilevel, scheduler, dimensionInfo);
            }
        );
        {
            std::lock_guard lock{map_mutex_};
            RegistryDimensionMap.emplace(dimName, DimensionInfo{dimName, dimId, seed, generatorType});
        };
    } else {
        loggerMoreDimMag.error("Level is nullptr, cannot registry new dimension, name: {}, id: {}", dimName, dimId.id);
        return {-1};
    }

    // modify default dimension map
    ll::memory::modify(VanillaDimensions::$DimensionMap(), [&](auto& dimMap) {
        loggerMoreDimMag.debug("Add new dimension to DimensionMap");
        dimMap.mRight.insert(std::make_pair(dimName, dimId));
        dimMap.mLeft.insert(std::make_pair(dimId, dimName));
    });
    // modify default Undefined dimension id
    ll::memory::modify(VanillaDimensions::Undefined, [&](auto& dimId) {
        dimId.id = MoreDimensionMap.size();
        loggerMoreDimMag.debug("Set VanillaDimensions::Undefined to {}", dimId.id);
    });

    return dimId;
}
