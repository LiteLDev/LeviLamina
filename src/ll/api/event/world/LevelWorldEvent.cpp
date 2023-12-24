#include "ll/api/event/world/LevelEvent.h"
#include "ll/api/event/world/WorldEvent.h"

#include "mc/world/level/BlockSource.h"

#include "mc/nbt/CompoundTag.h"

namespace ll::event::inline world {
void LevelEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["level"] = (uintptr_t)&level();
}
void WorldEvent::serialize(CompoundTag& nbt) const {
    Event::serialize(nbt);
    nbt["blockSource"] = (uintptr_t)&blockSource();
}
Level&       LevelEvent::level() const { return mLevel; }
BlockSource& WorldEvent::blockSource() const { return mBlockSource; }
} // namespace ll::event::inline world
