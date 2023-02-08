/**
 * @file  AttributeInstanceDelegate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeInstanceDelegate.
 *
 */
class AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCEDELEGATE
public:
    class AttributeInstanceDelegate& operator=(class AttributeInstanceDelegate const &) = delete;
    AttributeInstanceDelegate(class AttributeInstanceDelegate const &) = delete;
    AttributeInstanceDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AttributeInstanceDelegate();
    /**
     * @hash   -1131155250
     * @vftbl  1
     * @symbol  ?tick\@AttributeInstanceDelegate\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   896077807
     * @vftbl  2
     * @symbol  ?notify\@AttributeInstanceDelegate\@\@UEAAX_J\@Z
     */
    virtual void notify(__int64);
    /**
     * @hash   -283760859
     * @vftbl  3
     * @symbol  ?willChange\@AttributeInstanceDelegate\@\@UEAA_NMMAEBVAttributeBuff\@\@\@Z
     */
    virtual bool willChange(float, float, class AttributeBuff const &);
    /**
     * @hash   1160469265
     * @vftbl  4
     * @symbol  ?change\@AttributeInstanceDelegate\@\@UEAAMMMAEBVAttributeBuff\@\@\@Z
     */
    virtual float change(float, float, class AttributeBuff const &);
    /**
     * @hash   -1771529534
     * @vftbl  5
     * @symbol  ?getBuffValueWithModifiers\@AttributeInstanceDelegate\@\@UEBAMAEBVAttributeBuff\@\@\@Z
     */
    virtual float getBuffValueWithModifiers(class AttributeBuff const &) const;
    /**
     * @hash   1989452545
     * @symbol  ??0AttributeInstanceDelegate\@\@QEAA\@AEBVAttributeInstance\@\@\@Z
     */
    MCAPI AttributeInstanceDelegate(class AttributeInstance const &);

//protected:
    /**
     * @hash   1518389638
     * @symbol  ?_getInstance\@AttributeInstanceDelegate\@\@IEBAAEBVAttributeInstance\@\@XZ
     */
    MCAPI class AttributeInstance const & _getInstance() const;
    /**
     * @hash   979475117
     * @symbol  ?_getMutableInstance\@AttributeInstanceDelegate\@\@IEBAPEAVAttributeInstance\@\@XZ
     */
    MCAPI class AttributeInstance * _getMutableInstance() const;

protected:

};