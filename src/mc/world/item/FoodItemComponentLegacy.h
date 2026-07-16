#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/world/effect/EffectDuration.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/components/IFoodItemComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class Item;
class ItemStack;
class Level;
class Player;
struct ItemOnUseResult;
namespace Json { class Value; }
// clang-format on

class FoodItemComponentLegacy : public ::IFoodItemComponent {
public:
    // FoodItemComponentLegacy inner types declare
    // clang-format off
    struct Effect;
    // clang-format on

    // FoodItemComponentLegacy inner types define
    enum class OnUseAction : int {
        None                 = -1,
        ChorusTeleport       = 0,
        SuspiciousStewEffect = 1,
    };

    struct Effect {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>              id;
        ::ll::TypedStorage<8, 32, ::std::string>   name;
        ::ll::TypedStorage<8, 32, ::std::string>   descriptionId;
        ::ll::TypedStorage<4, 4, ::EffectDuration> duration;
        ::ll::TypedStorage<4, 4, int>              amplifier;
        ::ll::TypedStorage<4, 4, float>            chance;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Item&>                                           mOwner;
    ::ll::TypedStorage<4, 4, int>                                               mNutrition;
    ::ll::TypedStorage<4, 4, float>                                             mSaturationModifier;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mUsingConvertsTo;
    ::ll::TypedStorage<4, 4, ::FoodItemComponentLegacy::OnUseAction>            mOnUseAction;
    ::ll::TypedStorage<4, 12, ::Vec3>                                           mOnUseRange;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCooldownCategory;
    ::ll::TypedStorage<4, 4, int>                                               mCooldownDuration;
    ::ll::TypedStorage<1, 1, bool>                                              mCanAlwaysEat;
    ::ll::TypedStorage<8, 24, ::std::vector<::FoodItemComponentLegacy::Effect>> mEffects;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                              mRemoveEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    FoodItemComponentLegacy& operator=(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy(FoodItemComponentLegacy const&);
    FoodItemComponentLegacy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getNutrition() const /*override*/;

    virtual float getSaturationModifier() const /*override*/;

    virtual bool canAlwaysEat() const /*override*/;

#ifdef LL_PLAT_S
    virtual ::Item const* eatItem(::ItemStack&, ::Actor&, ::Level&) /*override*/;
#else // LL_PLAT_C
    virtual ::Item const* eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void use(::ItemOnUseResult&, ::ItemStack&, ::Player&) /*override*/;
#else // LL_PLAT_C
    virtual void use(::ItemOnUseResult& result, ::ItemStack& instance, ::Player& player) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::Item const*
    useTimeDepleted(::ItemUseMethod&, ::ItemStack const&, ::ItemStack&, ::Player&, ::Level&) /*override*/;
#else // LL_PLAT_C
    virtual ::Item const* useTimeDepleted(
        ::ItemUseMethod& itemUseMethod,
        ::ItemStack const&,
        ::ItemStack& instance,
        ::Player&    player,
        ::Level&     level
    ) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

    MCAPI bool init(::Json::Value const& data, ::MolangVersion);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::Json::Value initializeFromNetwork(::CompoundTag const& tag);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD int $getNutrition() const;

    MCFOLD float $getSaturationModifier() const;

    MCAPI bool $canAlwaysEat() const;

    MCAPI ::Item const* $eatItem(::ItemStack& instance, ::Actor& actor, ::Level& level);

    MCAPI void $use(::ItemOnUseResult& result, ::ItemStack& instance, ::Player& player);

    MCAPI ::Item const* $useTimeDepleted(
        ::ItemUseMethod& itemUseMethod,
        ::ItemStack const&,
        ::ItemStack& instance,
        ::Player&    player,
        ::Level&     level
    );
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
