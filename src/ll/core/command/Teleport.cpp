#include "ll/core/command/BuiltinCommands.h"

#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/core/Config.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/DimensionConversionData.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/VanillaDimensions.h"

namespace ll::command {

using namespace ll::i18n_literals;

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

void registerTpdimCommand() {
    auto config = ll::globalConfig.modules.command.tpdimOverload;
    if (!config.enabled) {
        return;
    }
    auto& cmd = CommandRegistrar::getInstance().getOrCreateCommand("tp");

    cmd.overload<TpSelf>()
        .required("destination")
        .required("dimension")
        .optional("convert")
        .execute([&](CommandOrigin const& origin, CommandOutput& output, TpSelf const& param, ::Command const& cmd) {
            auto self = origin.getEntity();
            if (!self) {
                output.error("Not an actor origin"_tr());
                return;
            }
            Vec3 pos;
            if (!param.convert) {
                pos = origin.getExecutePosition(cmd.mVersion, param.destination);
            } else if (!VanillaDimensions::convertPointBetweenDimensions(
                           origin.getExecutePosition(cmd.mVersion, param.destination),
                           pos,
                           origin.getDimension()->getDimensionId(),
                           param.dimension,
                           origin.getLevel()->getDimensionConversionData()
                       )) {
                output.error("fail to convert position between dimensions"_tr());
                return;
            }
            self->teleport(pos, param.dimension);
            output.success("Teleported {0} to {1} {2}"_tr(
                origin.getName(),
                VanillaDimensions::toString(param.dimension),
                pos.toString()
            ));
        });
    cmd.overload<TpTarget>()
        .required("victim")
        .required("destination")
        .required("dimension")
        .optional("convert")
        .execute([&](CommandOrigin const& origin, CommandOutput& output, TpTarget const& param, ::Command const& cmd) {
            auto victim = param.victim.results(origin);
            if (victim.empty()) {
                output.error("No target"_tr());
                return;
            }
            Vec3 pos;
            if (!param.convert) {
                pos = origin.getExecutePosition(cmd.mVersion, param.destination);
            } else if (!VanillaDimensions::convertPointBetweenDimensions(
                           origin.getExecutePosition(cmd.mVersion, param.destination),
                           pos,
                           origin.getDimension()->getDimensionId(),
                           param.dimension,
                           origin.getLevel()->getDimensionConversionData()
                       )) {
                output.error("fail to convert position between dimensions"_tr());
                return;
            }
            for (auto actor : victim) {
                actor->teleport(pos, param.dimension);
            }
            output.success("Teleported {0} to {1} {2}"_tr(
                CommandOutputParameter{victim}.str,
                VanillaDimensions::toString(param.dimension),
                pos.toString()
            ));
        });
}
} // namespace ll::command
