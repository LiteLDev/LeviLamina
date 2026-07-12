#include "ll/core/tweak/SimulatedPlayerFixes.h"

#include "ll/api/base/ScopedValue.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/memory/Memory.h"
#include "ll/core/LeviLamina.h"
#include "mc/gametest/MinecraftGameTestHelper.h"
#include "mc/gametest/framework/GameTestError.h"
#include "mc/scripting/modules/minecraft/events/ScriptActorEventListener.h"
#include "mc/server/ServerPlayer.h"
#include "mc/server/SimulatedPlayer.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/chunk/ChunkSource.h"
#include "mc/world/level/chunk/ChunkViewSource.h"
#include "mc/world/level/storage/LevelData.h"

#include <algorithm>
#include <limits>
#include <memory>
#include <string>
#include <variant>

namespace ll::simulated_player_fixes {
namespace {

using GameTestSimulatedPlayerSpawnResult = std::variant<gametest::GameTestError, SimulatedPlayer*>;

thread_local bool isSpawningGameTestSimulatedPlayer = false;

bool shouldUsePlayerChunkLoading(SimulatedPlayer const& player) {
    return !isSpawningGameTestSimulatedPlayer && !static_cast<bool>(player.getGameTestHelper());
}

void configureSimulatedPlayerChunkRadius(SimulatedPlayer& player) {
    auto const serverTickRange = player.getLevel().getLevelData().mServerTickRange;
    if (serverTickRange == 0) {
        return;
    }

    auto const maxChunkRadius  = static_cast<uint>(player.mMaxChunkRadius);
    auto const requestedRadius = std::min(static_cast<uint>(serverTickRange), maxChunkRadius);
    auto const clientMaxRadius = static_cast<uchar>(std::min<uint>(maxChunkRadius, std::numeric_limits<uchar>::max()));
    if (requestedRadius != 0 && clientMaxRadius != 0) {
        player.setClientChunkRadius(requestedRadius, clientMaxRadius);
    }
}

template <class>
struct MemberFunctionToFunctionPointer;

template <class R, class C, class... Args>
struct MemberFunctionToFunctionPointer<R (C::*)(Args...)> {
    using type = R (*)(C*, Args...);
};

template <class R, class C, class... Args>
struct MemberFunctionToFunctionPointer<R (C::*)(Args...) const> {
    using type = R (*)(C const*, Args...);
};

template <class T>
using MemberFunctionToFunctionPointerT = typename MemberFunctionToFunctionPointer<T>::type;

class SimulatedPlayerChunkLoadingVtablePatch {
    using GetSpawnChunkLimit = MemberFunctionToFunctionPointerT<decltype(&SimulatedPlayer::_getSpawnChunkLimit)>;
    using UpdateChunkView    = MemberFunctionToFunctionPointerT<decltype(&SimulatedPlayer::_updateChunkPublisherView)>;

    inline static GetSpawnChunkLimit mOriginalGetSpawnChunkLimit{};
    inline static UpdateChunkView    mOriginalUpdateChunkView{};
    inline static void**             mPatchedVtable{};

    static int getSpawnChunkLimit(SimulatedPlayer const* player) {
        if (shouldUsePlayerChunkLoading(*player)) {
            return player->ServerPlayer::$_getSpawnChunkLimit();
        }
        return mOriginalGetSpawnChunkLimit(player);
    }

