#include "ll/api/service/Bedrock.h"

#include "ll/api/memory/Hook.h"

#include "mc/world/level/storage/DBStorage.h"
#include "mc/world/level/storage/DBStorageConfig.h"

#include <atomic>

namespace ll::service::inline bedrock {

static std::atomic<DBStorage*> dbStorage;

LL_TYPE_INSTANCE_HOOK(
    DBStorageHook,
    HookPriority::High,
    DBStorage,
    &DBStorage::$ctor,
    void*,
    ::DBStorageConfig                           config,
    ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv
) {
    auto res  = origin(std::move(config), std::move(levelDbEnv));
    dbStorage = this;
    return res;
}

LL_TYPE_INSTANCE_HOOK(DBStorageDtorHook, HookPriority::High, DBStorage, &DBStorage::$dtor, void) {
    dbStorage = nullptr;
    origin();
}

optional_ref<DBStorage> getDBStorage() { return dbStorage.load(); }

using HookReg = memory::HookRegistrar<
    DBStorageHook,
    DBStorageDtorHook>;

static HookReg hookRegister;

} // namespace ll::service::inline bedrock
