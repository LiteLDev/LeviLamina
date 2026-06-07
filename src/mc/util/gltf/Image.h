#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Image {
public:
    // Image inner types define
    enum class ImageMimeType : int {
        Png = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf74c3b;
    ::ll::UntypedStorage<4, 8>  mUnk6ff5fa;
    ::ll::UntypedStorage<4, 4>  mUnk8e80bf;
    ::ll::UntypedStorage<8, 32> mUnke1c26f;
    ::ll::UntypedStorage<4, 4>  mUnk6b4963;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Image& operator=(Image const&);
    Image(Image const&);
    Image();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Image& operator=(Image const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Image();

    MCNAPI Image(::glTF::Image const&);

    MCNAPI ::Json::Value serialize() const;

    MCNAPI ~Image();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::glTF::Image const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace glTF
