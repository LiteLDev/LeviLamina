#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/InteractionParticle.h"
#include "mc/entity/components_json_legacy/ItemSlotInfo.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ItemDefinition.h"

// auto generated forward declare list
// clang-format off
class GameEvent;
struct ActorDefinitionIdentifier;
// clang-format on

class Interaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                    mRequiresCooldown;
    ::ll::TypedStorage<4, 4, int>                                                    mCooldownAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                                                   mSwing;
    ::ll::TypedStorage<1, 1, bool>                                                   mUseItem;
    ::ll::TypedStorage<1, 1, bool>                                                   mBarter;
    ::ll::TypedStorage<1, 1, bool>                                                   mAdmire;
    ::ll::TypedStorage<1, 1, bool>                                                   mGiveItem;
    ::ll::TypedStorage<1, 1, bool>                                                   mTakeItem;
    ::ll::TypedStorage<4, 4, int>                                                    mHurtItem;
    ::ll::TypedStorage<4, 4, int>                                                    mAdjustHealthAmount;
    ::ll::TypedStorage<4, 12, ::std::optional<::ItemSlotInfo>>                       mEquipItemSlot;
    ::ll::TypedStorage<4, 12, ::std::optional<::ItemSlotInfo>>                       mDropItemSlot;
    ::ll::TypedStorage<4, 12, ::std::optional<::ItemSlotInfo>>                       mRepairItemSlot;
    ::ll::TypedStorage<4, 4, int>                                                    mRepairItemAmount;
    ::ll::TypedStorage<4, 8, ::ItemDefinition>                                       mTransformItem;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mInteractText;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mAddItemsTable;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mSpawnItemsTable;
    ::ll::TypedStorage<4, 12, ::InteractionParticle>                                 mParticleData;
    ::ll::TypedStorage<4, 4, float>                                                  mDropItemYOffset;
    ::ll::TypedStorage<4, 4, float>                                                  mSpawnItemsYOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>> mPlaySounds;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionIdentifier>>            mSpawnEntities;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>                             mOnInteraction;
    ::ll::TypedStorage<8, 8, ::GameEvent const*>                                     mVibration;
    // NOLINTEND

public:
    // prevent constructor by default
    Interaction& operator=(Interaction const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Interaction();

    MCAPI Interaction(::Interaction&&);

    MCAPI Interaction(::Interaction const&);

    MCAPI void addActorDefinitionIdentifierByName(::std::string const& name);

    MCAPI void addLevelSoundEventByName(::std::string const& name);

    MCAPI void setCooldown(float const& seconds);

    MCAPI void setCooldownAfterBeingAttacked(float const& seconds);

    MCAPI void setDropItemSlot(::std::string const& slot);

    MCAPI void setEquipItemSlot(::std::string const& slot);

    MCAPI void setRepairItemAmount(int const& amount);

    MCAPI void setRepairItemSlot(::std::string const& slot);

    MCAPI void setTransformItem(::std::string const& name);

    MCAPI void setVibrationByName(::std::string const& name);

    MCAPI ~Interaction();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::ItemSlotInfo> _tryConvertStringToItemSlotInfo(::std::string const& string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Interaction&&);

    MCAPI void* $ctor(::Interaction const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
