#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

struct PersistenceGroupManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbe7187;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupManifest& operator=(PersistenceGroupManifest const&);
    PersistenceGroupManifest(PersistenceGroupManifest const&);
    PersistenceGroupManifest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PersistenceGroupManifest();
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
