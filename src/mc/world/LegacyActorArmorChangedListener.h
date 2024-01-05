#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerContentChangeListener.h"

class LegacyActorArmorChangedListener : public ::ContainerContentChangeListener {
public:
    // prevent constructor by default
    LegacyActorArmorChangedListener& operator=(LegacyActorArmorChangedListener const&);
    LegacyActorArmorChangedListener(LegacyActorArmorChangedListener const&);
    LegacyActorArmorChangedListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ?containerContentChanged@LegacyActorArmorChangedListener@@UEAAXH@Z
    virtual void containerContentChanged(int);

    // vIndex: 1, symbol: __gen_??1LegacyActorArmorChangedListener@@UEAA@XZ
    virtual ~LegacyActorArmorChangedListener() = default;

    // symbol: ?containerContentChanged@LegacyActorArmorChangedListener@@QEAAXAEAVActor@@@Z
    MCAPI void containerContentChanged(class Actor& actor);

    // symbol: ?initializeEntity@LegacyActorArmorChangedListener@@SAXAEAVEntityContext@@@Z
    MCAPI static void initializeEntity(class EntityContext& entity);

    // NOLINTEND
};
