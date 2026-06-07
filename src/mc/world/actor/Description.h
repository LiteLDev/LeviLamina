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

    virtual void deserializeData(::DeserializeDataParams nonConstDeserializeDataParams);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool parseDescription(::ActorDocumentDataParams actorDocumentDataParams);

    MCAPI bool parseDescription(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $deserializeData(::DeserializeDataParams nonConstDeserializeDataParams);


    // NOLINTEND
};
