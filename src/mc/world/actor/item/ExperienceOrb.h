#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Level;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class ExperienceOrb : public ::Actor {
public:
    // ExperienceOrb inner types define
    enum class DropType : uchar {
        NoType     = 0,
        FromBlock  = 1,
        FromMob    = 2,
        FromPlayer = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk639d93;
    ::ll::UntypedStorage<4, 4> mUnk4bc834;
    ::ll::UntypedStorage<4, 4> mUnk853b57;
    ::ll::UntypedStorage<4, 4> mUnk6573f5;
    ::ll::UntypedStorage<4, 4> mUnkdc8fbb;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperienceOrb& operator=(ExperienceOrb const&);
    ExperienceOrb(ExperienceOrb const&);
    ExperienceOrb();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 40
    virtual void playerTouch(::Player& player) /*override*/;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 66
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const&, float damage, bool, bool) /*override*/;

    // vIndex: 135
    virtual void doWaterSplashEffect() /*override*/;

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock) /*override*/;

    // vIndex: 8
    virtual ~ExperienceOrb() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperienceOrb(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _handleMending(::Player& player);

    MCAPI void _tryMergeExistingOrbs();

    MCAPI int getIconIndex() const;

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _spawnOrb(::BlockSource& region, ::Level& level, ::Vec3 const& pos, int orbXPValue);

    MCAPI static bool _tryMergeIntoExistingOrbs(::BlockSource& region, ::Vec3 const& pos, int xpValue);

    MCAPI static void spawnOrbs(
        ::BlockSource&            region,
        ::Vec3 const&             pos,
        int                       xpValue,
        ::ExperienceOrb::DropType dropType,
        ::Player*                 owner
    );

    MCAPI static void spawnOrbs(
        ::BlockSource&            region,
        ::Vec3 const&             pos,
        int                       randValueMin,
        int                       randValueMax,
        ::ExperienceOrb::DropType dropType,
        ::Player*                 owner
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $playerTouch(::Player& player);

    MCAPI float $getShadowRadius() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI bool $_hurt(::ActorDamageSource const&, float damage, bool, bool);

    MCAPI void $doWaterSplashEffect();

    MCAPI void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
