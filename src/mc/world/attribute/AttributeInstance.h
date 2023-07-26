#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class AttributeInstance {

public:
    // prevent constructor by default
    AttributeInstance& operator=(AttributeInstance const&) = delete;
    AttributeInstance()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@AttributeInstance\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTEINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AttributeInstance(); // NOLINT
#endif
    /**
     * @symbol ??0AttributeInstance\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AttributeInstance(class AttributeInstance const&); // NOLINT
    /**
     * @symbol ?addBuff\@AttributeInstance\@\@QEAAXAEBVAttributeBuff\@\@\@Z
     */
    MCAPI void addBuff(class AttributeBuff const&); // NOLINT
    /**
     * @symbol ?addModifier\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void addModifier(class std::shared_ptr<class AttributeModifier>); // NOLINT
    /**
     * @symbol ?addModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void addModifier(class AttributeModifier const&); // NOLINT
    /**
     * @symbol ?getAttribute\@AttributeInstance\@\@QEBAPEBVAttribute\@\@XZ
     */
    MCAPI class Attribute const* getAttribute() const; // NOLINT
    /**
     * @symbol
     * ?getBuffs\@AttributeInstance\@\@QEBAAEBV?$vector\@VTemporalAttributeBuff\@\@V?$allocator\@VTemporalAttributeBuff\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class TemporalAttributeBuff> const& getBuffs() const; // NOLINT
    /**
     * @symbol ?getCurrentValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getCurrentValue() const; // NOLINT
    /**
     * @symbol ?getDefaultValue\@AttributeInstance\@\@QEBAMH\@Z
     */
    MCAPI float getDefaultValue(int) const; // NOLINT
    /**
     * @symbol ?getHandle\@AttributeInstance\@\@QEBA?AVAttributeInstanceHandle\@\@XZ
     */
    MCAPI class AttributeInstanceHandle getHandle() const; // NOLINT
    /**
     * @symbol ?getMaxValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getMaxValue() const; // NOLINT
    /**
     * @symbol ?getMinValue\@AttributeInstance\@\@QEBAMXZ
     */
    MCAPI float getMinValue() const; // NOLINT
    /**
     * @symbol ?getModifier\@AttributeInstance\@\@QEBA?AVAttributeModifier\@\@AEBVUUID\@mce\@\@\@Z
     */
    MCAPI class AttributeModifier getModifier(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol
     * ?getModifiers\@AttributeInstance\@\@QEBA?AV?$vector\@VAttributeModifier\@\@V?$allocator\@VAttributeModifier\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AttributeModifier> getModifiers() const; // NOLINT
    /**
     * @symbol
     * ?getModifiers\@AttributeInstance\@\@QEBA?AV?$vector\@VAttributeModifier\@\@V?$allocator\@VAttributeModifier\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI std::vector<class AttributeModifier> getModifiers(int) const; // NOLINT
    /**
     * @symbol ?hasModifier\@AttributeInstance\@\@QEBA_NAEBVAttributeModifier\@\@\@Z
     */
    MCAPI bool hasModifier(class AttributeModifier const&) const; // NOLINT
    /**
     * @symbol ?hasModifier\@AttributeInstance\@\@QEBA_NAEBVUUID\@mce\@\@\@Z
     */
    MCAPI bool hasModifier(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol ?hasModifier\@AttributeInstance\@\@QEBA_NV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI bool hasModifier(class std::shared_ptr<class AttributeModifier>) const; // NOLINT
    /**
     * @symbol ?hasModifiers\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool hasModifiers() const; // NOLINT
    /**
     * @symbol ?hasTemporalBuffs\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool hasTemporalBuffs() const; // NOLINT
    /**
     * @symbol ?isValid\@AttributeInstance\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ?recalculateModifiers\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void recalculateModifiers(); // NOLINT
    /**
     * @symbol ?registerListener\@AttributeInstance\@\@QEAAXAEBV1\@\@Z
     */
    MCAPI void registerListener(class AttributeInstance const&); // NOLINT
    /**
     * @symbol ?removeBuff\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeBuff\@\@\@std\@\@\@Z
     */
    MCAPI void removeBuff(class std::shared_ptr<class AttributeBuff>); // NOLINT
    /**
     * @symbol ?removeBuff\@AttributeInstance\@\@QEAAXAEBVAttributeBuff\@\@\@Z
     */
    MCAPI void removeBuff(class AttributeBuff const&); // NOLINT
    /**
     * @symbol ?removeBuffs\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void removeBuffs(); // NOLINT
    /**
     * @symbol ?removeModifier\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeModifier\@\@\@std\@\@\@Z
     */
    MCAPI void removeModifier(class std::shared_ptr<class AttributeModifier>); // NOLINT
    /**
     * @symbol ?removeModifier\@AttributeInstance\@\@QEAA_NAEBVUUID\@mce\@\@\@Z
     */
    MCAPI bool removeModifier(class mce::UUID const&); // NOLINT
    /**
     * @symbol ?removeModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void removeModifier(class AttributeModifier const&); // NOLINT
    /**
     * @symbol ?removeModifiers\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void removeModifiers(); // NOLINT
    /**
     * @symbol ?resetToDefaultValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToDefaultValue(); // NOLINT
    /**
     * @symbol ?resetToMaxValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToMaxValue(); // NOLINT
    /**
     * @symbol ?resetToMinValue\@AttributeInstance\@\@QEAAXXZ
     */
    MCAPI void resetToMinValue(); // NOLINT
    /**
     * @symbol ?serializationSetRange\@AttributeInstance\@\@QEAAXMMM\@Z
     */
    MCAPI void serializationSetRange(float, float, float); // NOLINT
    /**
     * @symbol ?serializationSetValue\@AttributeInstance\@\@QEAAXMHM\@Z
     */
    MCAPI void serializationSetValue(float, int, float); // NOLINT
    /**
     * @symbol ?setCurrentValue\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setCurrentValue(float); // NOLINT
    /**
     * @symbol ?setDefaultValue\@AttributeInstance\@\@QEAAXMH\@Z
     */
    MCAPI void setDefaultValue(float, int); // NOLINT
    /**
     * @symbol ?setDefaultValueOnly\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setDefaultValueOnly(float); // NOLINT
    /**
     * @symbol ?setDelegate\@AttributeInstance\@\@QEAAXV?$shared_ptr\@VAttributeInstanceDelegate\@\@\@std\@\@\@Z
     */
    MCAPI void setDelegate(class std::shared_ptr<class AttributeInstanceDelegate>); // NOLINT
    /**
     * @symbol ?setMaxValue\@AttributeInstance\@\@QEAAXM\@Z
     */
    MCAPI void setMaxValue(float); // NOLINT
    /**
     * @symbol ?setRange\@AttributeInstance\@\@QEAAXMMM\@Z
     */
    MCAPI void setRange(float, float, float); // NOLINT
    /**
     * @symbol ?updateModifier\@AttributeInstance\@\@QEAAXAEBVAttributeModifier\@\@\@Z
     */
    MCAPI void updateModifier(class AttributeModifier const&); // NOLINT

    // private:
    /**
     * @symbol ?_calculateValue\@AttributeInstance\@\@AEAAMAEBVAttributeBuff\@\@\@Z
     */
    MCAPI float _calculateValue(class AttributeBuff const&); // NOLINT
    /**
     * @symbol ?_calculateValue\@AttributeInstance\@\@AEAAMXZ
     */
    MCAPI float _calculateValue(); // NOLINT
    /**
     * @symbol ?_sanitizeValue\@AttributeInstance\@\@AEAAMM\@Z
     */
    MCAPI float _sanitizeValue(float); // NOLINT
    /**
     * @symbol ?_setDirty\@AttributeInstance\@\@AEAAXXZ
     */
    MCAPI void _setDirty(); // NOLINT

private:
};
