/**
 * @file  SynchedActorDataWriter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SynchedActorDataWriter.
 *
 */
class SynchedActorDataWriter {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCHEDACTORDATAWRITER
public:
    class SynchedActorDataWriter& operator=(class SynchedActorDataWriter const &) = delete;
    SynchedActorDataWriter(class SynchedActorDataWriter const &) = delete;
    SynchedActorDataWriter() = delete;
#endif

public:
    /**
     * @symbol  ?reader\@SynchedActorDataWriter\@\@QEBA?AVSynchedActorDataReader\@\@XZ
     */
    MCAPI class SynchedActorDataReader reader() const;
    /**
     * @symbol  ?setStatusFlag\@SynchedActorDataWriter\@\@QEAAXW4ActorFlags\@\@_N\@Z
     */
    MCAPI void setStatusFlag(enum class ActorFlags, bool);

//private:
    /**
     * @symbol  ?_get\@SynchedActorDataWriter\@\@AEAA?AV?$not_null\@PEAVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class SynchedActorData *> _get();

private:

};