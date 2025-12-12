#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct DanceDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk92500a;
    // NOLINTEND

public:
    // prevent constructor by default
    DanceDescription& operator=(DanceDescription const&);
    DanceDescription(DanceDescription const&);
    DanceDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual void deserializeData(::DeserializeDataParams) /*override*/;

    virtual ~DanceDescription() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
