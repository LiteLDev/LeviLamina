/**
 * @file  PageContent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PageContent.
 *
 */
struct PageContent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PAGECONTENT
public:
    PageContent(struct PageContent const &) = delete;
    PageContent() = delete;
#endif

public:
    /**
     * @symbol  ?createTag\@PageContent\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;
    /**
     * @symbol  ??4PageContent\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct PageContent & operator=(struct PageContent const &);
    /**
     * @symbol  ??1PageContent\@\@QEAA\@XZ
     */
    MCAPI ~PageContent();
    /**
     * @symbol  ?BLANK_PAGE\@PageContent\@\@2U1\@B
     */
    MCAPI static struct PageContent const BLANK_PAGE;
    /**
     * @symbol  ?read\@PageContent\@\@SA?AU1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static struct PageContent read(class CompoundTag const &);
    /**
     * @symbol  ?write\@PageContent\@\@SAXAEBU1\@AEAVCompoundTag\@\@\@Z
     */
    MCAPI static void write(struct PageContent const &, class CompoundTag &);

};