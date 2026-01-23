#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

enum class AssetType : int {
    BlockOrEntity           = -1,
    Block                   = 0,
    Entity                  = 1,
    Atmosphere              = 2,
    Biome                   = 3,
    BlockTexture            = 4,
    CameraAimAssist         = 5,
    CameraAimAssistCategory = 6,
    CameraPreset            = 7,
    ColorGrading            = 8,
    Fog                     = 9,
    Item                    = 10,
    ItemTexture             = 11,
    JigsawProcessorList     = 12,
    JigsawStructure         = 13,
    JigsawStructureSet      = 14,
    JigsawTemplatePool      = 15,
    Lighting                = 16,
    LootTable               = 17,
    Music                   = 18,
    Skybox                  = 19,
    Sound                   = 20,
    TextureFile             = 21,
    Structure               = 22,
    Water                   = 23,
};

}
