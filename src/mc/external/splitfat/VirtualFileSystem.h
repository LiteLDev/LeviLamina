#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SFAT { class FileManipulator; }
// clang-format on

namespace SFAT {

class VirtualFileSystem {
public:
    // VirtualFileSystem inner types declare
    // clang-format off
    class StackAutoElement;
    // clang-format on

    // VirtualFileSystem inner types define
    class StackAutoElement {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkbb2add;
        // NOLINTEND

    public:
        // prevent constructor by default
        StackAutoElement& operator=(StackAutoElement const&);
        StackAutoElement(StackAutoElement const&);
        StackAutoElement();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 968> mUnk80c1cc;
    ::ll::UntypedStorage<1, 1>   mUnk8af5c9;
    ::ll::UntypedStorage<8, 8>   mUnk6eeecd;
    ::ll::UntypedStorage<4, 4>   mUnk930750;
    ::ll::UntypedStorage<8, 8>   mUnke0ec7b;
    ::ll::UntypedStorage<8, 16>  mUnkafcaec;
    ::ll::UntypedStorage<8, 88>  mUnk8972ce;
    // NOLINTEND

public:
    // prevent constructor by default
    VirtualFileSystem& operator=(VirtualFileSystem const&);
    VirtualFileSystem(VirtualFileSystem const&);
    VirtualFileSystem();
};

} // namespace SFAT
