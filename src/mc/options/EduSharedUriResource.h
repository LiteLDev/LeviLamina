#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EduSharedUriResource {
public:
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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
