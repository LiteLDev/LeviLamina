#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct ThrowableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ThrowableItemComponent {
public:
    // prevent constructor by default
    ThrowableItemComponent& operator=(ThrowableItemComponent const&);
    ThrowableItemComponent(ThrowableItemComponent const&);
    ThrowableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThrowableItemComponent() = default;

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

    MCAPI explicit ThrowableItemComponent(bool);

    MCAPI explicit ThrowableItemComponent(struct Puv::v1_20_50::ThrowableItemComponent);

    MCAPI bool releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    MCAPI bool use(class ItemStack& item, class Player& player) const;

    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _doThrow(class ItemStack&, class Player&, class ProjectileItemComponent const&, float) const;

    MCAPI float _getLaunchPower(int durationLeft, int maxDrawDuration, int maxUseDuration) const;

    MCAPI class Vec3 getAimPos(class Player&, class Vec3) const;

    // NOLINTEND
};
