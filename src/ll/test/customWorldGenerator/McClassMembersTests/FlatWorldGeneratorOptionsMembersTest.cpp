#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
#include "mc/world/level/levelgen/flat/FlatWorldGeneratorOptions.h"

// LL_AUTO_TYPE_INSTANCE_HOOK(
//     FlatWorldGeneratorGeneratePrototypeBlockValuesHook,
//     ll::memory::HookPriority::Normal,
//     FlatWorldGenerator,
//     &FlatWorldGenerator::_generatePrototypeBlockValues,
//     void,
//     FlatWorldGeneratorOptions const& flatWorldGeneratorOptions,
//     short                            s
//) {
//
//     origin(flatWorldGeneratorOptions, s);
//
//     ll::logger.warn("FlatWorldGeneratorGeneratePrototypeBlockValuesHook");
//     ll::logger.warn("flatWorldGeneratorOptions.mEncodingVersion={}", flatWorldGeneratorOptions.mEncodingVersion);
//     ll::logger.warn("flatWorldGeneratorOptions.mWorldVersion={}", (int)flatWorldGeneratorOptions.mWorldVersion);
//     ll::logger.warn(
//         "flatWorldGeneratorOptions.mStructureOptions={}",
//         flatWorldGeneratorOptions.mStructureOptions.toStyledString()
//     );
// }
