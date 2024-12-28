#pragma once

#include "mc/_HeaderOutputPredefine.h"

class glTFExporter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk11be40;
    ::ll::UntypedStorage<8, 32>  mUnk7da04e;
    ::ll::UntypedStorage<8, 32>  mUnk1ecdf7;
    ::ll::UntypedStorage<8, 32>  mUnk6d52d6;
    ::ll::UntypedStorage<8, 32>  mUnk777b5f;
    ::ll::UntypedStorage<1, 1>   mUnkfc1c68;
    ::ll::UntypedStorage<8, 24>  mUnkb182ab;
    ::ll::UntypedStorage<8, 24>  mUnk818856;
    ::ll::UntypedStorage<8, 160> mUnkf04c76;
    ::ll::UntypedStorage<8, 24>  mUnk77f9c5;
    ::ll::UntypedStorage<8, 24>  mUnk671a36;
    ::ll::UntypedStorage<8, 24>  mUnk6f71eb;
    ::ll::UntypedStorage<8, 24>  mUnk7194fe;
    ::ll::UntypedStorage<8, 24>  mUnk562094;
    ::ll::UntypedStorage<8, 24>  mUnkb88a89;
    ::ll::UntypedStorage<8, 24>  mUnk68e147;
    ::ll::UntypedStorage<8, 24>  mUnk92f774;
    ::ll::UntypedStorage<8, 24>  mUnkfcdcd7;
    ::ll::UntypedStorage<8, 24>  mUnk6233e3;
    ::ll::UntypedStorage<8, 24>  mUnk4be391;
    ::ll::UntypedStorage<4, 4>   mUnk398e4e;
    ::ll::UntypedStorage<8, 24>  mUnkd71ebe;
    ::ll::UntypedStorage<8, 80>  mUnk2d25e2;
    // NOLINTEND

public:
    // prevent constructor by default
    glTFExporter& operator=(glTFExporter const&);
    glTFExporter(glTFExporter const&);
    glTFExporter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~glTFExporter();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& BINARY_EXTENSION();

    MCAPI static ::std::string_view const& GLB_BUFFER_URI();

    MCAPI static ::std::string_view const& GLB_EXTENSION();

    MCAPI static ::std::string_view const& GLTF_EXTENSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
