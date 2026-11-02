#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
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
struct HurtParameters;
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
    LLNDAPI ItemStack&        item();
    LLNDAPI ItemStack const&  item() const;
    LLNDAPI int&              age();
    LLNDAPI int const&        age() const;
    LLNDAPI int&              pickupDelay();
    LLNDAPI int const&        pickupDelay() const;
    LLNDAPI int&              throwTime();
    LLNDAPI int const&        throwTime() const;
    LLNDAPI float&            bobOffs();
    LLNDAPI float const&      bobOffs() const;
    LLNDAPI int&              health();
    LLNDAPI int const&        health() const;
    LLNDAPI int&              lifeTime();
    LLNDAPI int const&        lifeTime() const;
    LLNDAPI bool&             isInItemFrame();
    LLNDAPI bool const&       isInItemFrame() const;
    LLNDAPI bool&             isFromFishing();
    LLNDAPI bool const&       isFromFishing() const;
    LLNDAPI static ItemActor* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

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

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float damage, ::HurtParameters const&) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _addComponents();

    MCNAPI void _dropItemList(::ListTag* itemList);

    MCNAPI void _validateItem();

#ifdef LL_PLAT_C
    MCNAPI void clientInitialize(
        ::BlockSource&     region,
        ::Vec3 const&      pos,
        ::ItemStack const& item,
        int                throwTime,
        bool               isInItemFrame,
        bool               isFromFishing
    );
#endif

    MCAPI void postNormalTick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $playerTouch(::Player& player);

    MCNAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI bool $canSynchronizeNewEntity() const;

    MCNAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCNAPI bool $isFireImmune() const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float damage, ::HurtParameters const&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND
};
