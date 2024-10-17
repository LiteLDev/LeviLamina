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
    MCAPI EduSharedUriResource();

    MCAPI explicit EduSharedUriResource(class CompoundTag const& tag);

    MCAPI EduSharedUriResource(struct EduSharedUriResource&&);

    MCAPI ~EduSharedUriResource();

    MCAPI static struct EduSharedUriResource fromTag(class CompoundTag const& tag);

    MCAPI static std::unique_ptr<class CompoundTag> toTag(struct EduSharedUriResource const& resource);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct EduSharedUriResource&&);

    MCAPI void* ctor$(class CompoundTag const& tag);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
