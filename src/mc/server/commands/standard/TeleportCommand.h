#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // prevent constructor by default
    TeleportCommand& operator=(TeleportCommand const&) = delete;
    TeleportCommand(TeleportCommand const&)            = delete;
    TeleportCommand()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
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
     * ?getCommandAreaForTargets\@TeleportCommand\@\@CA?AV?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEBVCommandOrigin\@\@AEBV?$CommandSelectorResults\@VActor\@\@\@\@VVec3\@\@H_N\@Z
     */
    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(
        class CommandOrigin const&,
        class CommandSelectorResults<class Actor> const&,
        class Vec3,
        int,
        bool
    );
    /**
     * @symbol
     * ?getFacingDirection\@TeleportCommand\@\@AEBA?AW4FacingResult\@RotationCommandUtils\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@AEAVVec3\@\@PEAVActor\@\@\@Z
     */
    MCAPI enum class RotationCommandUtils::FacingResult
    getFacingDirection(class CommandOrigin const&, class CommandOutput&, class Vec3&, class Actor*) const;
    // NOLINTEND
};
