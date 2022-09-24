/**
 * @file  AttributeBuff.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
    AttributeBuff(class AttributeBuff const &) = delete;
    AttributeBuff() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AttributeBuff();
    /**
     * @hash   -1884803248
     * @vftbl  1
     * @symbol ?isInstantaneous@InstantaneousAttributeBuff@@UEBA_NXZ
     */
    virtual bool isInstantaneous() const = 0;
    /**
     * @hash   -1300054483
     * @vftbl  2
     * @symbol ?isSerializable@InstantaneousAttributeBuff@@UEBA_NXZ
     */
    virtual bool isSerializable() const = 0;
    /**
     * @hash   -38720098
     * @vftbl  3
     * @symbol ?setDurationAmplifier@AttributeBuff@@UEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   902561666
     * @symbol ?getAmount@AttributeBuff@@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @hash   -1992565600
     * @symbol ?getCause@AttributeBuff@@QEBA?AW4ActorDamageCause@@XZ
     */
    MCAPI enum ActorDamageCause getCause() const;
    /**
     * @hash   1419561211
     * @symbol ?getId@AttributeBuff@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getId() const;
    /**
     * @hash   538048252
     * @symbol ?getOperand@AttributeBuff@@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @hash   -560471706
     * @symbol ?getSource@AttributeBuff@@QEBAAEBVActorDamageSource@@XZ
     */
    MCAPI class ActorDamageSource const & getSource() const;
    /**
     * @hash   -508821464
     * @symbol ?getType@AttributeBuff@@QEBA?AW4AttributeBuffType@@XZ
     */
    MCAPI enum AttributeBuffType getType() const;
    /**
     * @hash   -521311896
     * @symbol ??8AttributeBuff@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class AttributeBuff const &) const;
    /**
     * @hash   -1126638671
     * @symbol ?setAmplificationAmount@AttributeBuff@@QEAAXHM@Z
     */
    MCAPI void setAmplificationAmount(int, float);
    /**
     * @hash   1132049767
     * @symbol ?setId@AttributeBuff@@QEAAX_K@Z
     */
    MCAPI void setId(unsigned __int64);
    /**
     * @hash   -1724638486
     * @symbol ?setOperand@AttributeBuff@@QEAAXH@Z
     */
    MCAPI void setOperand(int);
    /**
     * @hash   -344032851
     * @symbol ?setSource@AttributeBuff@@QEAAXPEAVActor@@@Z
     */
    MCAPI void setSource(class Actor *);
    /**
     * @hash   1173775681
     * @symbol ?setValueAmplifier@AttributeBuff@@QEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     */
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   -2012249419
     * @symbol ?buffTypeToDamageCause@AttributeBuff@@SA?AW4ActorDamageCause@@W4AttributeBuffType@@@Z
     */
    MCAPI static enum ActorDamageCause buffTypeToDamageCause(enum AttributeBuffType);

//protected:
    /**
     * @hash   1664036289
     * @symbol ??0AttributeBuff@@IEAA@MHW4AttributeBuffType@@@Z
     */
    MCAPI AttributeBuff(float, int, enum AttributeBuffType);

protected:

};