#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/CerealUpgraderBase.h"

namespace Puv::internal {

struct AlterationScopeHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6db354;
    ::ll::UntypedStorage<8, 8> mUnk3d4368;
    // NOLINTEND

public:
    // prevent constructor by default
    AlterationScopeHandler& operator=(AlterationScopeHandler const&);
    AlterationScopeHandler(AlterationScopeHandler const&);
    AlterationScopeHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AlterationScopeHandler(::Puv::internal::CerealUpgraderBase::AlterationNode const*& node, uint id);

    MCNAPI ~AlterationScopeHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Puv::internal::CerealUpgraderBase::AlterationNode const*& node, uint id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
