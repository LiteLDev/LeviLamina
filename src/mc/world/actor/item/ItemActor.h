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
class AddActorBasePacket;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ListTag;
class Player;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class ItemActor : public ::Actor {
protected:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> mItem;
    ::ll::TypedStorage<4, 4, int>           mAge;
    ::ll::TypedStorage<4, 4, int>           mPickupDelay;
    ::ll::TypedStorage<4, 4, int>           mThrowTime;
    ::ll::TypedStorage<4, 4, float>         mBobOffs;
    ::ll::TypedStorage<4, 4, int>           mHealth;
    ::ll::TypedStorage<4, 4, int>           mLifeTime;
    ::ll::TypedStorage<1, 1, bool>          mIsInItemFrame;
    ::ll::TypedStorage<1, 1, bool>          mIsFromFishing;
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
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;

    // vIndex: 8
    virtual ~ItemActor() /*override*/ = default;

    // vIndex: 39
    virtual void playerTouch(::Player& player) /*override*/;

    // vIndex: 23
    virtual ::std::unique_ptr<::AddActorBasePacket> tryCreateAddActorPacket() /*override*/;

    // vIndex: 84
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 99
    virtual bool canSynchronizeNewEntity() const /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 18
    virtual bool isFireImmune() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const&, float damage, bool, bool) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $playerTouch(::Player& player);

    MCAPI ::std::unique_ptr<::AddActorBasePacket> $tryCreateAddActorPacket();

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCFOLD bool $canSynchronizeNewEntity() const;

    MCAPI bool $isFireImmune() const;

    MCAPI bool $_hurt(::ActorDamageSource const&, float damage, bool, bool);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
