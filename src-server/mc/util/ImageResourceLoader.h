#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class ImageResourceLoader {
public:
    // ImageResourceLoader inner types define
    enum class LoadError : int {
        TextureConversionError = 0,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5447ee;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageResourceLoader& operator=(ImageResourceLoader const&);
    ImageResourceLoader(ImageResourceLoader const&);
    ImageResourceLoader();

};

}
