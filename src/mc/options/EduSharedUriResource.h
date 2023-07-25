#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduSharedUriResource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUSHAREDURIRESOURCE
public:
    EduSharedUriResource& operator=(EduSharedUriResource const&) = delete;
    EduSharedUriResource(EduSharedUriResource const&)            = delete;
#endif

public:
    /**
     * @symbol ??0EduSharedUriResource\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI EduSharedUriResource(struct EduSharedUriResource&&);
    /**
     * @symbol ??0EduSharedUriResource\@\@QEAA\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI EduSharedUriResource(class CompoundTag const&);
    /**
     * @symbol ??0EduSharedUriResource\@\@QEAA\@XZ
     */
    MCAPI EduSharedUriResource();
    /**
     * @symbol ??1EduSharedUriResource\@\@QEAA\@XZ
     */
    MCAPI ~EduSharedUriResource();
    /**
     * @symbol ?fromTag\@EduSharedUriResource\@\@SA?AU1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static struct EduSharedUriResource fromTag(class CompoundTag const&);
    /**
     * @symbol
     * ?toTag\@EduSharedUriResource\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBU1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> toTag(struct EduSharedUriResource const&);
};
