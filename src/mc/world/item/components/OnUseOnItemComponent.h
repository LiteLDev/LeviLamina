#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class OnUseOnItemComponent {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnUseOnItemComponent();

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
        class ItemStack&      itemInstance,
        class Actor&          entity,
        class BlockPos const& blockPos,
        uchar                 face,
        class Vec3 const&     clickPos
    ) const;

    // vIndex: 9
    virtual void _initializeComponent();

    MCAPI OnUseOnItemComponent();

    MCAPI OnUseOnItemComponent(class OnUseOnItemComponent const&);

    MCAPI class OnUseOnItemComponent& operator=(class OnUseOnItemComponent&&);

    MCAPI class OnUseOnItemComponent& operator=(class OnUseOnItemComponent const&);

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
