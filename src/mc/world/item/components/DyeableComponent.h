#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
// clang-format on

class DyeableComponent {
public:
    // prevent constructor by default
    DyeableComponent& operator=(DyeableComponent const&);
    DyeableComponent(DyeableComponent const&);
    DyeableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DyeableComponent@@UEAA@XZ
    virtual ~DyeableComponent() = default;

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ShooterItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@ItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VAllowOffHandItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VAllowOffHandItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@EntityPlacerItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@PlanterItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool
    _canUseOn(class ItemStack const& instance, class Actor& entity, class BlockPos const& pos, uchar face) const;

    // vIndex: 8, symbol: ?_useOn@EntityPlacerItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool
    _useOn(class ItemStack& instance, class Actor&, class BlockPos const& pos, uchar face, class Vec3 const& clickPos)
        const;

    // vIndex: 9, symbol: ?_initializeComponent@AllowOffHandItemComponent@@UEAAXXZ
    virtual void _initializeComponent();

    // symbol:
    // ?appendFormattedHovertext@DyeableComponent@@QEBAXAEBVItemStackBase@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    MCAPI void
    appendFormattedHovertext(class ItemStackBase const& item, std::string& hovertext, bool advancedToolTops) const;

    // symbol: ?clearColor@DyeableComponent@@QEBAXAEAVItemStackBase@@@Z
    MCAPI void clearColor(class ItemStackBase& instance) const;

    // symbol: ?hasCustomColor@DyeableComponent@@QEBA_NAEBVItemStackBase@@@Z
    MCAPI bool hasCustomColor(class ItemStackBase const& instance) const;

    // symbol: ?setColor@DyeableComponent@@QEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    MCAPI void setColor(class ItemStackBase& instance, class mce::Color const& color) const;

    // symbol: ?getIdentifier@DyeableComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // symbol: ?DEFAULT_HORSE_LEATHER_COLOR@DyeableComponent@@2VColor@mce@@A
    MCAPI static class mce::Color DEFAULT_HORSE_LEATHER_COLOR;

    // symbol: ?DEFAULT_LEATHER_COLOR@DyeableComponent@@2VColor@mce@@A
    MCAPI static class mce::Color DEFAULT_LEATHER_COLOR;

    // NOLINTEND
};
