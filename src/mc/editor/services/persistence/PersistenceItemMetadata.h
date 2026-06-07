#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

struct PersistenceItemMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4e37b5;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceItemMetadata& operator=(PersistenceItemMetadata const&);
    PersistenceItemMetadata(PersistenceItemMetadata const&);
    PersistenceItemMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PersistenceItemMetadata(::std::string const& jsonValue);

    MCNAPI ~PersistenceItemMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& jsonValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
