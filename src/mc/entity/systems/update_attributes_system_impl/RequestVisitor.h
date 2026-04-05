#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/AttributeRequestComponent.h"

// auto generated forward declare list
// clang-format off
struct AttributesComponent;
// clang-format on

namespace UpdateAttributesSystemImpl {

struct RequestVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AttributesComponent&> mAttributes;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestVisitor& operator=(RequestVisitor const&);
    RequestVisitor(RequestVisitor const&);
    RequestVisitor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void operator()(::AttributeRequestComponent::AddBuffModifier const& request) const;
    // NOLINTEND
};

} // namespace UpdateAttributesSystemImpl
