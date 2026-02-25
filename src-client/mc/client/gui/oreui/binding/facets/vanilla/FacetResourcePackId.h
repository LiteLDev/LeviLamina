#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

namespace OreUI {

struct FacetResourcePackId : public ::NewType<::std::string> {
public:
    // prevent constructor by default
    FacetResourcePackId(FacetResourcePackId const&);
    FacetResourcePackId();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::OreUI::FacetResourcePackId& operator=(::OreUI::FacetResourcePackId const&);

    MCAPI ~FacetResourcePackId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
