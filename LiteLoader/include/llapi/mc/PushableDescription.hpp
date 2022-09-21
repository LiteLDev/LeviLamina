/**
 * @file  MC/PushableDescription.hpp
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
     * @hash   -655561060
     * @vftbl  0
     * @symbol ?getJsonName@PushableDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~PushableDescription();
    /**
     * @hash   -1282796505
     * @vftbl  2
     * @symbol ?deserializeData@PushableDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   13917553
     * @vftbl  3
     * @symbol ?serializeData@PushableDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   -1971838124
     * @symbol ??0PushableDescription@@QEAA@XZ
     */
    MCAPI PushableDescription();

};