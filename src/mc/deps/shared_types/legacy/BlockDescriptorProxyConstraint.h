#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy::BlockDescriptorSerializer { struct BlockDescriptorProxy; }
namespace cereal { class SerializerContext; }
// clang-format on

namespace SharedTypes::Legacy::BlockDescriptorSerializer {

class BlockDescriptorProxyConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxyConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockDescriptorProxyConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(
        ::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxy const& proxy,
        ::cereal::SerializerContext&                                                  context
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::BlockDescriptorSerializer
