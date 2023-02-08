/**
 * @file  TemporalAttributeBuff.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~TemporalAttributeBuff();
    /**
     * @hash   -1254433193
     * @vftbl  1
     * @symbol  ?isInstantaneous\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @hash   1285153220
     * @vftbl  2
     * @symbol  ?isSerializable\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isSerializable() const;
    /**
     * @hash   977054492
     * @vftbl  3
     * @symbol  ?setDurationAmplifier\@TemporalAttributeBuff\@\@UEAAXV?$shared_ptr\@VAmplifier\@\@\@std\@\@\@Z
     */
    virtual void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    /**
     * @hash   2119354177
     * @vftbl  4
     * @symbol  ?shouldBuff\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool shouldBuff() const;
    /**
     * @hash   -1935172306
     * @vftbl  5
     * @symbol  ?isComplete\@TemporalAttributeBuff\@\@UEBA_NXZ
     */
    virtual bool isComplete() const;
    /**
     * @hash   1103833626
     * @symbol  ??0TemporalAttributeBuff\@\@QEAA\@MHW4AttributeBuffType\@\@_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI TemporalAttributeBuff(float, int, enum class AttributeBuffType, bool, std::string const &);
    /**
     * @hash   -391707871
     * @symbol  ??0TemporalAttributeBuff\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI TemporalAttributeBuff(class TemporalAttributeBuff const &);
    /**
     * @hash   -244736076
     * @symbol  ?getBaseAmount\@TemporalAttributeBuff\@\@QEBAMXZ
     */
    MCAPI float getBaseAmount() const;
    /**
     * @hash   -1207223092
     * @symbol  ?getDuration\@TemporalAttributeBuff\@\@QEBAHXZ
     */
    MCAPI int getDuration() const;
    /**
     * @hash   -1467413892
     * @symbol  ?getLifeTimer\@TemporalAttributeBuff\@\@QEBAHXZ
     */
    MCAPI int getLifeTimer() const;
    /**
     * @hash   1559820850
     * @symbol  ?serializationSetLifeTime\@TemporalAttributeBuff\@\@QEAAXH\@Z
     */
    MCAPI void serializationSetLifeTime(int);
    /**
     * @hash   -65386211
     * @symbol  ?tick\@TemporalAttributeBuff\@\@QEAAXXZ
     */
    MCAPI void tick();

};