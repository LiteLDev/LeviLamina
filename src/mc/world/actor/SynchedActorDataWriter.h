#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SynchedActorDataWriter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCHEDACTORDATAWRITER
public:
    SynchedActorDataWriter& operator=(SynchedActorDataWriter const&) = delete;
    SynchedActorDataWriter(SynchedActorDataWriter const&)            = delete;
    SynchedActorDataWriter()                                         = delete;
#endif

public:
    /**
     * @symbol ?reader\@SynchedActorDataWriter\@\@QEBA?AVSynchedActorDataReader\@\@XZ
     */
    MCAPI class SynchedActorDataReader reader() const;
    /**
     * @symbol ?setStatusFlag\@SynchedActorDataWriter\@\@QEAAXW4ActorFlags\@\@_N\@Z
     */
    MCAPI void setStatusFlag(enum class ActorFlags, bool);

    // private:
    /**
     * @symbol ?_get\@SynchedActorDataWriter\@\@AEAA?AV?$not_null\@PEAVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class SynchedActorData*> _get();

private:
};
