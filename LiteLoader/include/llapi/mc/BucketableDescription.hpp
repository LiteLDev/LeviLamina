/**
 * @file  BucketableDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BucketableDescription.
 *
 */
class BucketableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETABLEDESCRIPTION
public:
    class BucketableDescription& operator=(class BucketableDescription const &) = delete;
    BucketableDescription(class BucketableDescription const &) = delete;
    BucketableDescription() = delete;
#endif

public:
    /**
     * @hash   -1003498580
     * @vftbl  0
     * @symbol  ?getJsonName\@BucketableDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~BucketableDescription();
    /**
     * @hash   -1231442303
     * @vftbl  3
     * @symbol  ?serializeData\@BucketableDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};