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

#ifdef LL_PLAT_S
    virtual void deserializeData(::DeserializeDataParams deserializeDataParams);
#else // LL_PLAT_C
    virtual void deserializeData(::DeserializeDataParams nonConstDeserializeDataParams);
#endif

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
#ifdef LL_PLAT_S
    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);
#else // LL_PLAT_C
    MCAPI void $deserializeData(::DeserializeDataParams nonConstDeserializeDataParams);
#endif


    // NOLINTEND
};
