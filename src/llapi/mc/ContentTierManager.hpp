/**
 * @file  ContentTierManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContentTierManager.
 *
 */
class ContentTierManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTTIERMANAGER
public:
    class ContentTierManager& operator=(class ContentTierManager const &) = delete;
    ContentTierManager(class ContentTierManager const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ContentTierManager();
    /**
     * @vftbl  1
     * @symbol  ?getContentTierInfo\@ContentTierManager\@\@UEBA?AVContentTierInfo\@\@XZ
     */
    virtual class ContentTierInfo getContentTierInfo() const;
    /**
     * @symbol  ??0ContentTierManager\@\@QEAA\@XZ
     */
    MCAPI ContentTierManager();

};