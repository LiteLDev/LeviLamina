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
    // vIndex: 0
    virtual void containerContentChanged(int);

    // vIndex: 1
    virtual ~LegacyActorArmorChangedListener() = default;

    MCAPI void containerContentChanged(class Actor& actor);

    MCAPI static void initializeEntity(class EntityContext& entity);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void containerContentChanged$(int);

    // NOLINTEND
};
