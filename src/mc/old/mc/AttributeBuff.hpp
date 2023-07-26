/**
 * @file  AttributeBuff.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeBuff.
 *
 */
class AttributeBuff {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEBUFF
public:
    class AttributeBuff& operator=(class AttributeBuff const &) = delete;
    AttributeBuff() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AttributeBuff();
    /**
     * @vftbl  1
     * @symbol  ?isInstantaneous\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const = 0;
    /**
     * @vftbl  2
     * @symbol  ?isSerializable\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isSerializable() const = 0;
    /**
     * @vftbl  3
     * @symbol  ?setDurationAmplifier\@AttributeBuff\@\@UEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @symbol  ??0AttributeBuff\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AttributeBuff(class AttributeBuff const &);
    /**
     * @symbol  ?getAmount\@AttributeBuff\@\@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @symbol  ?getCause\@AttributeBuff\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getCause() const;
    /**
     * @symbol  ?getId\@AttributeBuff\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getId() const;
    /**
     * @symbol  ?getOperand\@AttributeBuff\@\@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @symbol  ?getSource\@AttributeBuff\@\@QEBAAEBVActorDamageSource\@\@XZ
     */
    MCAPI class ActorDamageSource const & getSource() const;
    /**
     * @symbol  ?getType\@AttributeBuff\@\@QEBA?AW4AttributeBuffType\@\@XZ
     */
    MCAPI enum class AttributeBuffType getType() const;
    /**
     * @symbol  ??8AttributeBuff\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeBuff const &) const;
    /**
     * @symbol  ?setAmplificationAmount\@AttributeBuff\@\@QEAAXHM\@Z
     */
    MCAPI void setAmplificationAmount(int, float);
    /**
     * @symbol  ?setId\@AttributeBuff\@\@QEAAX_K\@Z
     */
    MCAPI void setId(unsigned __int64);
    /**
     * @symbol  ?setOperand\@AttributeBuff\@\@QEAAXH\@Z
     */
    MCAPI void setOperand(int);
    /**
     * @symbol  ?setSource\@AttributeBuff\@\@QEAAXPEAVActor\@\@\@Z
     */
    MCAPI void setSource(class Actor *);
    /**
     * @symbol  ?setValueAmplifier\@AttributeBuff\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @symbol  ?buffTypeToDamageCause\@AttributeBuff\@\@SA?AW4ActorDamageCause\@\@W4AttributeBuffType\@\@\@Z
     */
    MCAPI static enum class ActorDamageCause buffTypeToDamageCause(enum class AttributeBuffType);

//protected:
    /**
     * @symbol  ??0AttributeBuff\@\@IEAA\@MHW4AttributeBuffType\@\@\@Z
     */
    MCAPI AttributeBuff(float, int, enum class AttributeBuffType);
    /**
     * @symbol  ??0AttributeBuff\@\@IEAA\@MHAEBVActorDamageSource\@\@W4AttributeBuffType\@\@\@Z
     */
    MCAPI AttributeBuff(float, int, class ActorDamageSource const &, enum class AttributeBuffType);

protected:

};