#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

class SynchedActorDataReader {

public:
    // prevent constructor by default
    SynchedActorDataReader& operator=(SynchedActorDataReader const&) = delete;
    SynchedActorDataReader(SynchedActorDataReader const&)            = delete;
    SynchedActorDataReader()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getInt\@SynchedActorDataReader\@\@QEBAHG\@Z
     */
    MCAPI int32_t getInt(uint16_t) const;
    /**
     * @symbol ?getPosition\@SynchedActorDataReader\@\@QEBA?AVBlockPos\@\@G\@Z
     */
    MCAPI class BlockPos getPosition(uint16_t) const;
    /**
     * @symbol ?getStatusFlag\@SynchedActorDataReader\@\@QEBA_NW4ActorFlags\@\@\@Z
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @symbol ?getVec3\@SynchedActorDataReader\@\@QEBA?AVVec3\@\@G\@Z
     */
    MCAPI class Vec3 getVec3(uint16_t) const;
    // NOLINTEND
};
