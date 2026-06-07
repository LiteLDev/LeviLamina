#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

struct PersistenceGroupDataCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6b98a7;
    ::ll::UntypedStorage<8, 24> mUnka2db32;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupDataCollection& operator=(PersistenceGroupDataCollection const&);
    PersistenceGroupDataCollection(PersistenceGroupDataCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistenceGroupDataCollection();

    MCNAPI ::Editor::Services::PersistenceGroupDataCollection&
    operator=(::Editor::Services::PersistenceGroupDataCollection&&);

    MCNAPI ~PersistenceGroupDataCollection();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
