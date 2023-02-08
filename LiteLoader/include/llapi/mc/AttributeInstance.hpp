/**
 * @file  AttributeInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   175002867
     * @vftbl  1
     * @symbol  ?tick\@AttributeInstance\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1347392861
     * @symbol  ??0AttributeInstance\@\@QEAA\@XZ
     */
    MCAPI AttributeInstance();
    /**
     * @hash   1399634257
     * @symbol  ??0AttributeInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AttributeInstance(class AttributeInstance const &);
    /**
     * @hash   -259747830
     * @symbol  ?addBuff\@AttributeInstance\@\@QEAAXAEBVAttributeBuff\@\@\@Z
     */
    MCAPI void addBuff(class AttributeBuff const &);
    /**
     * @hash   -2139772262
     * @symbol  ?addModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void addModifier(class AttributeModifier const &);
    /**
     * @hash   -586285979
     * @symbol  ?addModifier\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void addModifier(class std::shared_ptr<class AttributeModifier>);
    /**
     * @hash   -307987311
     * @symbol  ?getAttribute\@AttributeInstance\@\@QEBAPEBVAttribute\@\@XZ
     */
    MCAPI class Attribute const * getAttribute() const;
    /**
     * @hash   1725469504
     * @symbol  ?getBuffs\@AttributeInstance\@\@QEBAAEBV?$vector\@VTemporalAttributeBuff\@\@V?$allocator\@VTemporalAttributeBuff\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class TemporalAttributeBuff> const & getBuffs() const;
    /**
     * @hash   -1271045294
     * @symbol  ?getCurrentValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getCurrentValue() const;
    /**
     * @hash   -1208788585
     * @symbol  ?getDefaultValue\@AttributeInstance\@\@QEBAMH\@Z
     */
    MCAPI float getDefaultValue(int) const;
    /**
     * @hash   730650940
     * @symbol  ?getHandle\@AttributeInstance\@\@QEBA?AVAttributeInstanceHandle\@\@XZ
     */
    MCAPI class AttributeInstanceHandle getHandle() const;
    /**
     * @hash   2031477352
     * @symbol  ?getListeners\@AttributeInstance\@\@QEBAAEBV?$vector\@VAttributeInstanceHandle\@\@V?$allocator\@VAttributeInstanceHandle\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> const & getListeners() const;
    /**
     * @hash   -1396224996
     * @symbol  ?getMaxValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getMaxValue() const;
    /**
     * @hash   -1667823664
     * @symbol  ?getMinValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getMinValue() const;
    /**
     * @hash   -798435163
     * @symbol  ?getModifier\@AttributeInstance\@\@QEBA?AVAttributeModifier\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI class AttributeModifier getModifier(class mce::UUID const &) const;
    /**
     * @hash   348092132
     * @symbol  ?getModifiers\@AttributeInstance\@\@QEBA?AV?$vector\@VAttributeModifier\@\@V?$allocator\@VAttributeModifier\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeModifier> getModifiers() const;
    /**
     * @hash   1535691849
     * @symbol  ?hasModifier\@AttributeInstance\@\@QEBA_NAEBVUUID\@mce\@\@\@Z
     */
    MCAPI bool hasModifier(class mce::UUID const &) const;
    /**
     * @hash   -1362362538
     * @symbol  ?hasModifier\@AttributeInstance\@\@QEBA_NV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI bool hasModifier(class std::shared_ptr<class AttributeModifier>) const;
    /**
     * @hash   445192110
     * @symbol  ?hasModifiers\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool hasModifiers() const;
    /**
     * @hash   -1287013986
     * @symbol  ?hasTemporalBuffs\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool hasTemporalBuffs() const;
    /**
     * @hash   1615562244
     * @symbol  ?inheritFrom\@AttributeInstance\@\@QEAAXAEBV1\@PEAVBaseAttributeMap\@\@\@Z
     */
    MCAPI void inheritFrom(class AttributeInstance const &, class BaseAttributeMap *);
    /**
     * @hash   2032582988
     * @symbol  ?isValid\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   1341152687
     * @symbol  ?notify\@AttributeInstance\@\@QEAAX_J\@Z
     */
    MCAPI void notify(__int64);
    /**
     * @hash   1358436358
     * @symbol  ??8AttributeInstance\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeInstance const &) const;
    /**
     * @hash   -1296723067
     * @symbol  ?recalculateModifiers\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void recalculateModifiers();
    /**
     * @hash   -1338867510
     * @symbol  ?registerListener\@AttributeInstance\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void registerListener(class AttributeInstance const &);
    /**
     * @hash   1376841142
     * @symbol  ?removeBuff\@AttributeInstance\@\@QEAAXAEBVAttributeBuff\@\@\@Z
     */
    MCAPI void removeBuff(class AttributeBuff const &);
    /**
     * @hash   774808419
     * @symbol  ?removeBuff\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeBuff\@\@\@std\@\@\@Z
     */
    MCAPI void removeBuff(class std::shared_ptr<class AttributeBuff>);
    /**
     * @hash   757635197
     * @symbol  ?removeBuffs\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void removeBuffs();
    /**
     * @hash   609946470
     * @symbol  ?removeModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void removeModifier(class AttributeModifier const &);
    /**
     * @hash   2104761203
     * @symbol  ?removeModifier\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void removeModifier(class std::shared_ptr<class AttributeModifier>);
    /**
     * @hash   389537447
     * @symbol  ?removeModifier\@AttributeInstance\@\@QEAA_NAEBVUUID\@mce\@\@\@Z
     */
    MCAPI bool removeModifier(class mce::UUID const &);
    /**
     * @hash   496128629
     * @symbol  ?removeModifiers\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void removeModifiers();
    /**
     * @hash   -1718629319
     * @symbol  ?resetToDefaultValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToDefaultValue();
    /**
     * @hash   1183199315
     * @symbol  ?resetToMaxValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToMaxValue();
    /**
     * @hash   911616023
     * @symbol  ?resetToMinValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToMinValue();
    /**
     * @hash   183546078
     * @symbol  ?serializationSetRange\@AttributeInstance\@\@QEAAXMMM\@Z
     */
    MCAPI void serializationSetRange(float, float, float);
    /**
     * @hash   -2061932
     * @symbol  ?serializationSetValue\@AttributeInstance\@\@QEAAXMHM\@Z
     */
    MCAPI void serializationSetValue(float, int, float);
    /**
     * @hash   1651093968
     * @symbol  ?setCurrentValue\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setCurrentValue(float);
    /**
     * @hash   -1827661741
     * @symbol  ?setDefaultValue\@AttributeInstance\@\@QEAAXMH\@Z
     */
    MCAPI void setDefaultValue(float, int);
    /**
     * @hash   -542500456
     * @symbol  ?setDefaultValueOnly\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setDefaultValueOnly(float);
    /**
     * @hash   -314993483
     * @symbol  ?setDelegate\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeInstanceDelegate\@\@\@std\@\@\@Z
     */
    MCAPI void setDelegate(class std::shared_ptr<class AttributeInstanceDelegate>);
    /**
     * @hash   612934630
     * @symbol  ?setMaxValue\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setMaxValue(float);
    /**
     * @hash   -1143569648
     * @symbol  ?setRange\@AttributeInstance\@\@QEAAXMMM\@Z
     */
    MCAPI void setRange(float, float, float);
    /**
     * @hash   1461435356
     * @symbol  ?updateModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void updateModifier(class AttributeModifier const &);

//private:
    /**
     * @hash   1953865294
     * @symbol  ??0AttributeInstance\@\@AEAA\@PEAVBaseAttributeMap\@\@PEBVAttribute\@\@\@Z
     */
    MCAPI AttributeInstance(class BaseAttributeMap *, class Attribute const *);
    /**
     * @hash   1713331517
     * @symbol  ?_calculateValue\@AttributeInstance\@\@AEAAMAEBVAttributeBuff\@\@\@Z
     */
    MCAPI float _calculateValue(class AttributeBuff const &);
    /**
     * @hash   1810028621
     * @symbol  ?_calculateValue\@AttributeInstance\@\@AEAAMXZ
     */
    MCAPI float _calculateValue();
    /**
     * @hash   -515814266
     * @symbol  ?_sanitizeValue\@AttributeInstance\@\@AEAAMM\@Z
     */
    MCAPI float _sanitizeValue(float);

private:

};