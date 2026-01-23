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
    ::ll::UntypedStorage<8, 32> mUnkb94ab8;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceItemMetadata(PersistenceItemMetadata const&);
    PersistenceItemMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Services::PersistenceItemMetadata& operator=(::Editor::Services::PersistenceItemMetadata&&);

    MCNAPI ::Editor::Services::PersistenceItemMetadata& operator=(::Editor::Services::PersistenceItemMetadata const&);

    MCNAPI ~PersistenceItemMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
