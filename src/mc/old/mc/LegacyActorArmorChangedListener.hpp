/**
 * @file  LegacyActorArmorChangedListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyActorArmorChangedListener.
 *
 */
class LegacyActorArmorChangedListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYACTORARMORCHANGEDLISTENER
public:
    class LegacyActorArmorChangedListener& operator=(class LegacyActorArmorChangedListener const &) = delete;
    LegacyActorArmorChangedListener(class LegacyActorArmorChangedListener const &) = delete;
    LegacyActorArmorChangedListener() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?containerContentChanged\@LegacyActorArmorChangedListener\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int);
    /**
     * @symbol  ?containerContentChanged\@LegacyActorArmorChangedListener\@\@SAXAEAVActor\@\@\@Z
     */
    MCAPI static void containerContentChanged(class Actor &);
    /**
     * @symbol  ?initializeEntity\@LegacyActorArmorChangedListener\@\@SAXAEAVEntityContext\@\@\@Z
     */
    MCAPI static void initializeEntity(class EntityContext &);

};