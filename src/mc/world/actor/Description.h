#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorDocumentDataParams;
struct DeserializeDataParams;
// clang-format on

struct Description {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const = 0;

    virtual ~Description() = default;

    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Description* parseDescription(::ActorDocumentDataParams actorDocumentDataParams);

    MCAPI ::Description* parseDescription(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $deserializeData(::DeserializeDataParams);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
