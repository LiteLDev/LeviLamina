#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/dataloadhelper/DataLoadHelper.h"
#include "mc/enums/DataLoadHelperType.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"

class DefaultDataLoadHelper : public ::DataLoadHelper {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DefaultDataLoadHelper@@UEAA@XZ
    virtual ~DefaultDataLoadHelper() = default;

    // vIndex: 1, symbol: ?loadPosition@DefaultDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
    virtual class Vec3 loadPosition(class Vec3 const& position);

    // vIndex: 2, symbol: ?loadBlockPosition@DefaultDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
    virtual class BlockPos loadBlockPosition(class BlockPos const& blockPos);

    // vIndex: 3, symbol: ?loadBlockPositionOffset@DefaultDataLoadHelper@@UEAA?AVBlockPos@@AEBV2@@Z
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const& blockPosOffset);

    // vIndex: 4, symbol: ?loadRotationDegreesX@DefaultDataLoadHelper@@UEAAMM@Z
    virtual float loadRotationDegreesX(float x);

    // vIndex: 5, symbol: ?loadRotationDegreesY@DefaultDataLoadHelper@@UEAAMM@Z
    virtual float loadRotationDegreesY(float y);

    // vIndex: 6, symbol: ?loadRotationRadiansX@DefaultDataLoadHelper@@UEAAMM@Z
    virtual float loadRotationRadiansX(float x);

    // vIndex: 7, symbol: ?loadRotationRadiansY@DefaultDataLoadHelper@@UEAAMM@Z
    virtual float loadRotationRadiansY(float y);

    // vIndex: 8, symbol: ?loadFacingID@DefaultDataLoadHelper@@UEAAEE@Z
    virtual uchar loadFacingID(uchar facing);

    // vIndex: 9, symbol: ?loadDirection@DefaultDataLoadHelper@@UEAA?AVVec3@@AEBV2@@Z
    virtual class Vec3 loadDirection(class Vec3 const& direction);

    // vIndex: 10, symbol: ?loadDirection@DefaultDataLoadHelper@@UEAA?AW4Type@Direction@@W423@@Z
    virtual ::Direction::Type loadDirection(::Direction::Type direction);

    // vIndex: 11, symbol: ?loadRotation@DefaultDataLoadHelper@@UEAA?AW4Rotation@@W42@@Z
    virtual ::Rotation loadRotation(::Rotation rotation);

    // vIndex: 12, symbol: ?loadMirror@DefaultDataLoadHelper@@UEAA?AW4Mirror@@W42@@Z
    virtual ::Mirror loadMirror(::Mirror mirror);

    // vIndex: 13, symbol: ?loadActorUniqueID@DefaultDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID id);

    // vIndex: 14, symbol: ?loadOwnerID@DefaultDataLoadHelper@@UEAA?AUActorUniqueID@@U2@@Z
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID id);

    // vIndex: 15, symbol:
    // ?loadActorInternalComponentInfo@DefaultDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
    virtual struct InternalComponentRegistry::ComponentInfo const* loadActorInternalComponentInfo(
        std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const& registry,
        std::string const&                                                                             componentName
    );

    // vIndex: 16, symbol: ?getType@DefaultDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
    virtual ::DataLoadHelperType getType() const;

    // vIndex: 17, symbol: ?shouldResetTime@DefaultDataLoadHelper@@UEAA_NXZ
    virtual bool shouldResetTime();

    // NOLINTEND
};
