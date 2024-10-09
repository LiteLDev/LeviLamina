#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PlanterItemComponent {
public:
    // prevent constructor by default
    PlanterItemComponent(PlanterItemComponent const&);
    PlanterItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlanterItemComponent() = default;

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
        class ItemStack&      item,
        class Actor&          entity,
        class BlockPos const& blockPos,
        uchar                 face,
        class Vec3 const&     clickPos
    ) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI explicit PlanterItemComponent(class Block const& block);

    MCAPI bool
    calculatePlacePos(class ItemStackBase const& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    MCAPI class PlanterItemComponent& operator=(class PlanterItemComponent&&);

    MCAPI class PlanterItemComponent& operator=(class PlanterItemComponent const&);

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _placeBlock(
        class ItemStack&      item,
        class Actor&          entity,
        class Block const&    block,
        class BlockPos const& placePos,
        uchar                 face,
        class Vec3 const&     clickPos
    ) const;

    // NOLINTEND
};
