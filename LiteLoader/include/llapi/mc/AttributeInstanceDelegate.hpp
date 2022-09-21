/**
 * @file  MC/AttributeInstanceDelegate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~AttributeInstanceDelegate();
    /**
     * @hash   -1223042226
     * @vftbl  1
     * @symbol ?tick@AttributeInstanceDelegate@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   804190831
     * @vftbl  2
     * @symbol ?notify@AttributeInstanceDelegate@@UEAAX_J@Z
     */
    virtual void notify(__int64);
    /**
     * @hash   -383658731
     * @vftbl  3
     * @symbol ?willChange@AttributeInstanceDelegate@@UEAA_NMMAEBVAttributeBuff@@@Z
     */
    virtual bool willChange(float, float, class AttributeBuff const &);
    /**
     * @hash   398799137
     * @vftbl  4
     * @symbol ?change@AttributeInstanceDelegate@@UEAAMMMAEBVAttributeBuff@@@Z
     */
    virtual float change(float, float, class AttributeBuff const &);
    /**
     * @hash   1761767634
     * @vftbl  5
     * @symbol ?getBuffValueWithModifiers@AttributeInstanceDelegate@@UEBAMAEBVAttributeBuff@@@Z
     */
    virtual float getBuffValueWithModifiers(class AttributeBuff const &) const;
    /**
     * @hash   1227782417
     * @symbol ??0AttributeInstanceDelegate@@QEAA@AEBVAttributeInstance@@@Z
     */
    MCAPI AttributeInstanceDelegate(class AttributeInstance const &);

//protected:
    /**
     * @hash   756719510
     * @symbol ?_getInstance@AttributeInstanceDelegate@@IEBAAEBVAttributeInstance@@XZ
     */
    MCAPI class AttributeInstance const & _getInstance() const;
    /**
     * @hash   217804989
     * @symbol ?_getMutableInstance@AttributeInstanceDelegate@@IEBAPEAVAttributeInstance@@XZ
     */
    MCAPI class AttributeInstance * _getMutableInstance() const;

protected:

};