#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/util/FileReference.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_120/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct InteractionData {
public:
    // InteractionData inner types declare
    // clang-format off
    struct AddItemsData;
    struct ParticleData;
    struct RepairEntityItemData;
    struct SpawnItemsData;
    // clang-format on

    // InteractionData inner types define
    enum class VibrationType : uint {
        None           = 0,
        EntityAct      = 1,
        EntityDie      = 2,
        EntityInteract = 3,
        Shear          = 4,
    };

    struct AddItemsData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::SharedTypes::FileReference<17>> mTable;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD bool operator==(::SharedTypes::v1_26_50::InteractionData::AddItemsData const&) const;

        MCAPI ~AddItemsData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct ParticleData {
    public:
        // ParticleData inner types define
        enum class CopperEventType : uint {
            None   = 0,
            WaxOn  = 1,
            WaxOff = 2,
            Scrape = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ParticleType> mOnStartType;
        ::ll::TypedStorage<4, 4, float>          mOffsetY;
        ::ll::TypedStorage<1, 1, bool>           mOffsetTowardsInteractor;
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_50::InteractionData::ParticleData::CopperEventType> mCopperEvent;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void setCopperEventType(::std::string const& name);

        MCAPI void setParticleType(::std::string const& name);
        // NOLINTEND
    };

    struct RepairEntityItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                             mRepairAmount;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mSlot;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::SharedTypes::v1_26_50::InteractionData::RepairEntityItemData const&) const;

        MCAPI void setRepairItemAmount(int const& amount);

        MCAPI ~RepairEntityItemData();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::std::string const& SLOT_DESCRIPTION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct SpawnItemsData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::SharedTypes::FileReference<17>> mTable;
        ::ll::TypedStorage<4, 4, float>                             mYOffset;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::SharedTypes::v1_26_50::InteractionData::SpawnItemsData const&) const;

        MCAPI ~SpawnItemsData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                     mRequiresCooldown;
    ::ll::TypedStorage<4, 4, float>                                                     mCooldownAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                                                      mSwing;
    ::ll::TypedStorage<1, 1, bool>                                                      mUseItem;
    ::ll::TypedStorage<1, 1, bool>                                                      mBarter;
    ::ll::TypedStorage<1, 1, bool>                                                      mAdmire;
    ::ll::TypedStorage<1, 1, bool>                                                      mGiveItem;
    ::ll::TypedStorage<1, 1, bool>                                                      mTakeItem;
    ::ll::TypedStorage<4, 4, int>                                                       mHurtItem;
    ::ll::TypedStorage<4, 4, int>                                                       mAdjustHealthAmount;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                           mEquipItemSlot;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                           mDropItemSlot;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<10>>                             mTransformItem;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mInteractText;
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_26_50::InteractionData::AddItemsData>   mAddItems;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_26_50::InteractionData::SpawnItemsData> mSpawnItems;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_50::InteractionData::RepairEntityItemData> mRepairEntityItem;
    ::ll::TypedStorage<4, 16, ::SharedTypes::v1_26_50::InteractionData::ParticleData>         mParticleOnStart;
    ::ll::TypedStorage<4, 4, float>                                                           mDropItemYOffset;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                   mPlaySounds;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<1>>>                     mSpawnEntities;
    ::ll::TypedStorage<8, 272, ::SharedTypes::v1_21_120::ActorDefinitionTrigger>              mOnInteraction;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_50::InteractionData::VibrationType>         mVibration;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InteractionData();

    MCAPI InteractionData(::SharedTypes::v1_26_50::InteractionData const&);

    MCAPI void addActorDefinitionIdentifier(::std::string const& name);

    MCAPI void addLevelSoundEvent(::std::string const& name);

    MCAPI ::SharedTypes::v1_26_50::InteractionData& operator=(::SharedTypes::v1_26_50::InteractionData const&);

    MCAPI bool operator==(::SharedTypes::v1_26_50::InteractionData const&) const;

    MCAPI void setVibrationType(::std::string const& name);

    MCAPI ~InteractionData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void bindVibrationTypeEnum(::cereal::ReflectionCtx& ctx);

    MCAPI static ::std::string
    vibrationNameFromType(::SharedTypes::v1_26_50::InteractionData::VibrationType const& type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DROP_ITEM_SLOT_DESCRIPTION();

    MCAPI static ::std::string const& EQUIP_ITEM_SLOT_DESCRIPTION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_26_50::InteractionData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
