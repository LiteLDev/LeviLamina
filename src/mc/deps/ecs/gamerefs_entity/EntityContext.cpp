#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/ecs/gamerefs_entity/EntityRegistry.h"

WeakEntityRef EntityContext::getWeakRef() const {
    WeakStorageEntity storage{};
    storage.mRegistry = WeakRef<EntityRegistry>(mRegistry.weak_from_this());
    storage.mEntity   = mEntity;
    return storage;
}
