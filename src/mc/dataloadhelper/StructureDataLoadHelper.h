#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/enums/DataLoadHelperType.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"

class StructureDataLoadHelper : public ::DataLoadHelper {
public:
    // prevent constructor by default
    StructureDataLoadHelper& operator=(StructureDataLoadHelper const&);
    StructureDataLoadHelper(StructureDataLoadHelper const&);
    StructureDataLoadHelper();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StructureDataLoadHelper@@UEAA@XZ
    virtual ~StructureDataLoadHelper();

    // vIndex: 1, symbol: ?loadPosition@StructureDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
    virtual class Vec3 loadPosition(class Vec3 const&);

    // vIndex: 2, symbol: ?loadBlockPosition@StructureDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
    virtual class BlockPos loadBlockPosition(class BlockPos const&);

    // vIndex: 3, symbol: ?loadBlockPositionOffset@StructureDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const&);

    // vIndex: 4, symbol: ?loadRotationDegreesX@StructureDataLoadHelper@@UEAAMM@Z
    virtual float loadRotationDegreesX(float);

    // vIndex: 5, symbol: ?loadRotationDegreesY@StructureDataLoadHelper@@UEAAMM@Z
    virtual float loadRotationDegreesY(float);

    // vIndex: 6, symbol: ?loadRotationRadiansX@StructureDataLoadHelper@@UEAAMM@Z
    virtual float loadRotationRadiansX(float);

    // vIndex: 7, symbol: ?loadRotationRadiansY@StructureDataLoadHelper@@UEAAMM@Z
    virtual float loadRotationRadiansY(float);

    // vIndex: 8, symbol: ?loadFacingID@StructureDataLoadHelper@@UEAAEE@Z
    virtual uchar loadFacingID(uchar);

    // vIndex: 9, symbol: ?loadDirection@StructureDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
    virtual class Vec3 loadDirection(class Vec3 const&);

    // vIndex: 10, symbol: ?loadDirection@StructureDataLoadHelper@@UEAA?AW4Type@Direction@@W423@@Z
    virtual ::Direction::Type loadDirection(::Direction::Type);

    // vIndex: 11, symbol: ?loadRotation@StructureDataLoadHelper@@UEAA?AW4Rotation@@W42@@Z
    virtual ::Rotation loadRotation(::Rotation);

    // vIndex: 12, symbol: ?loadMirror@StructureDataLoadHelper@@UEAA?AW4Mirror@@W42@@Z
    virtual ::Mirror loadMirror(::Mirror);

    // vIndex: 13, symbol: ?loadActorUniqueID@StructureDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);

    // vIndex: 14, symbol: ?loadOwnerID@StructureDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);

    // vIndex: 15, symbol:
    // ?loadActorInternalComponentInfo@StructureDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
    virtual struct InternalComponentRegistry::ComponentInfo const*
    loadActorInternalComponentInfo(std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const&, std::string const&);

    // vIndex: 16, symbol: ?getType@StructureDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
    virtual ::DataLoadHelperType getType() const;

    // vIndex: 17, symbol: ?shouldResetTime@StructureDataLoadHelper@@UEAA_NXZ
    virtual bool shouldResetTime();

    // vIndex: 18, symbol: ?_generateNewID@StructureDataLoadHelper@@MEAA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID _generateNewID();

    // symbol:
    // ??0StructureDataLoadHelper@@QEAA@AEBVBlockPos@@0AEBVVec3@@UActorUniqueID@@W4Rotation@@W4Mirror@@AEAVLevel@@@Z
    MCAPI
    StructureDataLoadHelper(class BlockPos const&, class BlockPos const&, class Vec3 const&, struct ActorUniqueID, ::Rotation, ::Mirror, class Level&);

    // NOLINTEND
};
