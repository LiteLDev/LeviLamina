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
    // vIndex: 0
    virtual ~DyeableComponent() = default;

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2
    virtual void writeSettings();

    // vIndex: 3
    virtual bool isNetworkComponent() const;

    // vIndex: 4
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const& ctx) const;

    // vIndex: 5
    virtual bool initializeFromNetwork(class CompoundTag const& tag, struct cereal::ReflectionCtx const& ctx);

    // vIndex: 6
    virtual void handleVersionBasedInitialization(class SemVersion const& originalJsonVersion);

    // vIndex: 7
    virtual bool
    _canUseOn(class ItemStack const& instance, class Actor& entity, class BlockPos const& pos, uchar face) const;

    // vIndex: 8
    virtual bool _useOn(
        class ItemStack&      instance,
        class Actor&          usingActor,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos
    ) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI void appendFormattedHovertext(class ItemStackBase const& item, std::string& hovertext, bool) const;

    MCAPI void clearColor(class ItemStackBase& instance) const;

    MCAPI bool hasCustomColor(class ItemStackBase const& instance) const;

    MCAPI void setColor(class ItemStackBase& instance, class mce::Color const& color) const;

    MCAPI static void ResetDefaultLeatherColor();

    MCAPI static class HashedString const& getIdentifier();

    MCAPI static class mce::Color DEFAULT_HORSE_LEATHER_COLOR;

    MCAPI static class mce::Color DEFAULT_LEATHER_COLOR;

    // NOLINTEND
};
