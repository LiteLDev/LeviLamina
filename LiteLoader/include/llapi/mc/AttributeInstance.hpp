/**
 * @file  MC/AttributeInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~AttributeInstance();
    /**
     * @hash   811384755
     * @vftbl  1
     * @symbol ?tick@AttributeInstance@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   1983990013
     * @symbol ??0AttributeInstance@@QEAA@XZ
     */
    MCAPI AttributeInstance();
    /**
     * @hash   930240321
     * @symbol ??0AttributeInstance@@QEAA@AEBV0@@Z
     */
    MCAPI AttributeInstance(class AttributeInstance const &);
    /**
     * @hash   376818570
     * @symbol ?addBuff@AttributeInstance@@QEAAXAEBVAttributeBuff@@@Z
     */
    MCAPI void addBuff(class AttributeBuff const &);
    /**
     * @hash   -1503236614
     * @symbol ?addModifier@AttributeInstance@@QEAAXAEBVAttributeModifier@@@Z
     */
    MCAPI void addModifier(class AttributeModifier const &);
    /**
     * @hash   50249669
     * @symbol ?addModifier@AttributeInstance@@QEAAXV?$shared_ptr@VAttributeModifier@@@std@@@Z
     */
    MCAPI void addModifier(class std::shared_ptr<class AttributeModifier>);
    /**
     * @hash   -411759935
     * @symbol ?getAttribute@AttributeInstance@@QEBAPEBVAttribute@@XZ
     */
    MCAPI class Attribute const * getAttribute() const;
    /**
     * @hash   1592513232
     * @symbol ?getBuffs@AttributeInstance@@QEBAAEBV?$vector@VTemporalAttributeBuff@@V?$allocator@VTemporalAttributeBuff@@@std@@@std@@XZ
     */
    MCAPI std::vector<class TemporalAttributeBuff> const & getBuffs() const;
    /**
     * @hash   -634555774
     * @symbol ?getCurrentValue@AttributeInstance@@QEBAMXZ
     */
    MCAPI float getCurrentValue() const;
    /**
     * @hash   -572299065
     * @symbol ?getDefaultValue@AttributeInstance@@QEBAMH@Z
     */
    MCAPI float getDefaultValue(int) const;
    /**
     * @hash   1367140460
     * @symbol ?getHandle@AttributeInstance@@QEBA?AVAttributeInstanceHandle@@XZ
     */
    MCAPI class AttributeInstanceHandle getHandle() const;
    /**
     * @hash   -1411367400
     * @symbol ?getListeners@AttributeInstance@@QEBAAEBV?$vector@VAttributeInstanceHandle@@V?$allocator@VAttributeInstanceHandle@@@std@@@std@@XZ
     */
    MCAPI std::vector<class AttributeInstanceHandle> const & getListeners() const;
    /**
     * @hash   -759735476
     * @symbol ?getMaxValue@AttributeInstance@@QEBAMXZ
     */
    MCAPI float getMaxValue() const;
    /**
     * @hash   -1031334144
     * @symbol ?getMinValue@AttributeInstance@@QEBAMXZ
     */
    MCAPI float getMinValue() const;
    /**
     * @hash   -161945643
     * @symbol ?getModifier@AttributeInstance@@QEBA?AVAttributeModifier@@AEBVUUID@mce@@@Z
     */
    MCAPI class AttributeModifier getModifier(class mce::UUID const &) const;
    /**
     * @hash   984581652
     * @symbol ?getModifiers@AttributeInstance@@QEBA?AV?$vector@VAttributeModifier@@V?$allocator@VAttributeModifier@@@std@@@std@@XZ
     */
    MCAPI std::vector<class AttributeModifier> getModifiers() const;
    /**
     * @hash   -2122785927
     * @symbol ?hasModifier@AttributeInstance@@QEBA_NAEBVUUID@mce@@@Z
     */
    MCAPI bool hasModifier(class mce::UUID const &) const;
    /**
     * @hash   -725873018
     * @symbol ?hasModifier@AttributeInstance@@QEBA_NV?$shared_ptr@VAttributeModifier@@@std@@@Z
     */
    MCAPI bool hasModifier(class std::shared_ptr<class AttributeModifier>) const;
    /**
     * @hash   1081666254
     * @symbol ?hasModifiers@AttributeInstance@@QEBA_NXZ
     */
    MCAPI bool hasModifiers() const;
    /**
     * @hash   -650539842
     * @symbol ?hasTemporalBuffs@AttributeInstance@@QEBA_NXZ
     */
    MCAPI bool hasTemporalBuffs() const;
    /**
     * @hash   -1625910164
     * @symbol ?isValid@AttributeInstance@@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @hash   1977626831
     * @symbol ?notify@AttributeInstance@@QEAAX_J@Z
     */
    MCAPI void notify(__int64);
    /**
     * @hash   1995018134
     * @symbol ??8AttributeInstance@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class AttributeInstance const &) const;
    /**
     * @hash   -660248923
     * @symbol ?recalculateModifiers@AttributeInstance@@QEAAXXZ
     */
    MCAPI void recalculateModifiers();
    /**
     * @hash   -702393366
     * @symbol ?registerListener@AttributeInstance@@QEAAXAEBV1@@Z
     */
    MCAPI void registerListener(class AttributeInstance const &);
    /**
     * @hash   2013315286
     * @symbol ?removeBuff@AttributeInstance@@QEAAXAEBVAttributeBuff@@@Z
     */
    MCAPI void removeBuff(class AttributeBuff const &);
    /**
     * @hash   1411267187
     * @symbol ?removeBuff@AttributeInstance@@QEAAXV?$shared_ptr@VAttributeBuff@@@std@@@Z
     */
    MCAPI void removeBuff(class std::shared_ptr<class AttributeBuff>);
    /**
     * @hash   1394078589
     * @symbol ?removeBuffs@AttributeInstance@@QEAAXXZ
     */
    MCAPI void removeBuffs();
    /**
     * @hash   1246389862
     * @symbol ?removeModifier@AttributeInstance@@QEAAXAEBVAttributeModifier@@@Z
     */
    MCAPI void removeModifier(class AttributeModifier const &);
    /**
     * @hash   -1553762701
     * @symbol ?removeModifier@AttributeInstance@@QEAAXV?$shared_ptr@VAttributeModifier@@@std@@@Z
     */
    MCAPI void removeModifier(class std::shared_ptr<class AttributeModifier>);
    /**
     * @hash   1025965463
     * @symbol ?removeModifier@AttributeInstance@@QEAA_NAEBVUUID@mce@@@Z
     */
    MCAPI bool removeModifier(class mce::UUID const &);
    /**
     * @hash   1132541269
     * @symbol ?removeModifiers@AttributeInstance@@QEAAXXZ
     */
    MCAPI void removeModifiers();
    /**
     * @hash   -1082216679
     * @symbol ?resetToDefaultValue@AttributeInstance@@QEAAXXZ
     */
    MCAPI void resetToDefaultValue();
    /**
     * @hash   1819611955
     * @symbol ?resetToMaxValue@AttributeInstance@@QEAAXXZ
     */
    MCAPI void resetToMaxValue();
    /**
     * @hash   1548028663
     * @symbol ?resetToMinValue@AttributeInstance@@QEAAXXZ
     */
    MCAPI void resetToMinValue();
    /**
     * @hash   819958718
     * @symbol ?serializationSetRange@AttributeInstance@@QEAAXMMM@Z
     */
    MCAPI void serializationSetRange(float, float, float);
    /**
     * @hash   634350708
     * @symbol ?serializationSetValue@AttributeInstance@@QEAAXMHM@Z
     */
    MCAPI void serializationSetValue(float, int, float);
    /**
     * @hash   -2007460688
     * @symbol ?setCurrentValue@AttributeInstance@@QEAAXM@Z
     */
    MCAPI void setCurrentValue(float);
    /**
     * @hash   -1191249101
     * @symbol ?setDefaultValue@AttributeInstance@@QEAAXMH@Z
     */
    MCAPI void setDefaultValue(float, int);
    /**
     * @hash   93912184
     * @symbol ?setDefaultValueOnly@AttributeInstance@@QEAAXM@Z
     */
    MCAPI void setDefaultValueOnly(float);
    /**
     * @hash   321419157
     * @symbol ?setDelegate@AttributeInstance@@QEAAXV?$shared_ptr@VAttributeInstanceDelegate@@@std@@@Z
     */
    MCAPI void setDelegate(class std::shared_ptr<class AttributeInstanceDelegate>);
    /**
     * @hash   1249316518
     * @symbol ?setMaxValue@AttributeInstance@@QEAAXM@Z
     */
    MCAPI void setMaxValue(float);
    /**
     * @hash   -507187760
     * @symbol ?setRange@AttributeInstance@@QEAAXMMM@Z
     */
    MCAPI void setRange(float, float, float);
    /**
     * @hash   2097771116
     * @symbol ?updateModifier@AttributeInstance@@QEAAXAEBVAttributeModifier@@@Z
     */
    MCAPI void updateModifier(class AttributeModifier const &);

//private:
    /**
     * @hash   -1704504850
     * @symbol ??0AttributeInstance@@AEAA@PEAVBaseAttributeMap@@PEBVAttribute@@@Z
     */
    MCAPI AttributeInstance(class BaseAttributeMap *, class Attribute const *);
    /**
     * @hash   -1945054003
     * @symbol ?_calculateValue@AttributeInstance@@AEAAMAEBVAttributeBuff@@@Z
     */
    MCAPI float _calculateValue(class AttributeBuff const &);
    /**
     * @hash   -1848372275
     * @symbol ?_calculateValue@AttributeInstance@@AEAAMXZ
     */
    MCAPI float _calculateValue();
    /**
     * @hash   120752134
     * @symbol ?_sanitizeValue@AttributeInstance@@AEAAMM@Z
     */
    MCAPI float _sanitizeValue(float);

private:

};