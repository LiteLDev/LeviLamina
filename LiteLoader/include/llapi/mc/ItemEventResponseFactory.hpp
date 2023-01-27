/**
 * @file  ItemEventResponseFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1339553820
     * @vftbl  1
     * @symbol  ?initializeFactory\@ItemEventResponseFactory\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    virtual void initializeFactory(class Experiments const &);
    /**
     * @hash   864376582
     * @vftbl  2
     * @symbol  ?initSchema\@ItemEventResponseFactory\@\@UEAAXXZ
     */
    virtual void initSchema();

};