#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
struct ClientBlockData;
// clang-format on

class IClientBlockData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientBlockData() = default;

    virtual void visit(::brstd::function_ref<void(::ClientBlockData const&)>) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
