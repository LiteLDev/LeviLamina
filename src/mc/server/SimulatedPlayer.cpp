#include "mc/server/SimulatedPlayer.h"
#include "ll/api/base/Random.h"
#include "ll/api/service/GlobalService.h"
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/network/ServerNetworkHandler.h"
#include "mc/server/ServerLevel.h"

using namespace ll;

optional_ref<SimulatedPlayer> SimulatedPlayer::create(
    std::string const& name,
    class Vec3 const&  pos,
    DimensionType      dimId,
    class Vec2 const&  rotation
) {
    if (!ll::Global<ServerNetworkHandler>) {
        return nullptr;
    }
    OwnerPtrT<EntityRefTraits> ownerPtr = ll::Global<ServerNetworkHandler>->createSimulatedPlayer(
        name,
        std::to_string(random::rand<int64>(INT64_MIN, -1))
    );
    auto player = ownerPtr.tryUnwrap<SimulatedPlayer>();

    if (player == nullptr) {
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