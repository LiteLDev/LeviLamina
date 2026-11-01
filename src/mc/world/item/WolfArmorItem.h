#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
struct DurabilityThreshold;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class WolfArmorItem : public ::ComponentItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const
        /*override*/;

    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const* item, bool) const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               item,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual bool isBodyArmor() const /*override*/;

    virtual int getArmorValue() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getBreakSound() const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::SharedTypes::Legacy::ActorDamageCause> const& ABSORBABLE_DAMAGE_CAUSES();

    MCNAPI static ::std::vector<::DurabilityThreshold> const& DURABILITY_THRESHOLDS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const;

    MCNAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCNAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const* item, bool) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               item,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI bool $isBodyArmor() const;

    MCNAPI int $getArmorValue() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;


    // NOLINTEND
};
