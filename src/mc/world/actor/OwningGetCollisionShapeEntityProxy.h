#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"

class OwningGetCollisionShapeEntityProxy {
public:
    // prevent constructor by default
    OwningGetCollisionShapeEntityProxy& operator=(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol:
    // ?canDescendThroughBlock@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@USynchedActorDataComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBA_NXZ
    virtual bool canDescendThroughBlock() const;

    // vIndex: 3, symbol:
    // ?getFallDistance@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@USynchedActorDataComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBAMXZ
    virtual float getFallDistance() const;

    // vIndex: 4, symbol:
    // ?getEntityTypeId@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@USynchedActorDataComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getEntityTypeId() const;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol:
    // ?getAABB@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@USynchedActorDataComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBAAEBVAABB@@XZ
    virtual class AABB const& getAABB() const;

    // vIndex: 8, symbol:
    // ?isWorldBuilder@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@USynchedActorDataComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBA_NXZ
    virtual bool isWorldBuilder() const;

    // vIndex: 9, symbol:
    // ?isRiding@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@USynchedActorDataComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBA_NXZ
    virtual bool isRiding() const;

    // symbol: ??0OwningGetCollisionShapeEntityProxy@@QEAA@AEBVEntityContext@@@Z
    MCAPI explicit OwningGetCollisionShapeEntityProxy(class EntityContext const&);

    // NOLINTEND
};
