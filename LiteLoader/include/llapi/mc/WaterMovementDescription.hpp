/**
 * @file  WaterMovementDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WaterMovementDescription.
 *
 */
class WaterMovementDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WATERMOVEMENTDESCRIPTION
public:
    class WaterMovementDescription& operator=(class WaterMovementDescription const &) = delete;
    WaterMovementDescription(class WaterMovementDescription const &) = delete;
#endif

public:
    /**
     * @hash   1850636878
     * @vftbl  0
     * @symbol  ?getJsonName\@WaterMovementDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~WaterMovementDescription();
    /**
     * @hash   -932925099
     * @vftbl  2
     * @symbol  ?deserializeData\@WaterMovementDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1504083745
     * @vftbl  3
     * @symbol  ?serializeData\@WaterMovementDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   -1777920526
     * @symbol  ??0WaterMovementDescription\@\@QEAA\@XZ
     */
    MCAPI WaterMovementDescription();

};