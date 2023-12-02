#include "mc/world/level/levelgen/structure/StructureTemplate.h"

#include "mc/server/ServerLevel.h"
#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/levelgen/structure/StructureManager.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

#include "ll/api/service/GlobalService.h"

using ll::Global;

void StructureTemplate::placeInWorld(
    BlockSource&    blockSource,
    BlockPos const& minCorner,
    Mirror          mirror,
    Rotation        rotation,
    bool            ignoreBlocks,
    bool            ignoreEntities
) const {
    if (!Global<Level>) {
        return;
    }
    auto setting    = StructureSettings(getSize(), ignoreBlocks, ignoreEntities);
    setting.mMirror = mirror;
    setting.setRotation(rotation);
    placeInWorld(blockSource, Global<Level>->getBlockPalette(), minCorner, setting);
}


std::unique_ptr<StructureTemplate> StructureTemplate::create(const std::string& name, CompoundTag const& tag) {
    if (!Global<StructureManager>) {
        return nullptr;
    }
    auto& unknownBlockRegistry = Global<StructureManager>->mUnknownBlockRegistry;
    auto  res                  = std::make_unique<StructureTemplate>(name, unknownBlockRegistry);
    bool  success{res->load(tag)};
    if (!success) {
        return nullptr;
    }
    return res;
}

std::unique_ptr<StructureTemplate> StructureTemplate::create(
    const std::string& name,
    BlockSource&       blockSource,
    BoundingBox const& boundingBox,
    bool               ignoreBlocks,
    bool               ignoreEntities
) {
    if (!Global<StructureManager>) {
        return nullptr;
    }
    auto& unknownBlockRegistry = Global<StructureManager>->mUnknownBlockRegistry;
    auto  res                  = std::make_unique<StructureTemplate>(name, unknownBlockRegistry);
    auto  setting              = StructureSettings(boundingBox.getSideLength(), ignoreBlocks, ignoreEntities);
    res->fillFromWorld(blockSource, boundingBox.min, setting);
    return res;
}
