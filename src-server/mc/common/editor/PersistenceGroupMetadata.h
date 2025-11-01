#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PersistenceScope.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Services {

struct PersistenceGroupMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1a25db;
    ::ll::UntypedStorage<8, 32> mUnka1c78e;
    ::ll::UntypedStorage<4, 4> mUnkddf34d;
    ::ll::UntypedStorage<1, 1> mUnk59537f;
    ::ll::UntypedStorage<8, 24> mUnk3f5927;
    ::ll::UntypedStorage<8, 32> mUnkb00e71;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupMetadata(PersistenceGroupMetadata const&);
    PersistenceGroupMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistenceGroupMetadata(::std::string const& groupNamespace, ::std::string const& name, ::Editor::Services::PersistenceScope scope, ::std::vector<int> versions);

    MCNAPI ::Editor::Services::PersistenceGroupMetadata& operator=(::Editor::Services::PersistenceGroupMetadata&&);

    MCNAPI ::Editor::Services::PersistenceGroupMetadata& operator=(::Editor::Services::PersistenceGroupMetadata const&);

    MCNAPI ~PersistenceGroupMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& groupNamespace, ::std::string const& name, ::Editor::Services::PersistenceScope scope, ::std::vector<int> versions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
