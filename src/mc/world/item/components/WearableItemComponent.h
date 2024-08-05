#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct WearableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WearableItemComponent {
public:
    // prevent constructor by default
    WearableItemComponent& operator=(WearableItemComponent const&);
    WearableItemComponent(WearableItemComponent const&);
    WearableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WearableItemComponent() = default;

    // vIndex: 1
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2
    virtual void writeSettings();

    // vIndex: 3
    virtual bool isNetworkComponent() const;

    // vIndex: 4
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI explicit WearableItemComponent(struct Puv::v1_20_50::WearableItemComponent);

    MCAPI WearableItemComponent(::Puv::Legacy::EquipmentSlot, int);

    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&) const;

    MCAPI int getArmorValue() const;

    MCAPI ::ActorLocation getEquipLocation() const;

    MCAPI ::Puv::Legacy::EquipmentSlot getSlot() const;

    MCAPI bool isHumanoidArmor() const;

    MCAPI bool shouldAllowStacking() const;

    MCAPI bool use(class ItemStack& instance, class Player& player) const;

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet&);

    // NOLINTEND
};
