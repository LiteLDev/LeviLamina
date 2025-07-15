#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateInfo;
// clang-format on

class WorldTemplateCollectionView : public ::brstd::move_only_function<::std::optional<::WorldTemplateInfo>()> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~WorldTemplateCollectionView();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
