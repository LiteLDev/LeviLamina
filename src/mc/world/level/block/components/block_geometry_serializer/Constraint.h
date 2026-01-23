#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace BlockGeometrySerializer { struct Proxy; }
namespace cereal { class SerializerContext; }
// clang-format on

namespace BlockGeometrySerializer {

struct Constraint : public ::cereal::ConstraintHandle<::BlockGeometrySerializer::Constraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Constraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(::BlockGeometrySerializer::Proxy const& proxy, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockGeometrySerializer
