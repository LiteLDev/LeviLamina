#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PageContent {
public:
    // prevent constructor by default
    PageContent(PageContent const&);
    PageContent();

public:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;

    MCAPI struct PageContent& operator=(struct PageContent const&);

    MCAPI ~PageContent();

    MCAPI static struct PageContent read(class CompoundTag const& tag);

    MCAPI static void write(struct PageContent const& page, class CompoundTag& tag);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    MCAPI static struct PageContent const& BLANK_PAGE();

    // NOLINTEND
};
