/**
 * @file  EconomyTradeableDescription.hpp
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
 * @brief MC class EconomyTradeableDescription.
 *
 */
class EconomyTradeableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ECONOMYTRADEABLEDESCRIPTION
public:
    class EconomyTradeableDescription& operator=(class EconomyTradeableDescription const &) = delete;
    EconomyTradeableDescription(class EconomyTradeableDescription const &) = delete;
    EconomyTradeableDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@EconomyTradeableDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~EconomyTradeableDescription();
    /**
     * @vftbl  2
     * @symbol  ?deserializeData\@EconomyTradeableDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol  ?serializeData\@EconomyTradeableDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};