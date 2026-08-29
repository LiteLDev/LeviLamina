#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct GeometryResourceSpan;
struct TextureResourceSpan;
// clang-format on

struct BakedDataDrivenRenderDataInfrequentAccess {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::TextureResourceSpan>>  mTextureResourceSpans;
    ::ll::TypedStorage<8, 24, ::std::vector<::GeometryResourceSpan>> mGeometryResourceSpans;
    // NOLINTEND
};
