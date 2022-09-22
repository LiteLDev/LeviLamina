/**
 * @file  TransformationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -671267519
     * @vftbl  0
     * @symbol ?getJsonName@TransformationDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~TransformationDescription();
    /**
     * @hash   908331170
     * @vftbl  2
     * @symbol ?deserializeData@TransformationDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   1232011308
     * @vftbl  3
     * @symbol ?serializeData@TransformationDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   -1159412113
     * @symbol ??0TransformationDescription@@QEAA@XZ
     */
    MCAPI TransformationDescription();

};