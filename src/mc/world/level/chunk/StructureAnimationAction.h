#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/chunk/IRequestAction.h"

class StructureAnimationAction : public ::IRequestAction {
public:
    // prevent constructor by default
    StructureAnimationAction& operator=(StructureAnimationAction const&);
    StructureAnimationAction(StructureAnimationAction const&);
    StructureAnimationAction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureAnimationAction() = default;

    // vIndex: 1
    virtual void execute(class ServerLevel& level, class Dimension& dimension);

    // vIndex: 2
    virtual void serialize(class CompoundTag& tag);

    // vIndex: 3
    virtual bool operator==(class IRequestAction const&) const;

    MCAPI
    StructureAnimationAction(
        std::unique_ptr<class StructureAnimationData> structureAnimationData,
        DimensionType                                 dimensionType
    );

    MCAPI StructureAnimationAction(
        class StructureSettings const& structureSettings,
        DimensionType                  dimensionType,
        class BlockPos const&          loadPosition,
        std::string const&             fullName
    );

    MCAPI static bool isValidTag(class CompoundTag const& tag);

    MCAPI static std::unique_ptr<class StructureAnimationAction>
    load(class CompoundTag const& tag, std::string const& dimensionPrefix);

    // NOLINTEND
};
