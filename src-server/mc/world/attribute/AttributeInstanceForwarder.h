#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/AttributeModificationContext.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class AttributeModifier;
namespace mce { class UUID; }
// clang-format on

struct AttributeInstanceForwarder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributeInstance*>           mInstance;
    ::ll::TypedStorage<8, 8, ::AttributeModificationContext> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addModifier(::std::shared_ptr<::AttributeModifier> modifier);

    MCNAPI bool hasModifier(::AttributeModifier const& modifier) const;

    MCNAPI bool hasModifier(::std::shared_ptr<::AttributeModifier> modifier) const;

    MCNAPI bool removeModifier(::mce::UUID const& id);
    // NOLINTEND
};
