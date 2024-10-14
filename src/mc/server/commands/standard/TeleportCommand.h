#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/util/rotation_command_utils/FacingResult.h"

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
    // vIndex: 0
    virtual ~TeleportCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void applyTarget(class Actor& victim, class TeleportTarget target, bool keepVelocity);

    MCAPI static class TeleportTarget computeTarget(
        class Actor&                                                   victim,
        class Vec3                                                     destination,
        class Vec3*                                                    facePosition,
        DimensionType                                                  destinationDimension,
        std::optional<class RotationCommandUtils::RotationData> const& rotationData,
        int                                                            commandVersion
    );

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void doArmorStandTeleportBackwardCompability(class Actor& target, class Actor const* destinationEntity) const;

    MCAPI ::RotationCommandUtils::FacingResult getFacingDirection(
        class CommandOrigin const& origin,
        class CommandOutput&       output,
        class Vec3&                faceTarget,
        class Actor*               destinationEntity
    ) const;

    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(
        class CommandOrigin const&                       origin,
        class CommandSelectorResults<class Actor> const& targets,
        class Vec3                                       destination,
        int                                              commandVersion,
        bool                                             allowUnloadedChunks
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
