#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class HashedString;
class ItemStackBase;
class Level;
class RenderParams;
struct ItemTier;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class DiggerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemTier const&>     mTier;
    ::ll::TypedStorage<8, 8, ::HashedString const&> mBlockDestructionTag;
    ::ll::TypedStorage<4, 4, int>                   mAttackDamage;
    // NOLINTEND

public:
    // prevent constructor by default
    DiggerItem& operator=(DiggerItem const&);
    DiggerItem(DiggerItem const&);
    DiggerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getAttackDamage() const /*override*/;

    virtual bool isHandEquipped() const /*override*/;

    virtual int getEnchantValue() const /*override*/;

    virtual bool isValidRepairItem(
        ::ItemStackBase const&,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    virtual void
    executeEvent(::ItemStackBase& item, ::std::string const& name, ::HandSlot handSlot, ::RenderParams& params) const
        /*override*/;

    virtual ::std::string getEfficiencyHoverText(::ItemStackBase const& stack) const;

    virtual ::std::string_view getEfficiencyLocalization() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getAttackDamage() const;

    MCNAPI bool $isHandEquipped() const;

    MCNAPI int $getEnchantValue() const;

    MCNAPI bool $isValidRepairItem(
        ::ItemStackBase const&,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCNAPI bool $canDestroySpecial(::Block const& block) const;

    MCNAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCNAPI void
    $executeEvent(::ItemStackBase& item, ::std::string const& name, ::HandSlot handSlot, ::RenderParams& params) const;

    MCNAPI ::std::string $getEfficiencyHoverText(::ItemStackBase const& stack) const;

    MCNAPI ::std::string_view $getEfficiencyLocalization() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
