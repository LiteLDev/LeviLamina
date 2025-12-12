#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/Projection.h"

// auto generated forward declare list
// clang-format off
class StructurePoolElement;
struct StructureTemplateRegistrationContext;
// clang-format on

struct WeightedStructureTemplateRegistration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>>
                                  mElementFactory;
    ::ll::TypedStorage<4, 4, int> mWeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WeightedStructureTemplateRegistration();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
