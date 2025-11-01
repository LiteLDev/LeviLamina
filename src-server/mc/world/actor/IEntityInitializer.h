#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

class IEntityInitializer {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IEntityInitializer() = default;

    // vIndex: 1
    virtual void entityInitializer(::std::unique_ptr<::Actor>, ::EntityContext&, ::EntityContext const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
