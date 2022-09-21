/**
 * @file  MC/PreferredPathDescription.hpp
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
 * @brief MC structure PreferredPathDescription.
 *
 */
struct PreferredPathDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREFERREDPATHDESCRIPTION
public:
    struct PreferredPathDescription& operator=(struct PreferredPathDescription const &) = delete;
    PreferredPathDescription(struct PreferredPathDescription const &) = delete;
#endif

public:
    /**
     * @hash   -553500290
     * @vftbl  0
     * @symbol ?getJsonName@PreferredPathDescription@@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @symbol __unk_destructor_1
     */
    virtual ~PreferredPathDescription();
    /**
     * @hash   1222330037
     * @vftbl  2
     * @symbol ?deserializeData@PreferredPathDescription@@UEAAXUDeserializeDataParams@@@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @hash   -1596564161
     * @vftbl  3
     * @symbol ?serializeData@PreferredPathDescription@@UEBAXAEAVValue@Json@@@Z
     */
    virtual void serializeData(class Json::Value &) const;
    /**
     * @hash   1996326466
     * @symbol ??0PreferredPathDescription@@QEAA@XZ
     */
    MCAPI PreferredPathDescription();

};