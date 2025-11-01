#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/AttributeRequestComponent.h"

namespace UpdateAttributesSystemImpl {

struct RequestVisitor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf37e17;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestVisitor& operator=(RequestVisitor const&);
    RequestVisitor(RequestVisitor const&);
    RequestVisitor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void operator()(::AttributeRequestComponent::AddBuffModifier const& request) const;
    // NOLINTEND

};

}
