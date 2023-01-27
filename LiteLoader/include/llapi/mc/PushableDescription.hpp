/**
 * @file  PushableDescription.hpp
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
 * @brief MC structure PushableDescription.
 *
 */
struct PushableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHABLEDESCRIPTION
public:
    struct PushableDescription& operator=(struct PushableDescription const &) = delete;
    PushableDescription(struct PushableDescription const &) = delete;
#endif

public:
    /**
     * @hash   -1497212548
     * @vftbl  0
     * @symbol  ?getJsonName\@PushableDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol  __unk_destructor_1
     */
    virtual ~PushableDescription();
    /**
     * @hash   -2124447993
     * @vftbl  2
     * @symbol  ?deserializeData\@PushableDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -827657055
     * @vftbl  3
     * @symbol  ?serializeData\@PushableDescription\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   1481446932
     * @symbol  ??0PushableDescription\@\@QEAA\@XZ
     */
    MCAPI PushableDescription();

};