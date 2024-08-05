#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/FacingResult.h"
#include "mc/server/commands/RelativeFloat.h"

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
    std::function<
        void(Actor&, Vec3, Vec3*, DimensionType, std::optional<RotationCommandUtils::RotationData> const&, int)>
        mApplyTeleport; // this+0x20

    CommandSelector<Actor>             mTargets;               // this+0x60
    CommandSelector<Actor>             mDestinationEntity;     // this+0x128
    CommandPositionFloat               mDestinationPos;        // this+0x1F0
    CommandSelector<Actor>             mFacingEntity;          // this+0x200
    CommandPositionFloat               mFacingPos;             // this+0x2C8
    RelativeFloat                      mYRot;                  // this+0x2D8
    RelativeFloat                      mXRot;                  // this+0x2E0
    RotationCommandUtils::FacingResult mHaveFacing;            // this+0x2E8
    bool                               mDestinationIsPosition; // this+0x2EC
    bool                               mIsUsingRotation;       // this+0x2ED
    bool                               mFacingIsPosition;      // this+0x2EE
    bool                               mCheckForBlocks;        // this+0x2EF

    TeleportCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TeleportCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void applyTarget(class Actor& victim, class TeleportTarget target, bool);

    MCAPI static class TeleportTarget computeTarget(
        class Actor&  victim,
        class Vec3    destination,
        class Vec3*   facePosition,
        DimensionType destinationDimension,
        std::optional<class RotationCommandUtils::RotationData> const&,
        int commandVersion
    );

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void doArmorStandTeleportBackwardCompability(class Actor& target, class Actor const*) const;

    MCAPI ::RotationCommandUtils::FacingResult
    getFacingDirection(class CommandOrigin const& origin, class CommandOutput& output, class Vec3& faceTarget, class Actor*)
        const;

    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(
        class CommandOrigin const&                       origin,
        class CommandSelectorResults<class Actor> const& targets,
        class Vec3                                       destination,
        int                                              commandVersion,
        bool                                             allowUnloadedChunks
    );

    // NOLINTEND
};
