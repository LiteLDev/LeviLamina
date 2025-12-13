#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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

    virtual void executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const
        /*override*/;

    virtual ~DiggerItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getAttackDamage() const;

    MCFOLD bool $isHandEquipped() const;

    MCAPI int $getEnchantValue() const;

    MCAPI bool $isValidRepairItem(
        ::ItemStackBase const&,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI bool $canDestroySpecial(::Block const& block) const;

    MCAPI float $getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const;

    MCAPI void $executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
