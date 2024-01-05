#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "magic_enum.hpp"
#include "mc/util/Random.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/levelgen/structure/StructureStart.h"

LL_AUTO_TYPED_INSTANCE_HOOK(
    StructureStartHook,
    ll::memory::HookPriority::Normal,
    StructureStart,
    &StructureStart::calculateBoundingBox,
    void
) {
    origin();

    ll::logger.info("calculateBoundingBox");
    ll::logger.info("StructureStart:");
    ll::logger.info("mChunkX={}", this->mChunkX);
    ll::logger.info("mChunkZ={}", this->mChunkZ);
}