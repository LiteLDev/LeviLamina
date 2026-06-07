#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PersistenceScope.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

struct PersistenceGroupItemMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4d7e74;
    ::ll::UntypedStorage<4, 4>  mUnk65f780;
    ::ll::UntypedStorage<8, 40> mUnk911841;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupItemMetadata(PersistenceGroupItemMetadata const&);
    PersistenceGroupItemMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistenceGroupItemMetadata(
        ::std::string const&                 groupItemVersionedName,
        ::Editor::Services::PersistenceScope scope
    );

    MCNAPI ::Editor::Services::PersistenceGroupItemMetadata&
    operator=(::Editor::Services::PersistenceGroupItemMetadata const&);

    MCNAPI ~PersistenceGroupItemMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& groupItemVersionedName, ::Editor::Services::PersistenceScope scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Services
