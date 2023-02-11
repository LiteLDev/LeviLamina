/**
 * @file  AttackDescription.hpp
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
 * @brief MC class AttackDescription.
 *
 */
class AttackDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKDESCRIPTION
public:
    class AttackDescription& operator=(class AttackDescription const &) = delete;
    AttackDescription(class AttackDescription const &) = delete;
    AttackDescription() = delete;
#endif

public:
    /**
     * @hash   2012334000
     * @vftbl  0
     * @symbol  ?getJsonName\@AttackDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~AttackDescription();
    /**
     * @hash   646590403
     * @vftbl  2
     * @symbol  ?deserializeData\@AttackDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -766520707
     * @vftbl  3
     * @symbol  ?serializeData\@AttackDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;

};