    static void updateChunkView(SimulatedPlayer* player, Vec3 const& position, float minDistance) {
        if (shouldUsePlayerChunkLoading(*player)) {
            player->ServerPlayer::$_updateChunkPublisherView(position, minDistance);
            return;
        }
        mOriginalUpdateChunkView(player, position, minDistance);
    }

public:
    static void install(SimulatedPlayer& player) {
        auto* vtable = *reinterpret_cast<void***>(&player);
        if (mPatchedVtable == vtable) {
            return;
        }
        if (mPatchedVtable || !vtable) {
            return;
        }

        auto const getSpawnChunkLimitSlot = memory::getVtableIndex(&SimulatedPlayer::_getSpawnChunkLimit);
        auto const updateChunkViewSlot    = memory::getVtableIndex(&SimulatedPlayer::_updateChunkPublisherView);
#ifdef LL_DEBUG
        if (getSpawnChunkLimitSlot) {
            getLogger().debug("SimulatedPlayer vtable slot _getSpawnChunkLimit={}", *getSpawnChunkLimitSlot);
        } else {
            getLogger().debug("SimulatedPlayer vtable slot _getSpawnChunkLimit is unavailable");
        }
        if (updateChunkViewSlot) {
            getLogger().debug("SimulatedPlayer vtable slot _updateChunkPublisherView={}", *updateChunkViewSlot);
        } else {
            getLogger().debug("SimulatedPlayer vtable slot _updateChunkPublisherView is unavailable");
        }
#endif
        if (!getSpawnChunkLimitSlot || !updateChunkViewSlot) {
            return;
        }

        auto const firstSlot        = std::min(*getSpawnChunkLimitSlot, *updateChunkViewSlot);
        auto const lastSlot         = std::max(*getSpawnChunkLimitSlot, *updateChunkViewSlot);
        mOriginalGetSpawnChunkLimit = reinterpret_cast<GetSpawnChunkLimit>(vtable[*getSpawnChunkLimitSlot]);
        mOriginalUpdateChunkView    = reinterpret_cast<UpdateChunkView>(vtable[*updateChunkViewSlot]);
        memory::modify(vtable + firstSlot, (lastSlot - firstSlot + 1) * sizeof(void*), [&] {
            vtable[*getSpawnChunkLimitSlot] = memory::toFuncPtr(&getSpawnChunkLimit);
            vtable[*updateChunkViewSlot]    = memory::toFuncPtr(&updateChunkView);
        });
        mPatchedVtable = vtable;
    }
};

} // namespace

LL_TYPE_INSTANCE_HOOK(
    SimulatedPlayerPrepareRegionHook,
    HookPriority::Highest,
    ServerPlayer,
    &ServerPlayer::$prepareRegion,
    void,
    ChunkSource& mainChunkSource
) {
    if (this->isSimulated()) {
        auto* simulatedPlayer = static_cast<SimulatedPlayer*>(static_cast<ServerPlayer*>(this));
        if (shouldUsePlayerChunkLoading(*simulatedPlayer)) {
            SimulatedPlayerChunkLoadingVtablePatch::install(*simulatedPlayer);
            configureSimulatedPlayerChunkRadius(*simulatedPlayer);
        }
    }
    origin(mainChunkSource);
}

LL_TYPE_INSTANCE_HOOK(
    SimulatedPlayerCreateChunkSourceHook,
    HookPriority::Highest,
    SimulatedPlayer,
    &SimulatedPlayer::$_createChunkSource,
    std::shared_ptr<ChunkViewSource>,
    ChunkSource& mainChunkSource
) {
    if (!shouldUsePlayerChunkLoading(*this)) {
        return origin(mainChunkSource);
    }

    return this->Player::$_createChunkSource(mainChunkSource);
}

LL_TYPE_INSTANCE_HOOK(
    GameTestSimulatedPlayerSpawnHook,
    HookPriority::Highest,
    MinecraftGameTestHelper,
    &MinecraftGameTestHelper::$spawnSimulatedPlayer,
    GameTestSimulatedPlayerSpawnResult,
    std::string const& name,
    BlockPos const&    pos,
    GameType           gameMode
) {
    ScopedValue scope{isSpawningGameTestSimulatedPlayer, true};
    return origin(name, pos, gameMode);
}

LL_TYPE_INSTANCE_HOOK(
    SimulatedPlayerScriptActorCreatedHook,
    HookPriority::Highest,
    ScriptModuleMinecraft::ScriptActorEventListener,
    &ScriptModuleMinecraft::ScriptActorEventListener::$onActorCreated,
    EventResult,
    Actor&                    actor,
    ActorInitializationMethod initializationMethod
) {
    if (!actor.isSimulatedPlayer()) {
        return origin(actor, initializationMethod);
    }
    if (!isSpawningGameTestSimulatedPlayer) {
        return EventResult::KeepGoing;
    }

    // Do not let callbacks triggered by the GameTest actor creation inherit its provenance.
    ScopedValue scope{isSpawningGameTestSimulatedPlayer, false};
    return origin(actor, initializationMethod);
}

void enable(bool enableChunkLoading) {
    static memory::HookRegistrar<GameTestSimulatedPlayerSpawnHook, SimulatedPlayerScriptActorCreatedHook>
        gameTestSimulatedPlayerRegistrar;

    if (enableChunkLoading) {
        static memory::HookRegistrar<SimulatedPlayerPrepareRegionHook, SimulatedPlayerCreateChunkSourceHook>
            simulatedPlayerChunkLoadingRegistrar;
    }
}

} // namespace ll::simulated_player_fixes
