#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct ShooterItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShooterItemComponent {
public:
    // ShooterItemComponent inner types declare
    // clang-format off
    class DrawDuration;
    struct ShooterAmmunitionEntry;
    // clang-format on

    // ShooterItemComponent inner types define
    class DrawDuration {
    public:
        // prevent constructor by default
        DrawDuration& operator=(DrawDuration const&);
        DrawDuration(DrawDuration const&);
        DrawDuration();

    public:
        // NOLINTBEGIN
        MCAPI void setValue(float duration);

        // NOLINTEND
    };

    struct ShooterAmmunitionEntry {
    public:
        // prevent constructor by default
        ShooterAmmunitionEntry(ShooterAmmunitionEntry const&);
        ShooterAmmunitionEntry();

    public:
        // NOLINTBEGIN
        MCAPI struct ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponent::ShooterAmmunitionEntry&&);

        MCAPI struct ShooterItemComponent::ShooterAmmunitionEntry&
        operator=(struct ShooterItemComponent::ShooterAmmunitionEntry const&);

        MCAPI bool operator==(struct ShooterItemComponent::ShooterAmmunitionEntry const&) const;

        MCAPI ~ShooterAmmunitionEntry();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ShooterItemComponent& operator=(ShooterItemComponent const&);
    ShooterItemComponent(ShooterItemComponent const&);
    ShooterItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ShooterItemComponent() = default;

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

    MCAPI explicit ShooterItemComponent(struct Puv::v1_20_50::ShooterItemComponent const& component);

    MCAPI bool releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    MCAPI static void bindType(
        struct cereal::ReflectionCtx&        ctx,
        std::vector<::AllExperiments> const& requiredToggles,
        std::optional<class SemVersion>      releasedMinFormatVersion
    );

    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _consumeAmmunition(
        class Player*          player,
        class ItemStack const& ammunition,
        int                    slotIndex,
        bool                   infiniteAmmo,
        bool                   fromOffhand
    ) const;

    MCAPI int _getAmmunition(class Player const* player, bool, class ItemStack& ammo, bool& fromOffhand) const;

    MCAPI int _getMaxUseDuration(class ItemStack const& item) const;

    MCAPI void _shootProjectiles(class ItemStack& shooterStack, class Player* player, int durationLeft) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(struct Puv::v1_20_50::ShooterItemComponent const& component);

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
