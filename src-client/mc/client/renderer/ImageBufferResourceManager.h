#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ResourceManager.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace cg { class ImageBuffer; }
// clang-format on

struct ImageBufferResourceManager
: public ::cg::ResourceManager<::std::shared_ptr<::cg::ImageBuffer>, ::ResourceLocation, ::std::map> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ImageBufferResourceManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
