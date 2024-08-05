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
    // vIndex: 0
    virtual ~AttributeInstance();

    // vIndex: 1
    virtual void tick();

    MCAPI AttributeInstance(class AttributeInstance const&);

    MCAPI void addBuff(class AttributeBuff const& buff);

    MCAPI void addModifier(class AttributeModifier const& modifier);

    MCAPI void addModifier(std::shared_ptr<class AttributeModifier> modifier);

    MCAPI class Attribute const* getAttribute() const;

    MCAPI float getCurrentValue() const;

    MCAPI float getDefaultValue(int operand) const;

    MCAPI class AttributeInstanceHandle getHandle() const;

    MCAPI float getMaxValue() const;

    MCAPI float getMinValue() const;

    MCAPI class AttributeModifier getModifier(class mce::UUID const& id) const;

    MCAPI std::vector<class AttributeModifier> getModifiers() const;

    MCAPI std::vector<class AttributeModifier> getModifiers(int operation) const;

    MCAPI bool hasModifier(class AttributeModifier const& modifier) const;

    MCAPI bool hasModifier(class mce::UUID const& id) const;

    MCAPI bool hasModifier(std::shared_ptr<class AttributeModifier> modifier) const;

    MCAPI bool hasModifiers() const;

    MCAPI bool hasTemporalBuffs() const;

    MCAPI void inheritFrom(class AttributeInstance const& other, class BaseAttributeMap* attributeMap);

    MCAPI bool isValid() const;

    MCAPI void recalculateModifiers();

    MCAPI void registerListener(class AttributeInstance const& listener);

    MCAPI void removeBuff(class AttributeBuff const& buff);

    MCAPI void removeBuff(std::shared_ptr<class AttributeBuff> buff);

    MCAPI void removeBuffs();

    MCAPI bool removeModifier(class mce::UUID const& id);

    MCAPI void removeModifier(class AttributeModifier const& modifier);

    MCAPI void removeModifier(std::shared_ptr<class AttributeModifier> modifier);

    MCAPI void resetToDefaultValue();

    MCAPI void resetToMaxValue();

    MCAPI void resetToMinValue();

    MCAPI void serializationSetRange(float min, float base, float max);

    MCAPI void serializationSetValue(float currentValue, int operand, float maxValue);

    MCAPI void setCurrentValue(float value);

    MCAPI void setDefaultValue(float defaultValue, int operand);

    MCAPI void setDefaultValueOnly(float newDefaultValue);

    MCAPI void setDelegate(std::shared_ptr<class AttributeInstanceDelegate> delegate);

    MCAPI void setMaxValue(float max);

    MCAPI void setRange(float min, float defaultValue, float max);

    MCAPI void updateModifier(class AttributeModifier const& takeOver);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI float _calculateValue();

    MCAPI float _calculateValue(class AttributeBuff const& buff);

    MCAPI float _sanitizeValue(float value);

    MCAPI void _setDirty();

    // NOLINTEND
};
