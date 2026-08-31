#include "mc/world/Minecraft.h"
#include "mc/world/GameSession.h"

Level* Minecraft::getLevel() const {
    if (mGameSession && mGameSession->mLevelEntity->has_value() && mGameSession->mLevel.get()) {
        return mGameSession->mLevel.get();
    }
    return nullptr;
}
