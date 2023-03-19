/**
 * @file  InstantaneousAttributeBuff.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isInstantaneous\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @vftbl 2
     * @symbol ?isSerializable\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isSerializable() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSTANTANEOUSATTRIBUTEBUFF
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InstantaneousAttributeBuff();
#endif
    /**
     * @symbol ??0InstantaneousAttributeBuff\@\@QEAA\@MAEBVActorDamageSource\@\@\@Z
     */
    MCAPI InstantaneousAttributeBuff(float, class ActorDamageSource const &);
    /**
     * @symbol ??0InstantaneousAttributeBuff\@\@QEAA\@MW4AttributeBuffType\@\@\@Z
     */
    MCAPI InstantaneousAttributeBuff(float, enum class AttributeBuffType);

};
