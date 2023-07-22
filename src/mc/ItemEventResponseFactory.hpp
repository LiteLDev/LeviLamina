/**
 * @file  ItemEventResponseFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemEventResponseFactory.
 *
 */
class ItemEventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMEVENTRESPONSEFACTORY
public:
    class ItemEventResponseFactory& operator=(class ItemEventResponseFactory const &) = delete;
    ItemEventResponseFactory(class ItemEventResponseFactory const &) = delete;
    ItemEventResponseFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemEventResponseFactory();
    /**
     * @vftbl  1
     * @symbol  ?initializeFactory\@ItemEventResponseFactory\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    virtual void initializeFactory(class Experiments const &);
    /**
     * @vftbl  2
     * @symbol  ?initSchema\@ItemEventResponseFactory\@\@UEAAXXZ
     */
    virtual void initSchema();

};