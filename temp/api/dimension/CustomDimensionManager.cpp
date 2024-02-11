
#include "CustomDimensionManager.h"

#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/Base64Utils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/dimension/CustomDimensionConfig.h"
#include "ll/core/dimension/FakeDimensionId.h"

#include "ll/api/command/CommandRegistrar.h"

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

LL_TYPE_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHook,
    HookPriority::Normal,
    VanillaDimensions,
    VanillaDimensions::fromSerializedInt,
    Bedrock::Result<DimensionType>,
    Bedrock::Result<int>&& dim
) {
    if (!dim || *dim <= 2) {
        return origin(std::move(dim));
    }
    return *dim;
};

LL_TYPE_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHookI,
    HookPriority::Normal,
    VanillaDimensions,
    VanillaDimensions::fromSerializedInt,
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
LL_TYPE_INSTANCE_HOOK(DimensionGetWeakRefHook, HookPriority::Normal, Dimension, &Dimension::getWeakRef, WeakRef<Dimension>) {
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

struct CustomDimensionManager::Impl {
    std::atomic<int> mNewDimensionId{3};
    std::mutex       mMapMutex;

    struct DimensionInfo {
        DimensionType id;
        CompoundTag   nbt;
    };
    std::unordered_map<std::string, DimensionInfo> customDimensionMap;
    std::unordered_set<std::string>                registeredDimension;
};

CustomDimensionManager::CustomDimensionManager() : impl(std::make_unique<Impl>()) {
    std::lock_guard lock{impl->mMapMutex};
    CustomDimensionConfig::setDimensionConfigPath();
    CustomDimensionConfig::loadConfigFile();
    if (!CustomDimensionConfig::dimConfig.dimensionList.empty()) {
        for (auto& [name, info] : CustomDimensionConfig::dimConfig.dimensionList) {
            impl->customDimensionMap.emplace(
                name,
                Impl::DimensionInfo{
                    info.dimId,
                    *CompoundTag::fromBinaryNbt(string_utils::decompress(base64_utils::decode(info.base64Nbt)))
                }
            );
        }
        impl->mNewDimensionId += static_cast<int>(impl->customDimensionMap.size());
    }
    FakeDimensionId::getInstance();
    CustomDimensionHookList::HookReg::hook();
};

CustomDimensionManager::~CustomDimensionManager() { CustomDimensionHookList::HookReg::unhook(); }

CustomDimensionManager& CustomDimensionManager::getInstance() {
    static CustomDimensionManager instance{};
    return instance;
}

DimensionType CustomDimensionManager::addDimension(
    std::string const&                  dimName,
    std::function<DimensionFactoryT>    factory,
    std::function<CompoundTag()> const& data
) {
    std::lock_guard     lock{impl->mMapMutex};
    Impl::DimensionInfo info;
    bool                newDim{};
    if (impl->customDimensionMap.contains(dimName)) {
        info = impl->customDimensionMap.at(dimName);
        loggerMoreDimMag.debug(
            "The dimension already registry. use old id, name: {}, id: {}, \ndata: {}",
            dimName,
            info.id.id,
            info.nbt.toSnbt()
        );
    } else {
        // Assign new id
        info.id  = impl->mNewDimensionId++;
        info.nbt = data();
        newDim   = true;
        loggerMoreDimMag
            .debug("registry new dimension, name: {}, id: {}, \ndata: {}", dimName, info.id.id, info.nbt.toSnbt());
    };

    // registry create dimension function
    if (!ll::service::getLevel()) {
        throw std::runtime_error("Level is nullptr, cannot registry new dimension " + dimName);
    }

    ll::service::getLevel()->getDimensionFactory().registerFactory(
        dimName,
        [dimName, info, factory = std::move(factory)](ILevel& ilevel, Scheduler& scheduler)
            -> OwnerPtr<Dimension> {
            loggerMoreDimMag.debug("Create dimension, name: {}, id: {}", dimName, info.id.id);
            return factory(DimensionFactoryInfo{ilevel, scheduler, info.nbt, info.id});
        }
    );

    // modify default dimension map
    loggerMoreDimMag.debug("Add new dimension to DimensionMap");
    ll::memory::modify(VanillaDimensions::$DimensionMap(), [&](auto& dimMap) {
        loggerMoreDimMag.debug("Add new dimension: name->{}, id->{} to DimensionMap", dimName, info.id.id);
        dimMap.insert_or_assign(dimName, info.id);
    });

    // modify default Undefined dimension id
    ll::memory::modify(VanillaDimensions::Undefined, [&](auto& uid) {
        uid.id = impl->mNewDimensionId;
        loggerMoreDimMag.debug("Set VanillaDimensions::Undefined to {}", uid.id);
    });

    // config
    impl->registeredDimension.emplace(dimName);
    if (newDim) {
        impl->customDimensionMap.emplace(dimName, info);
        CustomDimensionConfig::dimConfig.dimensionList.emplace(
            dimName,
            CustomDimensionConfig::Config::Info{
                info.id,
                base64_utils::encode(string_utils::compress(info.nbt.toBinaryNbt()))
            }
        );
        CustomDimensionConfig::saveConfigFile();
    }

    // add to command enum

    ll::command::CommandRegistrar::getInstance().addEnumValues(
        "Dimension",
        {
            {dimName, info.id}
    },
        Bedrock::type_id<CommandRegistry, DimensionType>()
    );

    return info.id;
}
} // namespace ll::dimension
