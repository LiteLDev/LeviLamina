#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DataLoadHelperType.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/InternalComponentRegistry.h"
#include "mc/world/level/levelgen/structure/DataLoadHelper.h"

class DefaultDataLoadHelper : public ::DataLoadHelper {
public:
    LLAPI static DefaultDataLoadHelper globalHelper;

public:
    // NOLINTBEGIN
    // @vftbl 0, symbol: __unk_destructor_-1
    virtual ~DefaultDataLoadHelper() = default;
    
    // @vftbl 1, symbol: ?loadPosition\@DefaultDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
    virtual class Vec3 loadPosition(class Vec3 const&);
    
    // @vftbl 2, symbol: ?loadBlockPosition\@DefaultDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
    virtual class BlockPos loadBlockPosition(class BlockPos const&);
    
    // @vftbl 3, symbol: ?loadBlockPositionOffset\@DefaultDataLoadHelper\@\@UEAA?AVBlockPos\@\@AEBV2\@\@Z
    virtual class BlockPos loadBlockPositionOffset(class BlockPos const&);
    
    // @vftbl 4, symbol: ?loadRotationDegreesX\@DefaultDataLoadHelper\@\@UEAAMM\@Z
    virtual float loadRotationDegreesX(float);
    
    // @vftbl 5, symbol: ?loadRotationDegreesY\@DefaultDataLoadHelper\@\@UEAAMM\@Z
    virtual float loadRotationDegreesY(float);
    
    // @vftbl 6, symbol: ?loadRotationRadiansX\@DefaultDataLoadHelper\@\@UEAAMM\@Z
    virtual float loadRotationRadiansX(float);
    
    // @vftbl 7, symbol: ?loadRotationRadiansY\@DefaultDataLoadHelper\@\@UEAAMM\@Z
    virtual float loadRotationRadiansY(float);
    
    // @vftbl 8, symbol: ?loadFacingID\@DefaultDataLoadHelper\@\@UEAAEE\@Z
    virtual uint8_t loadFacingID(uint8_t);
    
    // @vftbl 9, symbol: ?loadDirection\@DefaultDataLoadHelper\@\@UEAA?AVVec3\@\@AEBV2\@\@Z
    virtual class Vec3 loadDirection(class Vec3 const&);
    
    // @vftbl 10, symbol: ?loadDirection\@DefaultDataLoadHelper\@\@UEAA?AW4Type\@Direction\@\@W423\@\@Z
    virtual enum class Direction::Type loadDirection(enum class Direction::Type);
    
    // @vftbl 11, symbol: ?loadRotation\@DefaultDataLoadHelper\@\@UEAA?AW4Rotation\@\@W42\@\@Z
    virtual enum class Rotation loadRotation(enum class Rotation);
    
    // @vftbl 12, symbol: ?loadMirror\@DefaultDataLoadHelper\@\@UEAA?AW4Mirror\@\@W42\@\@Z
    virtual enum class Mirror loadMirror(enum class Mirror);
    
    // @vftbl 13, symbol: ?loadActorUniqueID\@DefaultDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
    virtual struct ActorUniqueID loadActorUniqueID(struct ActorUniqueID);
    
    // @vftbl 14, symbol: ?loadOwnerID\@DefaultDataLoadHelper\@\@UEAA?AUActorUniqueID\@\@U2\@\@Z
    virtual struct ActorUniqueID loadOwnerID(struct ActorUniqueID);

    // vIndex: 15, symbol:
    // ?loadActorInternalComponentInfo@DefaultDataLoadHelper@@UEAAPEBUComponentInfo@InternalComponentRegistry@@AEBV?$unordered_map@VHashedString@@UComponentInfo@InternalComponentRegistry@@U?$hash@VHashedString@@@std@@U?$equal_to@VHashedString@@@5@V?$allocator@U?$pair@$$CBVHashedString@@UComponentInfo@InternalComponentRegistry@@@std@@@5@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@5@@Z
    virtual struct InternalComponentRegistry::ComponentInfo const*
    loadActorInternalComponentInfo(std::unordered_map<class HashedString, struct InternalComponentRegistry::ComponentInfo> const&, std::string const&);

    // vIndex: 16, symbol: ?getType@DefaultDataLoadHelper@@UEBA?AW4DataLoadHelperType@@XZ
    virtual ::DataLoadHelperType getType() const;

    // vIndex: 17, symbol: ?shouldResetTime@DefaultDataLoadHelper@@UEAA_NXZ
    virtual bool shouldResetTime();
    // NOLINTEND
};
