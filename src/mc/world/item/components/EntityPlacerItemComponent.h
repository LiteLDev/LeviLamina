#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityPlacerItemComponent {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityPlacerItemComponent();

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
    virtual bool _useOn(
        class ItemStack&      instance,
        class Actor&          usingActor,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos
    ) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI EntityPlacerItemComponent();

    MCAPI EntityPlacerItemComponent(class EntityPlacerItemComponent const&);

    MCAPI bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI class EntityPlacerItemComponent& operator=(class EntityPlacerItemComponent&&);

    MCAPI class EntityPlacerItemComponent& operator=(class EntityPlacerItemComponent const&);

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setActorCustomName(class Actor& actor, class ItemStack const& item) const;

    MCAPI void
    _validateBlocks(std::vector<class BlockDescriptor> const& blocks, std::string const& blocksParameterName) const;

    // NOLINTEND
};
