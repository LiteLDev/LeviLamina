#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ResolvedTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnk325076;
    ::ll::UntypedStorage<8, 160> mUnk49d5e1;
    ::ll::UntypedStorage<8, 160> mUnkea9075;
    ::ll::UntypedStorage<8, 160> mUnk8edfee;
    ::ll::UntypedStorage<8, 160> mUnk76c7ba;
    ::ll::UntypedStorage<8, 160> mUnkd64858;
    ::ll::UntypedStorage<8, 160> mUnk588f54;
    ::ll::UntypedStorage<8, 160> mUnk33587f;
    ::ll::UntypedStorage<8, 160> mUnkf8870e;
    ::ll::UntypedStorage<8, 160> mUnkf3aa4c;
    ::ll::UntypedStorage<8, 160> mUnk92066b;
    ::ll::UntypedStorage<8, 160> mUnk4ff0a2;
    ::ll::UntypedStorage<8, 160> mUnk1944e5;
    ::ll::UntypedStorage<8, 160> mUnkd89d7c;
    ::ll::UntypedStorage<8, 160> mUnkfc4abc;
    ::ll::UntypedStorage<8, 160> mUnk5556cd;
    ::ll::UntypedStorage<8, 160> mUnk8968c2;
    ::ll::UntypedStorage<8, 160> mUnk9504b5;
    ::ll::UntypedStorage<8, 160> mUnkdf490d;
    ::ll::UntypedStorage<8, 160> mUnk9a2ded;
    ::ll::UntypedStorage<8, 160> mUnk8fc620;
    ::ll::UntypedStorage<8, 160> mUnk981ab5;
    ::ll::UntypedStorage<8, 160> mUnk320ded;
    ::ll::UntypedStorage<8, 160> mUnkee3dff;
    ::ll::UntypedStorage<8, 160> mUnkdae8f8;
    ::ll::UntypedStorage<8, 160> mUnk320f89;
    ::ll::UntypedStorage<8, 160> mUnkc007f3;
    ::ll::UntypedStorage<8, 160> mUnk8b742d;
    ::ll::UntypedStorage<8, 160> mUnkf440e3;
    ::ll::UntypedStorage<8, 160> mUnk7425ba;
    ::ll::UntypedStorage<8, 160> mUnkb706ea;
    ::ll::UntypedStorage<8, 160> mUnk68f8e9;
    ::ll::UntypedStorage<8, 160> mUnk2eb80b;
    ::ll::UntypedStorage<8, 160> mUnkaf41d5;
    ::ll::UntypedStorage<8, 160> mUnke77845;
    ::ll::UntypedStorage<8, 160> mUnk14a79a;
    ::ll::UntypedStorage<8, 160> mUnkb43fed;
    ::ll::UntypedStorage<8, 160> mUnk51b30f;
    ::ll::UntypedStorage<8, 160> mUnkd1b6a8;
    ::ll::UntypedStorage<8, 160> mUnk8134d4;
    ::ll::UntypedStorage<8, 160> mUnk3ce14c;
    ::ll::UntypedStorage<8, 160> mUnkdab225;
    ::ll::UntypedStorage<8, 160> mUnk4ad5e7;
    ::ll::UntypedStorage<8, 160> mUnkeded51;
    ::ll::UntypedStorage<8, 160> mUnka60673;
    ::ll::UntypedStorage<8, 160> mUnkab87ec;
    ::ll::UntypedStorage<8, 160> mUnkeb3a2a;
    ::ll::UntypedStorage<8, 160> mUnkdfd0b5;
    ::ll::UntypedStorage<8, 160> mUnka1e891;
    // NOLINTEND

public:
    // prevent constructor by default
    ResolvedTypes& operator=(ResolvedTypes const&);
    ResolvedTypes(ResolvedTypes const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResolvedTypes();

    MCNAPI bool isHandleType(::entt::meta_type const& type) const;

    MCNAPI bool isNumericType(::entt::meta_type const& type) const;

    MCNAPI ~ResolvedTypes();
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

} // namespace Scripting::QuickJS
