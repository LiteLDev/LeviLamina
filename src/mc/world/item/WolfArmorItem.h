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
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WolfArmorItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WolfArmorItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool
    isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const
        /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const /*override*/;

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

    virtual ~WolfArmorItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WolfArmorItem(::std::string const& nameId, short id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::SharedTypes::Legacy::ActorDamageCause> const& ABSORBABLE_DAMAGE_CAUSES();

    MCAPI static ::std::vector<::DurabilityThreshold> const& DURABILITY_THRESHOLDS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, short id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool
    $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const& repairItem, ::BaseGameVersion const&) const;

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const* item, bool) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               item,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCFOLD bool $isBodyArmor() const;

    MCFOLD int $getArmorValue() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
