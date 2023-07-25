#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyActorArmorChangedListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYACTORARMORCHANGEDLISTENER
public:
    LegacyActorArmorChangedListener& operator=(LegacyActorArmorChangedListener const&) = delete;
    LegacyActorArmorChangedListener(LegacyActorArmorChangedListener const&)            = delete;
    LegacyActorArmorChangedListener()                                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@LegacyActorArmorChangedListener\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @symbol ?containerContentChanged\@LegacyActorArmorChangedListener\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void containerContentChanged(class Actor&);
    /**
     * @symbol ?initializeEntity\@LegacyActorArmorChangedListener\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void initializeEntity(class EntityContext&);
};
