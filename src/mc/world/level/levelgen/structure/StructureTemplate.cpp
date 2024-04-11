#include "mc/world/level/levelgen/structure/StructureTemplate.h"

#include "mc/server/ServerLevel.h"
#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/levelgen/structure/StructureManager.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

#include "ll/api/service/Bedrock.h"

void StructureTemplate::placeInWorld(
    BlockSource&    blockSource,
    BlockPos const& minCorner,
    Mirror          mirror,
    Rotation        rotation,
    bool            ignoreBlocks,
    bool            ignoreEntities
) const {
    auto setting    = StructureSettings(getSize(), ignoreBlocks, ignoreEntities);
    setting.mMirror = mirror;
    setting.setRotation(rotation);
    placeInWorld(blockSource, blockSource.getLevel().getBlockPalette(), minCorner, setting);
}


std::unique_ptr<StructureTemplate> StructureTemplate::create(const std::string& name, CompoundTag const& tag) {
    if (!ll::service::getLevel()) {
        return nullptr;
    }
    auto res = std::make_unique<StructureTemplate>(name, ll::service::getLevel()->getUnknownBlockTypeRegistry());
    bool success{res->load(tag)};
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
    auto res     = std::make_unique<StructureTemplate>(name, blockSource.getLevel().getUnknownBlockTypeRegistry());
    auto setting = StructureSettings(boundingBox.getSideLength(), ignoreBlocks, ignoreEntities);
    res->fillFromWorld(blockSource, boundingBox.min, setting);
    return res;
}
