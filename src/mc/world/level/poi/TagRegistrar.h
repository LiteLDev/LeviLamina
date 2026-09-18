#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Poi { class TagBuilder; }
// clang-format on

namespace Poi {

struct TagRegistrar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2a4bb8;
    ::ll::UntypedStorage<8, 8>  mUnk64e834;
    ::ll::UntypedStorage<8, 24> mUnk623d99;
    // NOLINTEND

public:
    // prevent constructor by default
    TagRegistrar& operator=(TagRegistrar const&);
    TagRegistrar(TagRegistrar const&);
    TagRegistrar();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalize();

    MCNAPI ::Poi::TagBuilder& tag(::HashedString const& name);

    MCNAPI ~TagRegistrar();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Poi
