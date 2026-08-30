#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct AlterationNode; }
// clang-format on

namespace Puv::internal {

struct AlterationScopeHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd5b277;
    ::ll::UntypedStorage<8, 8> mUnk48a1e1;
    // NOLINTEND

public:
    // prevent constructor by default
    AlterationScopeHandler& operator=(AlterationScopeHandler const&);
    AlterationScopeHandler(AlterationScopeHandler const&);
    AlterationScopeHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AlterationScopeHandler(::Puv::internal::AlterationNode const*& node, uint id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Puv::internal::AlterationNode const*& node, uint id);
    // NOLINTEND
};

} // namespace Puv::internal
