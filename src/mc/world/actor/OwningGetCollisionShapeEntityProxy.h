#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OwningGetCollisionShapeEntityProxy {
public:
    // prevent constructor by default
    OwningGetCollisionShapeEntityProxy& operator=(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OwningGetCollisionShapeEntityProxy@@UEAA@XZ
    virtual ~OwningGetCollisionShapeEntityProxy() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?isWearingLeatherBoots@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBA_NXZ
    virtual bool isWearingLeatherBoots() const;

    // vIndex: 6, symbol:
    // ?hasLightWeightFamilyTag@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBA_NXZ
    virtual bool hasLightWeightFamilyTag() const;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol:
    // ?isRiding@?$GetCollisionShapeEntityProxy@V?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UCanStandOnSnowFlag@@@@V?$FlagComponent@UHasLightweightFamilyFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorTypeComponent@@UFallDistanceComponent@@UPassengerComponent@@UActorGameTypeComponent@@UActorDataFlagComponent@@UVehicleComponent@@@@U?$Write@$$V@@U?$AddRemove@$$V@@U?$GlobalRead@UExternalDataComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@@UEBA_NXZ
    virtual bool isRiding() const;

    // symbol: ??0OwningGetCollisionShapeEntityProxy@@QEAA@AEBVEntityContext@@@Z
    MCAPI explicit OwningGetCollisionShapeEntityProxy(class EntityContext const&);

    // NOLINTEND
};
