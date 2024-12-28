#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefintionDescription.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct IsSpawnableDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd016c3;
    // NOLINTEND

public:
    // prevent constructor by default
    IsSpawnableDescription& operator=(IsSpawnableDescription const&);
    IsSpawnableDescription(IsSpawnableDescription const&);
    IsSpawnableDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual char const* getJsonName() const /*override*/;

    // vIndex: 0
    virtual ~IsSpawnableDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void parse(::Json::Value const& root);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
