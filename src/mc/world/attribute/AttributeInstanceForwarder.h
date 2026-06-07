#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeInstanceRef.h"
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
class AttributeBuff;
class AttributeModifier;
namespace mce { class UUID; }
// clang-format on

struct AttributeInstanceForwarder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstanceRef>         mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<float> addBuff(::AttributeBuff const& buff);

    MCAPI void addModifier(::AttributeModifier const& modifier);

    MCAPI void addModifier(::std::shared_ptr<::AttributeModifier> modifier);

    MCAPI float getCurrentValue() const;

    MCAPI float getDefaultValue(int operand) const;

    MCAPI bool hasModifier(::mce::UUID const& id) const;

    MCAPI bool hasModifier(::AttributeModifier const& modifier) const;

    MCAPI bool hasModifier(::std::shared_ptr<::AttributeModifier> modifier) const;

    MCAPI void removeBuffs();

    MCAPI bool removeModifier(::mce::UUID const& id);

    MCAPI void removeModifier(::AttributeModifier const& modifier);

    MCAPI void removeModifier(::std::shared_ptr<::AttributeModifier> modifier);

    MCAPI void resetToDefaultValue();

    MCAPI void resetToMaxValue();

    MCAPI void resetToMinValue();

    MCAPI void serializationSetValue(float currentValue, int operand, float maxValue);

    MCAPI void setCurrentValue(float value);

    MCAPI void setDefaultValue(float defaultValue, int operand);

    MCAPI void setMaxValue(float max);

    MCAPI void setRange(float min, float base, float max);
    // NOLINTEND
};
