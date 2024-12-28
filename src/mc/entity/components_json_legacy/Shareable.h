#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Shareable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkec50fb;
    ::ll::UntypedStorage<4, 4> mUnkacc8b4;
    ::ll::UntypedStorage<4, 4> mUnk335417;
    ::ll::UntypedStorage<4, 4> mUnk78f1d3;
    ::ll::UntypedStorage<4, 4> mUnk16b2df;
    ::ll::UntypedStorage<4, 4> mUnk38d074;
    ::ll::UntypedStorage<4, 4> mUnk2b7d77;
    ::ll::UntypedStorage<4, 4> mUnkb84081;
    ::ll::UntypedStorage<4, 4> mUnk476227;
    ::ll::UntypedStorage<1, 1> mUnk7873a7;
    ::ll::UntypedStorage<1, 1> mUnkaf9cb5;
    ::ll::UntypedStorage<1, 1> mUnk81e035;
    ::ll::UntypedStorage<1, 1> mUnkffe206;
    ::ll::UntypedStorage<1, 1> mUnkee1d54;
    ::ll::UntypedStorage<1, 1> mUnk19c48b;
    // NOLINTEND

public:
    // prevent constructor by default
    Shareable& operator=(Shareable const&);
    Shareable(Shareable const&);
    Shareable();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setCraftInto(::std::string const& name);

    MCAPI void setItem(::std::string const& name);
    // NOLINTEND
};
