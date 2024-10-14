#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/ItemStack.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
    virtual void reloadHardcoded(::ActorInitializationMethod, class VariantParameterList const&);

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
    virtual bool _hurt(class ActorDamageSource const&, float damage, bool, bool);

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

    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const& aabbShapeComponent);

    MCAPI static class ItemActor* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addComponents();

    MCAPI void _dropContents();

    MCAPI bool _merge(class ItemActor* target);

    MCAPI void _validateItem();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _hurt$(class ActorDamageSource const&, float damage, bool, bool);

    MCAPI void addAdditionalSaveData$(class CompoundTag& entityTag) const;

    MCAPI bool canSynchronizeNewEntity$() const;

    MCAPI struct ActorUniqueID getSourceUniqueID$() const;

    MCAPI void handleEntityEvent$(::ActorEvent eventId, int data);

    MCAPI bool isFireImmune$() const;

    MCAPI bool isInvulnerableTo$(class ActorDamageSource const& source) const;

    MCAPI void playerTouch$(class Player& player);

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod, class VariantParameterList const&);

    MCAPI std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket$();

    MCAPI static int const& LIFETIME();

    // NOLINTEND
};
