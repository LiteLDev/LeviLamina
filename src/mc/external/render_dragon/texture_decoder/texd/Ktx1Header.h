#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace texd {

struct Ktx1Header {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 12, uchar[12]> identifier;
    ::ll::TypedStorage<4, 4, uint>       endianness;
    ::ll::TypedStorage<4, 4, uint>       glType;
    ::ll::TypedStorage<4, 4, uint>       glTypeSize;
    ::ll::TypedStorage<4, 4, uint>       glFormat;
    ::ll::TypedStorage<4, 4, uint>       glInternalFormat;
    ::ll::TypedStorage<4, 4, uint>       glBaseInternalFormat;
    ::ll::TypedStorage<4, 4, uint>       pixelWidth;
    ::ll::TypedStorage<4, 4, uint>       pixelHeight;
    ::ll::TypedStorage<4, 4, uint>       pixelDepth;
    ::ll::TypedStorage<4, 4, uint>       numberOfArrayElements;
    ::ll::TypedStorage<4, 4, uint>       numberOfFaces;
    ::ll::TypedStorage<4, 4, uint>       numberOfMipmapLevels;
    ::ll::TypedStorage<4, 4, uint>       bytesOfKeyValueData;
    // NOLINTEND
};

} // namespace texd
