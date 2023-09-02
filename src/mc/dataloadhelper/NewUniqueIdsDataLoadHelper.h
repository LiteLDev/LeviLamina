#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DataLoadHelperType.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"
#include "mc/world/level/levelgen/structure/DataLoadHelper.h"

class NewUniqueIdsDataLoadHelper : public ::DataLoadHelper {
public:
    // prevent constructor by default
    NewUniqueIdsDataLoadHelper& operator=(NewUniqueIdsDataLoadHelper const&) = delete;
    NewUniqueIdsDataLoadHelper(NewUniqueIdsDataLoadHelper const&)            = delete;
    NewUniqueIdsDataLoadHelper()                                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?loadActorUniqueID@NewUniqueIdsDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);

    // vIndex: 14, symbol: ?loadOwnerID@NewUniqueIdsDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);

    // vIndex: 15, symbol:
    // ?loadActorInternalComponentInfo@NewUniqueIdsDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
    virtual struct InternalComponentRegistry::ComponentInfo const*
    loadActorInternalComponentInfo(std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const&, std::string const&);

    // vIndex: 16, symbol: ?getType@NewUniqueIdsDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
    virtual ::DataLoadHelperType getType() const;

    // vIndex: 17, symbol: ?shouldResetTime@NewUniqueIdsDataLoadHelper@@UEAA_NXZ
    virtual bool shouldResetTime();

    // symbol: ?loadBlockPosition@NewUniqueIdsDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
    MCVAPI class BlockPos loadBlockPosition(class BlockPos const&);

    // symbol: ?loadBlockPositionOffset@NewUniqueIdsDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
    MCVAPI class BlockPos loadBlockPositionOffset(class BlockPos const&);

    // symbol: ?loadDirection@NewUniqueIdsDataLoadHelper@@UEAA?AW4Type@Direction@@W423@@Z
    MCVAPI ::Direction::Type loadDirection(::Direction::Type);

    // symbol: ?loadDirection@NewUniqueIdsDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
    MCVAPI class Vec3 loadDirection(class Vec3 const&);

    // symbol: ?loadFacingID@NewUniqueIdsDataLoadHelper@@UEAAEE@Z
    MCVAPI uchar loadFacingID(uchar);

    // symbol: ?loadMirror@NewUniqueIdsDataLoadHelper@@UEAA?AW4Mirror@@W42@@Z
    MCVAPI ::Mirror loadMirror(::Mirror);

    // symbol: ?loadPosition@NewUniqueIdsDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
    MCVAPI class Vec3 loadPosition(class Vec3 const&);

    // symbol: ?loadRotation@NewUniqueIdsDataLoadHelper@@UEAA?AW4Rotation@@W42@@Z
    MCVAPI ::Rotation loadRotation(::Rotation);

    // symbol: ?loadRotationDegreesX@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
    MCVAPI float loadRotationDegreesX(float);

    // symbol: ?loadRotationDegreesY@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
    MCVAPI float loadRotationDegreesY(float);

    // symbol: ?loadRotationRadiansX@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
    MCVAPI float loadRotationRadiansX(float);

    // symbol: ?loadRotationRadiansY@NewUniqueIdsDataLoadHelper@@UEAAMM@Z
    MCVAPI float loadRotationRadiansY(float);

    // symbol: ??1NewUniqueIdsDataLoadHelper@@UEAA@XZ
    MCVAPI ~NewUniqueIdsDataLoadHelper();

    // symbol: ??0NewUniqueIdsDataLoadHelper@@QEAA@AEAVILevel@@@Z
    MCAPI NewUniqueIdsDataLoadHelper(class ILevel&);

    // NOLINTEND
};
