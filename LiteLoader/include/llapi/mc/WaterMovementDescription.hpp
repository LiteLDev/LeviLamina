/**
 * @file  MC/WaterMovementDescription.hpp
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
     * @hash   1020286750
     * @vftbl  0
     * @symbol ?getJsonName@WaterMovementDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~WaterMovementDescription();
    /**
     * @hash   -1763275227
     * @vftbl  2
     * @symbol ?deserializeData@WaterMovementDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   1960533423
     * @vftbl  3
     * @symbol ?serializeData@WaterMovementDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   1686696642
     * @symbol ??0WaterMovementDescription@@QEAA@XZ
     */
    MCAPI WaterMovementDescription();

};