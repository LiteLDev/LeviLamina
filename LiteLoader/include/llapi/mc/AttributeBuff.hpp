/**
 * @file  AttributeBuff.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1884803248
     * @vftbl  1
     * @symbol  ?isInstantaneous\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const = 0;
    /**
     * @hash   -1300054483
     * @vftbl  2
     * @symbol  ?isSerializable\@InstantaneousAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isSerializable() const = 0;
    /**
     * @hash   -614566674
     * @vftbl  3
     * @symbol  ?setDurationAmplifier\@AttributeBuff\@\@UEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   304030161
     * @symbol  ??0AttributeBuff\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AttributeBuff(class AttributeBuff const &);
    /**
     * @hash   326715090
     * @symbol  ?getAmount\@AttributeBuff\@\@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @hash   1726555120
     * @symbol  ?getCause\@AttributeBuff\@\@QEBA?AW4ActorDamageCause\@\@XZ
     */
    MCAPI enum class ActorDamageCause getCause() const;
    /**
     * @hash   1519366827
     * @symbol  ?getId\@AttributeBuff\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getId() const;
    /**
     * @hash   -37798324
     * @symbol  ?getOperand\@AttributeBuff\@\@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @hash   -456699082
     * @symbol  ?getSource\@AttributeBuff\@\@QEBAAEBVActorDamageSource\@\@XZ
     */
    MCAPI class ActorDamageSource const & getSource() const;
    /**
     * @hash   -257808264
     * @symbol  ?getType\@AttributeBuff\@\@QEBA?AW4AttributeBuffType\@\@XZ
     */
    MCAPI enum class AttributeBuffType getType() const;
    /**
     * @hash   -1097189224
     * @symbol  ??8AttributeBuff\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeBuff const &) const;
    /**
     * @hash   -1702485247
     * @symbol  ?setAmplificationAmount\@AttributeBuff\@\@QEAAXHM\@Z
     */
    MCAPI void setAmplificationAmount(int, float);
    /**
     * @hash   556249319
     * @symbol  ?setId\@AttributeBuff\@\@QEAAX_K\@Z
     */
    MCAPI void setId(unsigned __int64);
    /**
     * @hash   1994528362
     * @symbol  ?setOperand\@AttributeBuff\@\@QEAAXH\@Z
     */
    MCAPI void setOperand(int);
    /**
     * @hash   -919833299
     * @symbol  ?setSource\@AttributeBuff\@\@QEAAXPEAVActor\@\@\@Z
     */
    MCAPI void setSource(class Actor *);
    /**
     * @hash   597990609
     * @symbol  ?setValueAmplifier\@AttributeBuff\@\@QEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   1706871301
     * @symbol  ?buffTypeToDamageCause\@AttributeBuff\@\@SA?AW4ActorDamageCause\@\@W4AttributeBuffType\@\@\@Z
     */
    MCAPI static enum class ActorDamageCause buffTypeToDamageCause(enum class AttributeBuffType);

//protected:
    /**
     * @hash   1088343473
     * @symbol  ??0AttributeBuff\@\@IEAA\@MHW4AttributeBuffType\@\@\@Z
     */
    MCAPI AttributeBuff(float, int, enum class AttributeBuffType);
    /**
     * @hash   -1273125753
     * @symbol  ??0AttributeBuff\@\@IEAA\@MHAEBVActorDamageSource\@\@W4AttributeBuffType\@\@\@Z
     */
    MCAPI AttributeBuff(float, int, class ActorDamageSource const &, enum class AttributeBuffType);

protected:

};