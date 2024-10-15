#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct RepairableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RepairableItemComponent {
public:
    // prevent constructor by default
    RepairableItemComponent(RepairableItemComponent const&);
    RepairableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RepairableItemComponent() = default;

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
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI explicit RepairableItemComponent(struct Puv::v1_20_50::RepairableItemComponent component);

    MCAPI struct RepairItemResult
    handleItemRepair(class ItemStack& inputItem, class ItemStack& materialItem, bool allowBidirectionalRepair) const;

    MCAPI class RepairableItemComponent& operator=(class RepairableItemComponent&&);

    MCAPI class RepairableItemComponent& operator=(class RepairableItemComponent const&);

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct RepairItemEntry const* _getRepairItemEntry(class ItemStackBase const& item) const;

    MCAPI int _repairItem(
        class ItemStackBase& materialItem,
        class ItemStackBase& resultItem,
        class ExpressionNode repairAmountExpression
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(struct Puv::v1_20_50::RepairableItemComponent component);

    MCAPI bool _canUseOn$(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    MCAPI void _initializeComponent$();

    MCAPI bool _useOn$(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag$(struct cereal::ReflectionCtx const& ctx) const;

    MCAPI bool checkComponentDataForContentErrors$() const;

    MCAPI void handleVersionBasedInitialization$(class SemVersion const& originalJsonVersion);

    MCAPI bool initializeFromNetwork$(class CompoundTag const& tag, struct cereal::ReflectionCtx const& ctx);

    MCAPI bool isNetworkComponent$() const;

    MCAPI void writeSettings$();

    // NOLINTEND
};
