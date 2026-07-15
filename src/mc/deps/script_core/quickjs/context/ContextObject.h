#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class ContextObject {
public:
    // ContextObject inner types declare
    // clang-format off
    struct UnhandledPromiseRejectionEntry;
    // clang-format on

    // ContextObject inner types define
    enum class ImportAllowedResult : int {
        Success          = 0,
        FailRestricted   = 1,
        FailStaticImport = 2,
    };

    struct UnhandledPromiseRejectionEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkc8e476;
        ::ll::UntypedStorage<1, 1>  mUnkcaed09;
        // NOLINTEND

    public:
        // prevent constructor by default
        UnhandledPromiseRejectionEntry& operator=(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry(UnhandledPromiseRejectionEntry const&);
        UnhandledPromiseRejectionEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk21a88e;
    ::ll::UntypedStorage<8, 8>   mUnka4780b;
    ::ll::UntypedStorage<8, 816> mUnka99eed;
    ::ll::UntypedStorage<8, 144> mUnk3d7cec;
    ::ll::UntypedStorage<8, 24>  mUnk5457d8;
    ::ll::UntypedStorage<8, 8>   mUnkd8b07a;
    ::ll::UntypedStorage<8, 8>   mUnk4cff01;
    ::ll::UntypedStorage<8, 8>   mUnk8cc61a;
    ::ll::UntypedStorage<8, 8>   mUnk270325;
    ::ll::UntypedStorage<8, 8>   mUnk71fb76;
    ::ll::UntypedStorage<8, 16>  mUnk182a63;
    ::ll::UntypedStorage<8, 64>  mUnkd84617;
    ::ll::UntypedStorage<8, 8>   mUnkfbf45f;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextObject& operator=(ContextObject const&);
    ContextObject(ContextObject const&);
    ContextObject();
};

} // namespace Scripting::QuickJS
