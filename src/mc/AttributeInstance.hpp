/**
 * @file  AttributeInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeInstance.
 *
 */
class AttributeInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCE
public:
    class AttributeInstance& operator=(class AttributeInstance const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AttributeInstance();
    /**
     * @vftbl  1
     * @symbol  ?tick\@AttributeInstance\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @symbol  ??0AttributeInstance\@\@QEAA\@XZ
     */
    MCAPI AttributeInstance();
    /**
     * @symbol  ??0AttributeInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AttributeInstance(class AttributeInstance const &);
    /**
     * @symbol  ?addBuff\@AttributeInstance\@\@QEAAXAEBVAttributeBuff\@\@\@Z
     */
    MCAPI void addBuff(class AttributeBuff const &);
    /**
     * @symbol  ?addModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void addModifier(class AttributeModifier const &);
    /**
     * @symbol  ?addModifier\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void addModifier(class std::shared_ptr<class AttributeModifier>);
    /**
     * @symbol  ?getAttribute\@AttributeInstance\@\@QEBAPEBVAttribute\@\@XZ
     */
    MCAPI class Attribute const * getAttribute() const;
    /**
     * @symbol  ?getBuffs\@AttributeInstance\@\@QEBAAEBV?$vector\@VTemporalAttributeBuff\@\@V?$allocator\@VTemporalAttributeBuff\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class TemporalAttributeBuff> const & getBuffs() const;
    /**
     * @symbol  ?getCurrentValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getCurrentValue() const;
    /**
     * @symbol  ?getDefaultValue\@AttributeInstance\@\@QEBAMH\@Z
     */
    MCAPI float getDefaultValue(int) const;
    /**
     * @symbol  ?getHandle\@AttributeInstance\@\@QEBA?AVAttributeInstanceHandle\@\@XZ
     */
    MCAPI class AttributeInstanceHandle getHandle() const;
    /**
     * @symbol  ?getListeners\@AttributeInstance\@\@QEBAAEBV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> const & getListeners() const;
    /**
     * @symbol  ?getMaxValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getMaxValue() const;
    /**
     * @symbol  ?getMinValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getMinValue() const;
    /**
     * @symbol  ?getModifier\@AttributeInstance\@\@QEBA?AVAttributeModifier\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI class AttributeModifier getModifier(class mce::UUID const &) const;
    /**
     * @symbol  ?getModifiers\@AttributeInstance\@\@QEBA?AV?$vector\@VAttributeModifier\@\@V?$allocator\@VAttributeModifier\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeModifier> getModifiers() const;
    /**
     * @symbol  ?hasModifier\@AttributeInstance\@\@QEBA_NAEBVUUID\@mce\@\@\@Z
     */
    MCAPI bool hasModifier(class mce::UUID const &) const;
    /**
     * @symbol  ?hasModifier\@AttributeInstance\@\@QEBA_NV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI bool hasModifier(class std::shared_ptr<class AttributeModifier>) const;
    /**
     * @symbol  ?hasModifiers\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool hasModifiers() const;
    /**
     * @symbol  ?hasTemporalBuffs\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool hasTemporalBuffs() const;
    /**
     * @symbol  ?inheritFrom\@AttributeInstance\@\@QEAAXAEBV1\@PEAVBaseAttributeMap\@\@\@Z
     */
    MCAPI void inheritFrom(class AttributeInstance const &, class BaseAttributeMap *);
    /**
     * @symbol  ?isValid\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ?notify\@AttributeInstance\@\@QEAAX_J\@Z
     */
    MCAPI void notify(__int64);
    /**
     * @symbol  ??8AttributeInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeInstance const &) const;
    /**
     * @symbol  ?recalculateModifiers\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void recalculateModifiers();
    /**
     * @symbol  ?registerListener\@AttributeInstance\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void registerListener(class AttributeInstance const &);
    /**
     * @symbol  ?removeBuff\@AttributeInstance\@\@QEAAXAEBVAttributeBuff\@\@\@Z
     */
    MCAPI void removeBuff(class AttributeBuff const &);
    /**
     * @symbol  ?removeBuff\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeBuff\@\@\@std\@\@\@Z
     */
    MCAPI void removeBuff(class std::shared_ptr<class AttributeBuff>);
    /**
     * @symbol  ?removeBuffs\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void removeBuffs();
    /**
     * @symbol  ?removeModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void removeModifier(class AttributeModifier const &);
    /**
     * @symbol  ?removeModifier\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void removeModifier(class std::shared_ptr<class AttributeModifier>);
    /**
     * @symbol  ?removeModifier\@AttributeInstance\@\@QEAA_NAEBVUUID\@mce\@\@\@Z
     */
    MCAPI bool removeModifier(class mce::UUID const &);
    /**
     * @symbol  ?removeModifiers\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void removeModifiers();
    /**
     * @symbol  ?resetToDefaultValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToDefaultValue();
    /**
     * @symbol  ?resetToMaxValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToMaxValue();
    /**
     * @symbol  ?resetToMinValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToMinValue();
    /**
     * @symbol  ?serializationSetRange\@AttributeInstance\@\@QEAAXMMM\@Z
     */
    MCAPI void serializationSetRange(float, float, float);
    /**
     * @symbol  ?serializationSetValue\@AttributeInstance\@\@QEAAXMHM\@Z
     */
    MCAPI void serializationSetValue(float, int, float);
    /**
     * @symbol  ?setCurrentValue\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setCurrentValue(float);
    /**
     * @symbol  ?setDefaultValue\@AttributeInstance\@\@QEAAXMH\@Z
     */
    MCAPI void setDefaultValue(float, int);
    /**
     * @symbol  ?setDefaultValueOnly\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setDefaultValueOnly(float);
    /**
     * @symbol  ?setDelegate\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeInstanceDelegate\@\@\@std\@\@\@Z
     */
    MCAPI void setDelegate(class std::shared_ptr<class AttributeInstanceDelegate>);
    /**
     * @symbol  ?setMaxValue\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setMaxValue(float);
    /**
     * @symbol  ?setRange\@AttributeInstance\@\@QEAAXMMM\@Z
     */
    MCAPI void setRange(float, float, float);
    /**
     * @symbol  ?updateModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void updateModifier(class AttributeModifier const &);

//private:
    /**
     * @symbol  ??0AttributeInstance\@\@AEAA\@PEAVBaseAttributeMap\@\@PEBVAttribute\@\@\@Z
     */
    MCAPI AttributeInstance(class BaseAttributeMap *, class Attribute const *);
    /**
     * @symbol  ?_calculateValue\@AttributeInstance\@\@AEAAMAEBVAttributeBuff\@\@\@Z
     */
    MCAPI float _calculateValue(class AttributeBuff const &);
    /**
     * @symbol  ?_calculateValue\@AttributeInstance\@\@AEAAMXZ
     */
    MCAPI float _calculateValue();
    /**
     * @symbol  ?_sanitizeValue\@AttributeInstance\@\@AEAAMM\@Z
     */
    MCAPI float _sanitizeValue(float);

private:

};