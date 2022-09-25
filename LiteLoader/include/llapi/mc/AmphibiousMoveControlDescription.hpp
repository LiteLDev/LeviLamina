/**
 * @file  AmphibiousMoveControlDescription.hpp
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
 * @brief MC class AmphibiousMoveControlDescription.
 *
 */
class AmphibiousMoveControlDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMPHIBIOUSMOVECONTROLDESCRIPTION
public:
    class AmphibiousMoveControlDescription& operator=(class AmphibiousMoveControlDescription const &) = delete;
    AmphibiousMoveControlDescription(class AmphibiousMoveControlDescription const &) = delete;
    AmphibiousMoveControlDescription() = delete;
#endif

public:
    /**
     * @hash   -250415933
     * @vftbl  0
     * @symbol ?getJsonName@AmphibiousMoveControlDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~AmphibiousMoveControlDescription();
    /**
     * @hash   351189184
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -747629750
     * @vftbl  3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;

};