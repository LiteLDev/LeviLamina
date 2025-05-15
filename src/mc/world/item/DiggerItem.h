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
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class DiggerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Item::Tier const&>   mTier;
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
    // vIndex: 36
    virtual int getAttackDamage() const /*override*/;

    // vIndex: 38
    virtual bool isHandEquipped() const /*override*/;

    // vIndex: 55
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 53
    virtual bool isValidRepairItem(
        ::ItemStackBase const&,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 32
    virtual bool canDestroySpecial(::Block const& block) const /*override*/;

    // vIndex: 81
    virtual float getDestroySpeed(::ItemStackBase const& item, ::Block const& block) const /*override*/;

    // vIndex: 8
    virtual void executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const
        /*override*/;

    // vIndex: 0
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
