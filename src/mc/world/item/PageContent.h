#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PageContent {

public:
    // prevent constructor by default
    PageContent(PageContent const&) = delete;
    PageContent()                   = delete;

public:
    /**
     * @symbol
     * ?createTag\@PageContent\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag() const; // NOLINT
    /**
     * @symbol ??4PageContent\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct PageContent& operator=(struct PageContent const&); // NOLINT
    /**
     * @symbol ??1PageContent\@\@QEAA\@XZ
     */
    MCAPI ~PageContent(); // NOLINT
    /**
     * @symbol ?read\@PageContent\@\@SA?AU1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static struct PageContent read(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?write\@PageContent\@\@SAXAEBU1\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI static void write(struct PageContent const&, class CompoundTag&); // NOLINT
    /**
     * @symbol ?BLANK_PAGE\@PageContent\@\@2U1\@B
     */
    MCAPI static struct PageContent const BLANK_PAGE; // NOLINT
};
