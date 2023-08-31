#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

class SynchedActorDataWriter {

public:
    // prevent constructor by default
    SynchedActorDataWriter& operator=(SynchedActorDataWriter const&) = delete;
    SynchedActorDataWriter(SynchedActorDataWriter const&)            = delete;
    SynchedActorDataWriter()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?reader\@SynchedActorDataWriter\@\@QEBA?AVSynchedActorDataReader\@\@XZ
     */
    MCAPI class SynchedActorDataReader reader() const;
    /**
     * @symbol ?setStatusFlag\@SynchedActorDataWriter\@\@QEAAXW4ActorFlags\@\@_N\@Z
     */
    MCAPI void setStatusFlag(enum class ActorFlags, bool);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_get\@SynchedActorDataWriter\@\@AEAA?AV?$not_null\@PEAVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI gsl::not_null<class SynchedActorData*> _get();
    // NOLINTEND
};
