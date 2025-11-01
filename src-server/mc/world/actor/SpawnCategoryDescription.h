#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefintionDescription.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct SpawnCategoryDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdaabf7;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnCategoryDescription& operator=(SpawnCategoryDescription const&);
    SpawnCategoryDescription(SpawnCategoryDescription const&);
    SpawnCategoryDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 0
    virtual ~SpawnCategoryDescription() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void parse(::Json::Value const& root);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
