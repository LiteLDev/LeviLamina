#include "mc/world/level/levelgen/structure/StructureTemplate.h"
#include "mc/world/level/levelgen/structure/StructureTemplateData.h"

#include "mc/server/ServerLevel.h"
#include "mc/world/level/BlockPalette.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
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
    StructureSettings setting;
    setting.mIgnoreBlocks   = ignoreBlocks;
    setting.mIgnoreEntities = ignoreEntities;
    *setting.mStructureSize = *mStructureTemplateData->mSize;
    setting.mMirror         = mirror;
    setting.mRotation       = rotation;
    placeInWorld(blockSource, blockSource.getLevel().getBlockPalette(), minCorner, setting, nullptr, true);
}


std::unique_ptr<StructureTemplate> StructureTemplate::create(const std::string& name, CompoundTag const& tag) {
    return ll::service::getLevel()
        .transform([&](auto& level) {
            auto res = std::make_unique<StructureTemplate>(name, level.getUnknownBlockTypeRegistry());
            bool success{res->load(tag)};
            if (!success) {
                res.reset();
            }
            return res;
        })
        .value_or(nullptr);
}

std::unique_ptr<StructureTemplate> StructureTemplate::create(
    const std::string& name,
    BlockSource&       blockSource,
    BoundingBox const& boundingBox,
    bool               ignoreBlocks,
    bool               ignoreEntities
) {
    auto res = std::make_unique<StructureTemplate>(name, blockSource.getLevel().getUnknownBlockTypeRegistry());
    StructureSettings setting;
    setting.mIgnoreBlocks   = ignoreBlocks;
    setting.mIgnoreEntities = ignoreEntities;
    *setting.mStructureSize = boundingBox.getSideLength();
    res->fillFromWorld(blockSource, boundingBox.min, setting);
    return res;
}
