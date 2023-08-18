#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/FacingResult.h"
#include "mc/server/commands/RelativeFloat.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelectorResults.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
namespace RotationCommandUtils { class RotationData; }
namespace RotationCommandUtils { enum class FacingResult; }
// clang-format on

class TeleportCommand : public ::Command {

public:
    std::function<void(
        Actor&,
        Vec3,
        Vec3*,
        AutomaticID<Dimension, int>,
        const std::optional<RotationCommandUtils::RotationData>&,
        int
    )>
        mApplyTeleport; // this+0x20

    class CommandSelector<Actor>       mTargets;               // this+0x60
    class CommandSelector<Actor>       mDestinationEntity;     // this+0x128
    CommandPositionFloat               mDestinationPos;        // this+0x1F0
    class CommandSelector<Actor>       mFacingEntity;          // this+0x200
    CommandPositionFloat               mFacingPos;             // this+0x2C8
    RelativeFloat                      mYRot;                  // this+0x2D8
    RelativeFloat                      mXRot;                  // this+0x2E0
    RotationCommandUtils::FacingResult mHaveFacing;            // this+0x2E8
    bool                               mDestinationIsPosition; // this+0x2EC
    bool                               mIsUsingRotation;       // this+0x2ED
    bool                               mFacingIsPosition;      // this+0x2EE
    bool                               mCheckForBlocks;        // this+0x2EF

    TeleportCommand() = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@TeleportCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?applyTarget\@TeleportCommand\@\@SAXAEAVActor\@\@VTeleportTarget\@\@_N\@Z
     */
    MCAPI static void applyTarget(class Actor&, class TeleportTarget, bool);
    /**
     * @symbol
     * ?computeTarget\@TeleportCommand\@\@SA?AVTeleportTarget\@\@AEAVActor\@\@VVec3\@\@PEAV4\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$optional\@VRotationData\@RotationCommandUtils\@\@\@std\@\@H\@Z
     */
    MCAPI static class TeleportTarget computeTarget(
        class Actor&,
        class Vec3,
        class Vec3*,
        class AutomaticID<class Dimension, int>,
        std::optional<class RotationCommandUtils::RotationData> const&,
        int
    );
    /**
     * @symbol ?setup\@TeleportCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getFacingDirection\@TeleportCommand\@\@AEBA?AW4FacingResult\@RotationCommandUtils\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVVec3\@\@PEAVActor\@\@\@Z
     */
    MCAPI enum class RotationCommandUtils::FacingResult
    getFacingDirection(class CommandOrigin const&, class CommandOutput&, class Vec3&, class Actor*) const;
    /**
     * @symbol
     * ?getCommandAreaForTargets\@TeleportCommand\@\@CA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVCommandOrigin\@\@AEBV?$CommandSelectorResults\@VActor\@\@\@\@VVec3\@\@H_N\@Z
     */
    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(
        class CommandOrigin const&,
        class CommandSelectorResults<class Actor> const&,
        class Vec3,
        int,
        bool
    );
    // NOLINTEND
};
