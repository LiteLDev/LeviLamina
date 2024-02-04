#include "ll/api/form/FormIdManager.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/service/Bedrock.h"
#include "mc/scripting/ServerScriptManager.h"
#include "mc/server/ServerInstance.h"


namespace ll::form {
uint FormIdAllocator::genFormId() {
    std::lock_guard<std::mutex> lock(mMutex);

    auto scriptManager = ll::service::getServerInstance()->getScriptManager();
    if (scriptManager && scriptManager->mFormPromiseTracker) {
        return ++scriptManager->mFormPromiseTracker->mLastRequestId;
    } else {
        return ++mCurrentId;
    }
}
} // namespace ll::form