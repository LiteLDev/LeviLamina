#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class BlockSource;
class CompoundTag;
class Container;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class Vec3;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
namespace mce { class Color; }
// clang-format on

class HumanoidArmorItem : public ::Item {
public:
    // HumanoidArmorItem inner types declare
    // clang-format off
    class ArmorMaterial;
    // clang-format on

    // HumanoidArmorItem inner types define
    enum class Tier : int {
        Leather   = 0,
        Chain     = 1,
        Iron      = 2,
        Diamond   = 3,
        Gold      = 4,
        Elytra    = 5,
        Turtle    = 6,
        Netherite = 7,
    };

    class ArmorMaterial {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk7f7e31;
        ::ll::UntypedStorage<4, 16> mUnk6bd321;
        ::ll::UntypedStorage<4, 4>  mUnk3edbb0;
        ::ll::UntypedStorage<4, 4>  mUnk511109;
        ::ll::UntypedStorage<4, 4>  mUnked0bc4;
        // NOLINTEND

    public:
        // prevent constructor by default
        ArmorMaterial& operator=(ArmorMaterial const&);
        ArmorMaterial(ArmorMaterial const&);
        ArmorMaterial();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8936e6;
    ::ll::UntypedStorage<4, 4> mUnk2b9417;
    ::ll::UntypedStorage<4, 4> mUnk4d8307;
    ::ll::UntypedStorage<8, 8> mUnk84796a;
    ::ll::UntypedStorage<1, 1> mUnk354743;
    // NOLINTEND

public:
    // prevent constructor by default
    HumanoidArmorItem& operator=(HumanoidArmorItem const&);
    HumanoidArmorItem(HumanoidArmorItem const&);
    HumanoidArmorItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 10
    virtual bool isHumanoidArmor() const /*override*/;

    // vIndex: 53
    virtual bool isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 55
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 56
    virtual int getArmorValue() const /*override*/;

    // vIndex: 57
    virtual int getToughnessValue() const /*override*/;

    // vIndex: 121
    virtual float getArmorKnockbackResistance() const;

    // vIndex: 67
    virtual bool hasCustomColor(::CompoundTag const* userData) const /*override*/;

    // vIndex: 66
    virtual ::mce::Color getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const /*override*/;

    // vIndex: 69
    virtual void clearColor(::ItemStackBase& instance) const /*override*/;

    // vIndex: 70
    virtual void setColor(::ItemStackBase& item, ::mce::Color const& color) const /*override*/;

    // vIndex: 15
    virtual bool isDyeable() const /*override*/;

    // vIndex: 22
    virtual bool isTrimAllowed() const /*override*/;

    // vIndex: 101
    virtual ::ActorLocation getEquipLocation() const /*override*/;

    // vIndex: 102
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const /*override*/;

    // vIndex: 61
    virtual int getDamageChance(int unbreaking) const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const
        /*override*/;

    // vIndex: 52
    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const /*override*/;

    // vIndex: 82
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo
    getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    // vIndex: 74
    virtual int buildIdAux(short auxValue, ::CompoundTag const* userData) const /*override*/;

    // vIndex: 0
    virtual ~HumanoidArmorItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HumanoidArmorItem(
        ::std::string const&                      name,
        short                                     id,
        ::HumanoidArmorItem::ArmorMaterial const& armorType,
        int                                       icon,
        ::ArmorSlot                               slot,
        bool                                      currentVersionAllowsTrim
    );

    MCAPI ::ItemInstance getTierItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void ResetDefaultLeatherColor();

    MCAPI static bool isDamageable(::ItemDescriptor const& item);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& CHAIN();

    MCAPI static ::mce::Color& DEFAULT_LEATHER_COLOR();

    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& DIAMOND();

    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& ELYTRA();

    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& GOLD();

    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& IRON();

    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& LEATHER();

    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& NETHERITE();

    MCAPI static ::HumanoidArmorItem::ArmorMaterial const& TURTLE();

    MCAPI static ::std::add_lvalue_reference_t<int const[]> mHealthPerSlot();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                      name,
        short                                     id,
        ::HumanoidArmorItem::ArmorMaterial const& armorType,
        int                                       icon,
        ::ArmorSlot                               slot,
        bool                                      currentVersionAllowsTrim
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isHumanoidArmor() const;

    MCAPI bool $isValidRepairItem(
        ::ItemStackBase const&   source,
        ::ItemStackBase const&   repairItem,
        ::BaseGameVersion const& baseGameVersion
    ) const;

    MCAPI int $getEnchantSlot() const;

    MCAPI int $getEnchantValue() const;

    MCAPI int $getArmorValue() const;

    MCAPI int $getToughnessValue() const;

    MCAPI float $getArmorKnockbackResistance() const;

    MCAPI bool $hasCustomColor(::CompoundTag const* userData) const;

    MCAPI ::mce::Color $getColor(::CompoundTag const* userData, ::ItemDescriptor const&) const;

    MCAPI void $clearColor(::ItemStackBase& instance) const;

    MCAPI void $setColor(::ItemStackBase& item, ::mce::Color const& color) const;

    MCAPI bool $isDyeable() const;

    MCAPI bool $isTrimAllowed() const;

    MCAPI ::ActorLocation $getEquipLocation() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCAPI int $getDamageChance(int unbreaking) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           showCategory
    ) const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCAPI ::ResolvedItemIconInfo
    $getIconInfo(::ItemStackBase const& item, int newAnimationFrame, bool inInventoryPane) const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCAPI int $buildIdAux(short auxValue, ::CompoundTag const* userData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
