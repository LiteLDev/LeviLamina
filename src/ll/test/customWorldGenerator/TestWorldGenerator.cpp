#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Memory.h"
#include "ll/core/LeviLamina.h"
#include "ll/test/customWorldGenerator/MyFlatWorldGenerator.hpp"
#include "mc/world/level/dimension/OverworldDimension.h"

// LL_AUTO_TYPE_INSTANCE_HOOK(OverworldDimensionCreateGeneratorHook, ll::memory::HookPriority::Normal,
// OverworldDimension,
// "?createGenerator@OverworldDimension@@UEAA?AV?$unique_ptr@VWorldGenerator@@U?$default_delete@VWorldGenerator@@@std@@@std@@XZ",
// std::unique_ptr<class WorldGenerator>) {
//     auto& level     = getLevel();
//     auto& levelData = level.getLevelData();
//     // auto  biome     = level.getBiomeRegistry().lookupByName(levelData.getBiomeOverride());
//     // auto& layer = levelData.getFlatWorldGeneratorOptions();
//     std::string layerstr =
//         R"({
//          "biome_id": 4,
//          "world_version": "version.post_1_18",
//          "block_layers": [
//            {
//              "block_name": "minecraft:bedrock",
//              "count": 1
//            },
//            {
//              "block_name": "minecraft:cherry_log",
//              "count": 2
//            },
//            {
//              "block_name": "minecraft:grass",
//              "count": 61
//            }
//          ],
//          "encoding_version": 6,
//          "structure_options": null
//        })";
//     Json::Value  layer;
//     Json::Reader reader;
//     reader.parse(layerstr, layer, 0);
//
//     ll::logger.warn("Superflat worlds will be created based on the following option:{}", layer.toStyledString());
//
//     return std::make_unique<MyFlatWorldGenerator>(*this, level.getSeed(), layer);
// }
