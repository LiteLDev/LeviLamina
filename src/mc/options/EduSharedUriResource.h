#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduSharedUriResource {

public:
    // prevent constructor by default
    EduSharedUriResource& operator=(EduSharedUriResource const&) = delete;
    EduSharedUriResource(EduSharedUriResource const&)            = delete;

public:
    /**
     * @symbol ??0EduSharedUriResource\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI EduSharedUriResource(struct EduSharedUriResource&&); // NOLINT
    /**
     * @symbol ??0EduSharedUriResource\@\@QEAA\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI EduSharedUriResource(class CompoundTag const&); // NOLINT
    /**
     * @symbol ??0EduSharedUriResource\@\@QEAA\@XZ
     */
    MCAPI EduSharedUriResource(); // NOLINT
    /**
     * @symbol ??1EduSharedUriResource\@\@QEAA\@XZ
     */
    MCAPI ~EduSharedUriResource(); // NOLINT
    /**
     * @symbol ?fromTag\@EduSharedUriResource\@\@SA?AU1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static struct EduSharedUriResource fromTag(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?toTag\@EduSharedUriResource\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBU1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> toTag(struct EduSharedUriResource const&); // NOLINT
};
