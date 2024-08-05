#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/registry/ItemStack.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ItemActor : public ::Actor {
protected:
    ItemStack mItem;          // this+Actor+0
    int       mAge;           // this+Actor+160
    int       mPickupDelay;   // this+Actor+164
    int       mThrowTime;     // this+Actor+168
    float     mBobOffs;       // this+Actor+172
    int       mHealth;        // this+Actor+176
    int       mLifeTime;      // this+Actor+180
    bool      mIsInItemFrame; // this+Actor+184
    bool      mIsFromFishing; // this+Actor+185

public:
    // prevent constructor by default
    ItemActor& operator=(ItemActor const&);
    ItemActor(ItemActor const&);
    ItemActor();

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
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~ItemActor() = default;

    // vIndex: 20
    virtual bool isFireImmune() const;

    // vIndex: 25
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 42
    virtual void playerTouch(class Player& player);

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 74
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 90
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 105
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& entityTag) const;

    MCAPI ItemActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void postNormalTick();

    MCAPI void setSourceEntity(class Actor const* owner);

    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const&);

    MCAPI static class ItemActor* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addComponents();

    MCAPI void _dropContents();

    MCAPI bool _merge(class ItemActor* target);

    MCAPI void _validateItem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const LIFETIME;

    // NOLINTEND
};
