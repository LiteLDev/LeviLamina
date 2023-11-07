#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class AttributeInstance {
public:
    // prevent constructor by default
    AttributeInstance& operator=(AttributeInstance const&);
    AttributeInstance();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AttributeInstance@@UEAA@XZ
    virtual ~AttributeInstance();

    // vIndex: 1, symbol: ?tick@AttributeInstance@@UEAAXXZ
    virtual void tick();

    // symbol: ??0AttributeInstance@@QEAA@AEBV0@@Z
    MCAPI AttributeInstance(class AttributeInstance const&);

    // symbol: ?addBuff@AttributeInstance@@QEAAXAEBVAttributeBuff@@@Z
    MCAPI void addBuff(class AttributeBuff const&);

    // symbol: ?addModifier@AttributeInstance@@QEAAXAEBVAttributeModifier@@@Z
    MCAPI void addModifier(class AttributeModifier const&);

    // symbol: ?addModifier@AttributeInstance@@QEAAXV?$shared_ptr@VAttributeModifier@@@std@@@Z
    MCAPI void addModifier(std::shared_ptr<class AttributeModifier>);

    // symbol: ?getAttribute@AttributeInstance@@QEBAPEBVAttribute@@XZ
    MCAPI class Attribute const* getAttribute() const;

    // symbol: ?getCurrentValue@AttributeInstance@@QEBAMXZ
    MCAPI float getCurrentValue() const;

    // symbol: ?getDefaultValue@AttributeInstance@@QEBAMH@Z
    MCAPI float getDefaultValue(int) const;

    // symbol: ?getHandle@AttributeInstance@@QEBA?AVAttributeInstanceHandle@@XZ
    MCAPI class AttributeInstanceHandle getHandle() const;

    // symbol: ?getMaxValue@AttributeInstance@@QEBAMXZ
    MCAPI float getMaxValue() const;

    // symbol: ?getMinValue@AttributeInstance@@QEBAMXZ
    MCAPI float getMinValue() const;

    // symbol: ?getModifier@AttributeInstance@@QEBA?AVAttributeModifier@@AEBVUUID@mce@@@Z
    MCAPI class AttributeModifier getModifier(class mce::UUID const&) const;

    // symbol:
    // ?getModifiers@AttributeInstance@@QEBA?AV?$vector@VAttributeModifier@@V?$allocator@VAttributeModifier@@@std@@@std@@XZ
    MCAPI std::vector<class AttributeModifier> getModifiers() const;

    // symbol:
    // ?getModifiers@AttributeInstance@@QEBA?AV?$vector@VAttributeModifier@@V?$allocator@VAttributeModifier@@@std@@@std@@H@Z
    MCAPI std::vector<class AttributeModifier> getModifiers(int) const;

    // symbol: ?hasModifier@AttributeInstance@@QEBA_NAEBVAttributeModifier@@@Z
    MCAPI bool hasModifier(class AttributeModifier const&) const;

    // symbol: ?hasModifier@AttributeInstance@@QEBA_NAEBVUUID@mce@@@Z
    MCAPI bool hasModifier(class mce::UUID const&) const;

    // symbol: ?hasModifier@AttributeInstance@@QEBA_NV?$shared_ptr@VAttributeModifier@@@std@@@Z
    MCAPI bool hasModifier(std::shared_ptr<class AttributeModifier>) const;

    // symbol: ?hasModifiers@AttributeInstance@@QEBA_NXZ
    MCAPI bool hasModifiers() const;

    // symbol: ?hasTemporalBuffs@AttributeInstance@@QEBA_NXZ
    MCAPI bool hasTemporalBuffs() const;

    // symbol: ?inheritFrom@AttributeInstance@@QEAAXAEBV1@PEAVBaseAttributeMap@@@Z
    MCAPI void inheritFrom(class AttributeInstance const&, class BaseAttributeMap*);

    // symbol: ?isValid@AttributeInstance@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?recalculateModifiers@AttributeInstance@@QEAAXXZ
    MCAPI void recalculateModifiers();

    // symbol: ?registerListener@AttributeInstance@@QEAAXAEBV1@@Z
    MCAPI void registerListener(class AttributeInstance const&);

    // symbol: ?removeBuff@AttributeInstance@@QEAAXAEBVAttributeBuff@@@Z
    MCAPI void removeBuff(class AttributeBuff const&);

    // symbol: ?removeBuff@AttributeInstance@@QEAAXV?$shared_ptr@VAttributeBuff@@@std@@@Z
    MCAPI void removeBuff(std::shared_ptr<class AttributeBuff>);

    // symbol: ?removeBuffs@AttributeInstance@@QEAAXXZ
    MCAPI void removeBuffs();

    // symbol: ?removeModifier@AttributeInstance@@QEAA_NAEBVUUID@mce@@@Z
    MCAPI bool removeModifier(class mce::UUID const&);

    // symbol: ?removeModifier@AttributeInstance@@QEAAXAEBVAttributeModifier@@@Z
    MCAPI void removeModifier(class AttributeModifier const&);

    // symbol: ?removeModifier@AttributeInstance@@QEAAXV?$shared_ptr@VAttributeModifier@@@std@@@Z
    MCAPI void removeModifier(std::shared_ptr<class AttributeModifier>);

    // symbol: ?removeModifiers@AttributeInstance@@QEAAXXZ
    MCAPI void removeModifiers();

    // symbol: ?resetToDefaultValue@AttributeInstance@@QEAAXXZ
    MCAPI void resetToDefaultValue();

    // symbol: ?resetToMaxValue@AttributeInstance@@QEAAXXZ
    MCAPI void resetToMaxValue();

    // symbol: ?resetToMinValue@AttributeInstance@@QEAAXXZ
    MCAPI void resetToMinValue();

    // symbol: ?serializationSetRange@AttributeInstance@@QEAAXMMM@Z
    MCAPI void serializationSetRange(float, float, float);

    // symbol: ?serializationSetValue@AttributeInstance@@QEAAXMHM@Z
    MCAPI void serializationSetValue(float, int, float);

    // symbol: ?setCurrentValue@AttributeInstance@@QEAAXM@Z
    MCAPI void setCurrentValue(float);

    // symbol: ?setDefaultValue@AttributeInstance@@QEAAXMH@Z
    MCAPI void setDefaultValue(float, int);

    // symbol: ?setDefaultValueOnly@AttributeInstance@@QEAAXM@Z
    MCAPI void setDefaultValueOnly(float);

    // symbol: ?setDelegate@AttributeInstance@@QEAAXV?$shared_ptr@VAttributeInstanceDelegate@@@std@@@Z
    MCAPI void setDelegate(std::shared_ptr<class AttributeInstanceDelegate>);

    // symbol: ?setMaxValue@AttributeInstance@@QEAAXM@Z
    MCAPI void setMaxValue(float);

    // symbol: ?setRange@AttributeInstance@@QEAAXMMM@Z
    MCAPI void setRange(float, float, float);

    // symbol: ?updateModifier@AttributeInstance@@QEAAXAEBVAttributeModifier@@@Z
    MCAPI void updateModifier(class AttributeModifier const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateValue@AttributeInstance@@AEAAMXZ
    MCAPI float _calculateValue();

    // symbol: ?_calculateValue@AttributeInstance@@AEAAMAEBVAttributeBuff@@@Z
    MCAPI float _calculateValue(class AttributeBuff const&);

    // symbol: ?_sanitizeValue@AttributeInstance@@AEAAMM@Z
    MCAPI float _sanitizeValue(float);

    // symbol: ?_setDirty@AttributeInstance@@AEAAXXZ
    MCAPI void _setDirty();

    // NOLINTEND
};
