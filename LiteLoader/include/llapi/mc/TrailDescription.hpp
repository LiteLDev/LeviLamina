/**
 * @file  MC/TrailDescription.hpp
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
 * @brief MC class TrailDescription.
 *
 */
class TrailDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILDESCRIPTION
public:
    class TrailDescription& operator=(class TrailDescription const &) = delete;
    TrailDescription(class TrailDescription const &) = delete;
#endif

public:
    /**
     * @hash   -1078860946
     * @vftbl  0
     * @symbol ?getJsonName@TrailDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~TrailDescription();
    /**
     * @hash   921091045
     * @vftbl  2
     * @symbol ?deserializeData@TrailDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1087233889
     * @vftbl  3
     * @symbol ?serializeData@TrailDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   -1047507166
     * @symbol ??0TrailDescription@@QEAA@XZ
     */
    MCAPI TrailDescription();

};