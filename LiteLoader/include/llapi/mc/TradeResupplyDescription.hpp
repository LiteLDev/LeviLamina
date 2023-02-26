/**
 * @file  TradeResupplyDescription.hpp
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
 * @brief MC class TradeResupplyDescription.
 *
 */
class TradeResupplyDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADERESUPPLYDESCRIPTION
public:
    class TradeResupplyDescription& operator=(class TradeResupplyDescription const &) = delete;
    TradeResupplyDescription(class TradeResupplyDescription const &) = delete;
    TradeResupplyDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?getJsonName\@TradeResupplyDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~TradeResupplyDescription();
    /**
     * @vftbl  3
     * @symbol  ?serializeData\@TradeResupplyDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};