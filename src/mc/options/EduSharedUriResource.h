#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduSharedUriResource {
public:
    std::string mLinkUri;
    std::string mButtonName;

    // prevent constructor by default
    EduSharedUriResource& operator=(EduSharedUriResource const&);
    EduSharedUriResource(EduSharedUriResource const&);

public:
    // NOLINTBEGIN
    // symbol: ??0EduSharedUriResource@@QEAA@XZ
    MCAPI EduSharedUriResource();

    // symbol: ??0EduSharedUriResource@@QEAA@AEBVCompoundTag@@@Z
    MCAPI explicit EduSharedUriResource(class CompoundTag const& tag);

    // symbol: ??0EduSharedUriResource@@QEAA@$$QEAU0@@Z
    MCAPI EduSharedUriResource(struct EduSharedUriResource&&);

    // symbol: ??1EduSharedUriResource@@QEAA@XZ
    MCAPI ~EduSharedUriResource();

    // symbol: ?fromTag@EduSharedUriResource@@SA?AU1@AEBVCompoundTag@@@Z
    MCAPI static struct EduSharedUriResource fromTag(class CompoundTag const& tag);

    // symbol:
    // ?toTag@EduSharedUriResource@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBU1@@Z
    MCAPI static std::unique_ptr<class CompoundTag> toTag(struct EduSharedUriResource const& resource);

    // NOLINTEND
};
