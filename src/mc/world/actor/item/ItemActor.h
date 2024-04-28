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
#include "mc/enums/ArmorTextureType.h"
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
    // vIndex: 4, symbol: ?reloadHardcoded@ItemActor@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1ItemActor@@UEAA@XZ
    virtual ~ItemActor() = default;

    // vIndex: 20, symbol: ?isFireImmune@ItemActor@@UEBA_NXZ
    virtual bool isFireImmune() const;

    // vIndex: 25, symbol:
    // ?tryCreateAddActorPacket@ItemActor@@UEAA?AV?$unique_ptr@VAddActorBasePacket@@U?$default_delete@VAddActorBasePacket@@@std@@@std@@XZ
    virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 42, symbol: ?playerTouch@ItemActor@@UEAAXAEAVPlayer@@@Z
    virtual void playerTouch(class Player& player);

    // vIndex: 70, symbol: ?isInvulnerableTo@ItemActor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 75, symbol: ?handleEntityEvent@ItemActor@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 92, symbol: ?getSourceUniqueID@ItemActor@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // vIndex: 107, symbol: ?canSynchronizeNewEntity@ItemActor@@UEBA_NXZ
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 148, symbol: ?_hurt@ItemActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@ItemActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@ItemActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& entityTag) const;

    // symbol: ??0ItemActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ItemActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?postNormalTick@ItemActor@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol: ?setSourceEntity@ItemActor@@QEAAXPEBVActor@@@Z
    MCAPI void setSourceEntity(class Actor const* owner);

    // symbol: ?getLiquidAABB@ItemActor@@SA?AVAABB@@AEBUAABBShapeComponent@@@Z
    MCAPI static class AABB getLiquidAABB(struct AABBShapeComponent const&);

    // symbol: ?tryGetFromEntity@ItemActor@@SAPEAV1@AEAVEntityContext@@_N@Z
    MCAPI static class ItemActor* tryGetFromEntity(class EntityContext& entity, bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addComponents@ItemActor@@AEAAXXZ
    MCAPI void _addComponents();

    // symbol: ?_dropContents@ItemActor@@AEAAXXZ
    MCAPI void _dropContents();

    // symbol: ?_merge@ItemActor@@AEAA_NPEAV1@@Z
    MCAPI bool _merge(class ItemActor* target);

    // symbol: ?_validateItem@ItemActor@@AEAAXXZ
    MCAPI void _validateItem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?LIFETIME@ItemActor@@0HB
    MCAPI static int const LIFETIME;

    // NOLINTEND
};
