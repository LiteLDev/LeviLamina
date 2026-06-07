#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace Util::Url {

struct Components {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk765e7d;
    ::ll::UntypedStorage<8, 32> mUnkd60fb8;
    ::ll::UntypedStorage<8, 32> mUnke6f14c;
    ::ll::UntypedStorage<8, 32> mUnk27a341;
    ::ll::UntypedStorage<8, 32> mUnk93f566;
    // NOLINTEND

public:
    // prevent constructor by default
    Components& operator=(Components const&);
    Components(Components const&);
    Components();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit Components(::Util::Url::ComponentsView const& other);
#endif

    MCNAPI Components(
        ::std::string const& scheme,
        ::std::string const& authority,
        ::std::string const& path,
        ::std::string const& query,
        ::std::string const& fragment
    );

    MCNAPI ~Components();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Util::Url::ComponentsView const& other);
#endif

    MCNAPI void* $ctor(
        ::std::string const& scheme,
        ::std::string const& authority,
        ::std::string const& path,
        ::std::string const& query,
        ::std::string const& fragment
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Util::Url
