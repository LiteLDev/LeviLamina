#include "mc/server/SimulatedPlayer.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/utils/RandomUtils.h"
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerLevel.h"

optional_ref<SimulatedPlayer> SimulatedPlayer::create(
    std::string const& name,
    class Vec3 const&  pos,
    DimensionType      dimId,
    class Vec2 const&  rotation
) {
    if (!ll::service::getServerNetworkHandler()) {
        return nullptr;
    }
    auto ownerPtr = ll::service::getServerNetworkHandler()->createSimulatedPlayer(
        name,
        std::to_string(ll::random_utils::rand<int64>(INT64_MIN, -1))
    );
    auto player = ownerPtr.tryUnwrap<SimulatedPlayer>();
    if (!player) {
        return nullptr;
    }
    player->postLoad(true);
    player->getLevel().addUser(std::move(ownerPtr));
    if (pos == Vec3::MIN) {
        player->setLocalPlayerAsInitialized();
        player->doInitialSpawn();
        return player;
    }
    player->setRespawnReady(pos + Vec3{0, 1.62001, 0});
    player->setRespawnPosition(pos, dimId);
    player->setLocalPlayerAsInitialized();
    player->doInitialSpawn();
    player->teleport(pos, dimId, rotation);
    return player;
}

bool SimulatedPlayer::simulateDestroyLookAt(float handLength) {

    auto hitResult = traceRay(handLength, false);

    if (hitResult.mType != HitResultType::Tile) {
        return false;
    }
    return simulateDestroyBlock(hitResult.mBlockPos, (ScriptModuleMinecraft::ScriptFacing)hitResult.mFacing);
}
