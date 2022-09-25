/**
 * @file  TemporalAttributeBuff.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TemporalAttributeBuff.
 *
 */
class TemporalAttributeBuff {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPORALATTRIBUTEBUFF
public:
    class TemporalAttributeBuff& operator=(class TemporalAttributeBuff const &) = delete;
    TemporalAttributeBuff() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TemporalAttributeBuff();
    /**
     * @hash   -1355053737
     * @vftbl  1
     * @symbol ?isInstantaneous@TemporalAttributeBuff@@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @hash   1860999796
     * @vftbl  2
     * @symbol ?isSerializable@TemporalAttributeBuff@@UEBA_NXZ
     */
    virtual bool isSerializable() const;
    /**
     * @hash   1552885692
     * @vftbl  3
     * @symbol ?setDurationAmplifier@TemporalAttributeBuff@@UEAAXV?$shared_ptr@VAmplifier@@@std@@@Z
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   -1599843423
     * @vftbl  4
     * @symbol ?shouldBuff@TemporalAttributeBuff@@UEBA_NXZ
     */
    virtual bool shouldBuff() const;
    /**
     * @hash   -1359325730
     * @vftbl  5
     * @symbol ?isComplete@TemporalAttributeBuff@@UEBA_NXZ
     */
    virtual bool isComplete() const;
    /**
     * @hash   1679741706
     * @symbol ??0TemporalAttributeBuff@@QEAA@MHW4AttributeBuffType@@_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI TemporalAttributeBuff(float, int, enum AttributeBuffType, bool, std::string const &);
    /**
     * @hash   -495260639
     * @symbol ??0TemporalAttributeBuff@@QEAA@AEBV0@@Z
     */
    MCAPI TemporalAttributeBuff(class TemporalAttributeBuff const &);
    /**
     * @hash   606125636
     * @symbol ?getBaseAmount@TemporalAttributeBuff@@QEBAMXZ
     */
    MCAPI float getBaseAmount() const;
    /**
     * @hash   -355454196
     * @symbol ?getDuration@TemporalAttributeBuff@@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @hash   -891567316
     * @symbol ?getLifeTimer@TemporalAttributeBuff@@QEBAHXZ
     */
    MCAPI int getLifeTimer() const;
    /**
     * @hash   2135667426
     * @symbol ?serializationSetLifeTime@TemporalAttributeBuff@@QEAAXH@Z
     */
    MCAPI void serializationSetLifeTime(int);
    /**
     * @hash   510352733
     * @symbol ?tick@TemporalAttributeBuff@@QEAAXXZ
     */
    MCAPI void tick();

};