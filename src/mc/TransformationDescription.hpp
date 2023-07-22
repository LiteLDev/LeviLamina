/**
 * @file  TransformationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure TransformationDescription.
 *
 */
struct TransformationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMATIONDESCRIPTION
public:
    struct TransformationDescription& operator=(struct TransformationDescription const &) = delete;
    TransformationDescription(struct TransformationDescription const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@TransformationDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~TransformationDescription();
    /**
     * @vftbl  2
     * @symbol  ?deserializeData\@TransformationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol  ?serializeData\@TransformationDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @symbol  ??0TransformationDescription\@\@QEAA\@XZ
     */
    MCAPI TransformationDescription();

};