#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Interaction {
public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&);

public:
    // NOLINTBEGIN
    MCAPI Interaction();

    MCAPI Interaction(class Interaction&&);

    MCAPI Interaction(class Interaction const&);

    MCAPI void addActorDefinitionIdentifierByName(std::string const& name);

    MCAPI void addLevelSoundEventByName(std::string const& name);

    MCAPI void setCooldown(float const& seconds);

    MCAPI void setCooldownAfterBeingAttacked(float const& seconds);

    MCAPI void setDropItemSlot(std::string const&);

    MCAPI void setEquipItemSlot(std::string const&);

    MCAPI void setParticleType(std::string const& name);

    MCAPI void setRepairItemAmount(int const&);

    MCAPI void setRepairItemSlot(std::string const&);

    MCAPI void setTransformItem(std::string const& name);

    MCAPI void setVibrationByName(std::string const&);

    MCAPI ~Interaction();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::optional<struct ItemSlotInfo> _tryConvertStringToItemSlotInfo(std::string const&);

    // NOLINTEND
};
