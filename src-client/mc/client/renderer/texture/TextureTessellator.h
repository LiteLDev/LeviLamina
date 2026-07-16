#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Tessellator;
// clang-format on

class TextureTessellator {
public:
    // TextureTessellator inner types declare
    // clang-format off
    struct TessellationParameters;
    // clang-format on

    // TextureTessellator inner types define
    enum class VerticalSide : int {};

    struct TessellationParameters {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkea97b2;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureTessellator& operator=(TextureTessellator const&);
    TextureTessellator(TextureTessellator const&);
    TextureTessellator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void tessellate(
        ::Tessellator&                                      tessellator,
        uchar const* const                                  colorData,
        uchar const* const                                  mersData,
        uchar const* const                                  normalsData,
        ushort                                              width,
        ushort                                              height,
        ::TextureTessellator::TessellationParameters const& parameters
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    validateImageTesselationForCreatorFeedback(ushort width, ushort height, ::std::string const& objectName);
    // NOLINTEND
};
