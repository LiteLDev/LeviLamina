/**
 * @file  InstantaneousAttributeBuff.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "AttributeBuff.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InstantaneousAttributeBuff.
 *
 */
class InstantaneousAttributeBuff : public AttributeBuff {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTANEOUSATTRIBUTEBUFF
public:
    class InstantaneousAttributeBuff& operator=(class InstantaneousAttributeBuff const &) = delete;
    InstantaneousAttributeBuff(class InstantaneousAttributeBuff const &) = delete;
    InstantaneousAttributeBuff() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InstantaneousAttributeBuff();
    /**
     * @hash   758506347
     * @vftbl  1
     * @symbol ?isInstantaneous@InstantaneousAttributeBuff@@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @hash   1349989800
     * @vftbl  2
     * @symbol ?isSerializable@InstantaneousAttributeBuff@@UEBA_NXZ
     */
    virtual bool isSerializable() const;
    /**
     * @hash   -1947804691
     * @symbol ??0InstantaneousAttributeBuff@@QEAA@MW4AttributeBuffType@@@Z
     */
    MCAPI InstantaneousAttributeBuff(float, enum AttributeBuffType);
    /**
     * @hash   -1009747381
     * @symbol ??0InstantaneousAttributeBuff@@QEAA@MAEBVActorDamageSource@@@Z
     */
    MCAPI InstantaneousAttributeBuff(float, class ActorDamageSource const &);

};