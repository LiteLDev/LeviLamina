#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/ItemStack.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ListTag;
class Packet;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class ItemActor : public ::Actor {
protected:
    // ItemActor inner types declare
    // clang-format off
    struct ItemRenderAdjustments;
    // clang-format on

    // ItemActor inner types define
    struct ItemRenderAdjustments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>  mUseAdjustments;
        ::ll::TypedStorage<4, 4, float> mFirstRenderedYaw;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack>                                        mItem;
    ::ll::TypedStorage<4, 4, int>                                                  mAge;
    ::ll::TypedStorage<4, 4, int>                                                  mPickupDelay;
    ::ll::TypedStorage<4, 4, int>                                                  mThrowTime;
    ::ll::TypedStorage<4, 4, float>                                                mBobOffs;
    ::ll::TypedStorage<4, 4, int>                                                  mHealth;
    ::ll::TypedStorage<4, 4, int>                                                  mLifeTime;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsInItemFrame;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsFromFishing;
    ::ll::TypedStorage<4, 12, ::std::optional<::ItemActor::ItemRenderAdjustments>> mRenderAdjustments;
    // NOLINTEND

public:
    LLNDAPI ItemStack&       item();
    LLNDAPI ItemStack const& item() const;
    LLNDAPI int&             age();
    LLNDAPI int const&       age() const;
    LLNDAPI int&             pickupDelay();
    LLNDAPI int const&       pickupDelay() const;
    LLNDAPI int&             throwTime();
    LLNDAPI int const&       throwTime() const;
    LLNDAPI float&           bobOffs();
    LLNDAPI float const&     bobOffs() const;
    LLNDAPI int&             health();
    LLNDAPI int const&       health() const;
    LLNDAPI int&             lifeTime();
    LLNDAPI int const&       lifeTime() const;
    LLNDAPI bool&            isInItemFrame();
    LLNDAPI bool const&      isInItemFrame() const;
    LLNDAPI bool&            isFromFishing();
    LLNDAPI bool const&      isFromFishing() const;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    virtual ~ItemActor() /*override*/ = default;

    virtual void playerTouch(::Player& player) /*override*/;

    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket() /*override*/;

    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual bool canSynchronizeNewEntity() const /*override*/;

    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual bool isFireImmune() const /*override*/;

    virtual bool _hurt(::ActorDamageSource const&, float damage, bool, bool) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _addComponents();

    MCAPI void _dropContents();

    MCAPI void _dropItemList(::ListTag* itemList);

    MCAPI bool _merge(::ItemActor* target);

    MCAPI void _mergeWithNeighbours();

    MCAPI void _validateItem();

    MCAPI_C void clientInitialize(
        ::BlockSource&     region,
        ::Vec3 const&      pos,
        ::ItemStack const& item,
        int                throwTime,
        bool               isInItemFrame,
        bool               isFromFishing
    );

    MCAPI void postNormalTick();
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $playerTouch(::Player& player);

    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCFOLD bool $canSynchronizeNewEntity() const;

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI bool $isFireImmune() const;

    MCAPI bool $_hurt(::ActorDamageSource const&, float damage, bool, bool);

    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
