/**
 * @file  SerializedAbilitiesData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
#include "LayeredAbilities.hpp"
#undef BEFORE_EXTRA

/**
 * @brief MC structure SerializedAbilitiesData.
 *
 */
struct SerializedAbilitiesData {

#define AFTER_EXTRA
    ActorUniqueID mUid;
    LayeredAbilities mAbilities;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZEDABILITIESDATA
public:
    struct SerializedAbilitiesData& operator=(struct SerializedAbilitiesData const &) = delete;
    SerializedAbilitiesData(struct SerializedAbilitiesData const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SerializedAbilitiesData\@\@QEAA\@XZ
     */
    MCAPI SerializedAbilitiesData();
    /**
     * @symbol  ??0SerializedAbilitiesData\@\@QEAA\@UActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCAPI SerializedAbilitiesData(struct ActorUniqueID, class LayeredAbilities const &);
    /**
     * @symbol  ?fillIn\@SerializedAbilitiesData\@\@QEBAXAEAVLayeredAbilities\@\@\@Z
     */
    MCAPI void fillIn(class LayeredAbilities &) const;
    /**
     * @symbol  ?getTargetPlayer\@SerializedAbilitiesData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetPlayer() const;
    /**
     * @symbol  ??1SerializedAbilitiesData\@\@QEAA\@XZ
     */
    MCAPI ~SerializedAbilitiesData();

//private:

};