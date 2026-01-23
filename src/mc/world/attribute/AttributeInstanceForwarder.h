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
    MCAPI void addBuff(::AttributeBuff const& buff);

    MCAPI void addModifier(::std::shared_ptr<::AttributeModifier> modifier);

    MCAPI float getCurrentValue() const;

    MCAPI bool hasModifier(::AttributeModifier const& modifier) const;

    MCAPI bool hasModifier(::std::shared_ptr<::AttributeModifier> modifier) const;

    MCAPI bool removeModifier(::mce::UUID const& id);

    MCAPI void setCurrentValue(float value);

    MCAPI void setMaxValue(float max);
    // NOLINTEND
};
