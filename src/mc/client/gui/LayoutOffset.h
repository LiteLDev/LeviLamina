#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/LayoutAxisType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace ui {

struct LayoutOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3866fb;
    ::ll::UntypedStorage<8, 24> mUnk8a2cd7;
    ::ll::UntypedStorage<4, 4>  mUnk73e16c;
    ::ll::UntypedStorage<4, 4>  mUnkb14ffa;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutOffset& operator=(LayoutOffset const&);
    LayoutOffset();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C LayoutOffset(::ui::LayoutOffset const&);

    MCNAPI_C explicit LayoutOffset(::glm::vec2 size);

    MCNAPI_C explicit LayoutOffset(::Json::Value const& val);

    MCNAPI_C LayoutOffset(::ui::LayoutAxisType xType, float xValue, ::ui::LayoutAxisType yType, float yValue);

    MCNAPI_C bool operator!=(::ui::LayoutOffset const& other) const;

    MCNAPI_C ::ui::LayoutOffset& operator=(::ui::LayoutOffset&&);

    MCNAPI_C ~LayoutOffset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ui::LayoutOffset const&);

    MCNAPI_C void* $ctor(::glm::vec2 size);

    MCNAPI_C void* $ctor(::Json::Value const& val);

    MCNAPI_C void* $ctor(::ui::LayoutAxisType xType, float xValue, ::ui::LayoutAxisType yType, float yValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace ui
