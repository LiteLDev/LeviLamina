#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyActorArmorChangedListener {

public:
    // prevent constructor by default
    LegacyActorArmorChangedListener& operator=(LegacyActorArmorChangedListener const&) = delete;
    LegacyActorArmorChangedListener(LegacyActorArmorChangedListener const&)            = delete;
    LegacyActorArmorChangedListener()                                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@LegacyActorArmorChangedListener\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int); // NOLINT
    /**
     * @symbol ?containerContentChanged\@LegacyActorArmorChangedListener\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void containerContentChanged(class Actor&); // NOLINT
    /**
     * @symbol ?initializeEntity\@LegacyActorArmorChangedListener\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void initializeEntity(class EntityContext&); // NOLINT
};
