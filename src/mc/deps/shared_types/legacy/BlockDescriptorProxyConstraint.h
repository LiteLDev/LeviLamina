#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy::BlockDescriptorSerializer { struct BlockDescriptorProxy; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::Legacy::BlockDescriptorSerializer {

class BlockDescriptorProxyConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxyConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 1
    virtual ~BlockDescriptorProxyConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void validateValue(
        ::SharedTypes::Legacy::BlockDescriptorSerializer::BlockDescriptorProxy const& proxy,
        ::cereal::SerializerContext&                                                  context
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::ConstraintDescription $description() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::BlockDescriptorSerializer
