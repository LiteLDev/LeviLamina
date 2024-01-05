#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/server/commands/FacingResult.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace RotationCommandUtils { class RotationData; }
// clang-format on

class TeleportCommand : public ::Command {
public:
    // prevent constructor by default
    TeleportCommand& operator=(TeleportCommand const&);
    TeleportCommand(TeleportCommand const&);
    TeleportCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TeleportCommand@@UEAA@XZ
    virtual ~TeleportCommand() = default;

    // vIndex: 2, symbol: ?execute@TeleportCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?applyTarget@TeleportCommand@@SAXAEAVActor@@VTeleportTarget@@_N@Z
    MCAPI static void applyTarget(class Actor& victim, class TeleportTarget target, bool);

    // symbol:
    // ?computeTarget@TeleportCommand@@SA?AVTeleportTarget@@AEAVActor@@VVec3@@PEAV4@V?$AutomaticID@VDimension@@H@@AEBV?$optional@VRotationData@RotationCommandUtils@@@std@@H@Z
    MCAPI static class TeleportTarget computeTarget(
        class Actor&  victim,
        class Vec3    destination,
        class Vec3*   facePosition,
        DimensionType destinationDimension,
        std::optional<class RotationCommandUtils::RotationData> const&,
        int commandVersion
    );

    // symbol: ?setup@TeleportCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?getFacingDirection@TeleportCommand@@AEBA?AW4FacingResult@RotationCommandUtils@@AEBVCommandOrigin@@AEAVCommandOutput@@AEAVVec3@@PEAVActor@@@Z
    MCAPI ::RotationCommandUtils::FacingResult
    getFacingDirection(class CommandOrigin const& origin, class CommandOutput& output, class Vec3& faceTarget, class Actor*)
        const;

    // symbol:
    // ?getCommandAreaForTargets@TeleportCommand@@CA?AV?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEBVCommandOrigin@@AEBV?$CommandSelectorResults@VActor@@@@VVec3@@H_N@Z
    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(
        class CommandOrigin const&                       origin,
        class CommandSelectorResults<class Actor> const& targets,
        class Vec3                                       destination,
        int                                              commandVersion,
        bool                                             allowUnloadedChunks
    );

    // NOLINTEND
};
