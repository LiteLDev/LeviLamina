#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/core/Config.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/DimensionConversionData.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/VanillaDimensions.h"

namespace ll::command {
struct TpSelf {
    DimensionType        dimension;
    CommandPositionFloat destination;
    bool                 convert{true};
};
struct TpTarget {
    DimensionType          dimension;
    CommandPositionFloat   destination;
    CommandSelector<Actor> victim;
    bool                   convert{true};
};

namespace {
constexpr int OverworldId = 0;
constexpr int NetherId    = 1;
constexpr int CustomIdMin = 1000;

constexpr bool isOverworldLike(int id) { return id == OverworldId || id >= CustomIdMin; }

// Only the nether <-> overworld pair has a meaningful destination for a direct teleport, so
// scale just that and hand every other pair to the engine verbatim, which is what vanilla /tp
// does. VanillaDimensions::convertPointBetweenDimensions is not usable here: it is
// portal-flavoured, discards the requested position for every end-related pair in favour of
// TheEndSpawnPoint or the world spawn point.
Vec3 convertPosition(Level& level, DimensionType from, DimensionType to, Vec3 const& position, bool convert) {
    if (!convert || from.mValue == to.mValue) {
        return position;
    }
    auto scale             = static_cast<float>(level.getDimensionConversionData().mNetherScale);
    bool fromOverworldLike = isOverworldLike(from.mValue);
    if (fromOverworldLike && to.mValue == NetherId) {
        return {position.x / scale, position.y, position.z / scale};
    }
    if (from.mValue == NetherId && isOverworldLike(to.mValue)) {
        return {position.x * scale, position.y, position.z * scale};
    }
    return position;
}
} // namespace

void registerTpdimCommand(bool isClientSide) {
    auto config = ll::getLeviConfig().modules.command.tpdimCommand;
    if (!config.enabled) {
        return;
    }
    auto& cmd = CommandRegistrar::getInstance(isClientSide)
                    .getOrCreateCommand("teleportdim", "commands.tp.description", config.permission)
                    .alias("tpdim");

    cmd.overload<TpSelf>()
        .required("destination")
        .required("dimension")
        .optional("convert")
        .execute([&](CommandOrigin const& origin, CommandOutput& output, TpSelf const& param, ::Command const& cmd) {
            auto self = origin.getEntity();
            if (!self) {
                output.error("Not an actor origin"_trl(origin.getLocaleCode()));
                return;
            }
            Vec3 pos = convertPosition(
                *origin.getLevel(),
                self->getDimensionId(),
                param.dimension,
                origin.getExecutePosition(cmd.mVersion, param.destination),
                param.convert
            );
            self->teleport(pos, param.dimension);
            output.success(
                "Teleported {0} to {1} {2}"_trl(
                    origin.getLocaleCode(),
                    origin.getName(),
                    VanillaDimensions::toString(param.dimension),
                    pos.toString()
                )
            );
        });
    cmd.overload<TpTarget>()
        .required("victim")
        .required("destination")
        .required("dimension")
        .optional("convert")
        .execute([&](CommandOrigin const& origin, CommandOutput& output, TpTarget const& param, ::Command const& cmd) {
            auto victim = param.victim.results(origin);
            if (victim.empty()) {
                output.error("No target"_trl(origin.getLocaleCode()));
                return;
            }
            Vec3 const destination = origin.getExecutePosition(cmd.mVersion, param.destination);
            auto const first       = *victim.begin();
            Vec3 const reported    = convertPosition(
                *origin.getLevel(),
                first->getDimensionId(),
                param.dimension,
                destination,
                param.convert
            );
            for (auto actor : victim) {
                // Each target may sit in its own dimension, so convert per actor.
                actor->teleport(
                    convertPosition(
                        *origin.getLevel(),
                        actor->getDimensionId(),
                        param.dimension,
                        destination,
                        param.convert
                    ),
                    param.dimension
                );
            }
            output.success(
                "Teleported {0} to {1} {2}"_trl(
                    origin.getLocaleCode(),
                    CommandOutputParameter{victim}.mString,
                    VanillaDimensions::toString(param.dimension),
                    reported.toString()
                )
            );
        });
}
} // namespace ll::command
