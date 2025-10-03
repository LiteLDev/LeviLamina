#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

class ASTCFile {
public:
    // ASTCFile inner types declare
    // clang-format off
    struct Header;
    // clang-format on

    // ASTCFile inner types define
    struct Header {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb81dd1;
        ::ll::UntypedStorage<8, 8> mUnkb93ade;
        ::ll::UntypedStorage<8, 8> mUnkff9f21;
        ::ll::UntypedStorage<8, 8> mUnk6261f6;
        ::ll::UntypedStorage<8, 8> mUnk89858c;
        ::ll::UntypedStorage<8, 8> mUnk4270de;
        // NOLINTEND

    public:
        // prevent constructor by default
        Header& operator=(Header const&);
        Header(Header const&);
        Header();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk5836df;
    ::ll::UntypedStorage<8, 32> mUnk7b6346;
    // NOLINTEND

public:
    // prevent constructor by default
    ASTCFile& operator=(ASTCFile const&);
    ASTCFile(ASTCFile const&);
    ASTCFile();
};

} // namespace astc_codec
