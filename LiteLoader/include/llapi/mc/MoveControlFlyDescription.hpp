/**
 * @file  MoveControlFlyDescription.hpp
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
 * @brief MC class MoveControlFlyDescription.
 *
 */
class MoveControlFlyDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLFLYDESCRIPTION
public:
    class MoveControlFlyDescription& operator=(class MoveControlFlyDescription const &) = delete;
    MoveControlFlyDescription(class MoveControlFlyDescription const &) = delete;
    MoveControlFlyDescription() = delete;
#endif

public:
    /**
     * @hash   -38272433
     * @vftbl  0
     * @symbol ?getJsonName@MoveControlFlyDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~MoveControlFlyDescription();
    /**
     * @hash   1157478916
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   58659982
     * @vftbl  3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};