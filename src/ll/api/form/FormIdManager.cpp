#include "ll/api/form/FormIdManager.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/service/Bedrock.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/ServerInstance.h"

namespace ll::form {
uint FormIdManager::genFormId() {
    std::lock_guard lock(mMutex);

    auto scriptManager = ll::service::getServerInstance()->getScriptManager();
    if (scriptManager && scriptManager->mFormPromiseTracker) {
        return ++scriptManager->mFormPromiseTracker->mLastRequestId;
    } else {
        return ++mCurrentId;
    }
}

uint       FormIdManager::mCurrentId = 0;
std::mutex FormIdManager::mMutex;
} // namespace ll::form
