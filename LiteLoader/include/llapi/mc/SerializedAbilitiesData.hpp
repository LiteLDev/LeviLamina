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
     * @hash   681638394
     * @symbol  ??0SerializedAbilitiesData\@\@QEAA\@XZ
     */
    MCAPI SerializedAbilitiesData();
    /**
     * @hash   2048367378
     * @symbol  ??0SerializedAbilitiesData\@\@QEAA\@UActorUniqueID\@\@AEBVLayeredAbilities\@\@\@Z
     */
    MCAPI SerializedAbilitiesData(struct ActorUniqueID, class LayeredAbilities const &);
    /**
     * @hash   1573292580
     * @symbol  ?fillIn\@SerializedAbilitiesData\@\@QEBAXAEAVLayeredAbilities\@\@\@Z
     */
    MCAPI void fillIn(class LayeredAbilities &) const;
    /**
     * @hash   -950278476
     * @symbol  ?getTargetPlayer\@SerializedAbilitiesData\@\@QEBA?AUActorUniqueID\@\@XZ
     */
    MCAPI struct ActorUniqueID getTargetPlayer() const;
    /**
     * @hash   1926595930
     * @symbol  ??1SerializedAbilitiesData\@\@QEAA\@XZ
     */
    MCAPI ~SerializedAbilitiesData();

//private:

};