#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

struct ResolvedTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk325076;
    ::ll::UntypedStorage<8, 144> mUnk49d5e1;
    ::ll::UntypedStorage<8, 144> mUnkea9075;
    ::ll::UntypedStorage<8, 144> mUnk8edfee;
    ::ll::UntypedStorage<8, 144> mUnk76c7ba;
    ::ll::UntypedStorage<8, 144> mUnkd64858;
    ::ll::UntypedStorage<8, 144> mUnk588f54;
    ::ll::UntypedStorage<8, 144> mUnk33587f;
    ::ll::UntypedStorage<8, 144> mUnkf8870e;
    ::ll::UntypedStorage<8, 144> mUnkf3aa4c;
    ::ll::UntypedStorage<8, 144> mUnk92066b;
    ::ll::UntypedStorage<8, 144> mUnk4ff0a2;
    ::ll::UntypedStorage<8, 144> mUnk1944e5;
    ::ll::UntypedStorage<8, 144> mUnkd89d7c;
    ::ll::UntypedStorage<8, 144> mUnkfc4abc;
    ::ll::UntypedStorage<8, 144> mUnk5556cd;
    ::ll::UntypedStorage<8, 144> mUnk8968c2;
    ::ll::UntypedStorage<8, 144> mUnk9504b5;
    ::ll::UntypedStorage<8, 144> mUnkdf490d;
    ::ll::UntypedStorage<8, 144> mUnk9a2ded;
    ::ll::UntypedStorage<8, 144> mUnk8fc620;
    ::ll::UntypedStorage<8, 144> mUnk981ab5;
    ::ll::UntypedStorage<8, 144> mUnk320ded;
    ::ll::UntypedStorage<8, 144> mUnkee3dff;
    ::ll::UntypedStorage<8, 144> mUnkdae8f8;
    ::ll::UntypedStorage<8, 144> mUnk320f89;
    ::ll::UntypedStorage<8, 144> mUnkc007f3;
    ::ll::UntypedStorage<8, 144> mUnk8b742d;
    ::ll::UntypedStorage<8, 144> mUnkf440e3;
    ::ll::UntypedStorage<8, 144> mUnk7425ba;
    ::ll::UntypedStorage<8, 144> mUnkb706ea;
    ::ll::UntypedStorage<8, 144> mUnk68f8e9;
    ::ll::UntypedStorage<8, 144> mUnk2eb80b;
    ::ll::UntypedStorage<8, 144> mUnkaf41d5;
    ::ll::UntypedStorage<8, 144> mUnke77845;
    ::ll::UntypedStorage<8, 144> mUnk14a79a;
    ::ll::UntypedStorage<8, 144> mUnkb43fed;
    ::ll::UntypedStorage<8, 144> mUnk51b30f;
    ::ll::UntypedStorage<8, 144> mUnkd1b6a8;
    ::ll::UntypedStorage<8, 144> mUnk8134d4;
    ::ll::UntypedStorage<8, 144> mUnk3ce14c;
    ::ll::UntypedStorage<8, 144> mUnkdab225;
    ::ll::UntypedStorage<8, 144> mUnk4ad5e7;
    ::ll::UntypedStorage<8, 144> mUnkeded51;
    ::ll::UntypedStorage<8, 144> mUnka60673;
    ::ll::UntypedStorage<8, 144> mUnkab87ec;
    ::ll::UntypedStorage<8, 144> mUnkeb3a2a;
    ::ll::UntypedStorage<8, 144> mUnkdfd0b5;
    ::ll::UntypedStorage<8, 144> mUnka1e891;
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
