#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/LayoutAxisOffsetContainerType.h"
#include "mc/client/gui/LayoutAxisType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace ui { struct AxisOffset; }
// clang-format on

namespace ui {

struct LayoutOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ui::AxisOffset>>    x;
    ::ll::TypedStorage<8, 24, ::std::vector<::ui::AxisOffset>>    y;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> xType;
    ::ll::TypedStorage<4, 4, ::ui::LayoutAxisOffsetContainerType> yType;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutOffset& operator=(LayoutOffset const&);
    LayoutOffset();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LayoutOffset(::ui::LayoutOffset const&);

    MCNAPI explicit LayoutOffset(::glm::vec2 const size);

    MCNAPI explicit LayoutOffset(::Json::Value const& val);

    MCNAPI LayoutOffset(::ui::LayoutAxisType xType, float xValue, ::ui::LayoutAxisType yType, float yValue);

    MCNAPI bool operator!=(::ui::LayoutOffset const& other) const;

    MCNAPI ~LayoutOffset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ui::LayoutOffset const&);

    MCNAPI void* $ctor(::glm::vec2 const size);

    MCNAPI void* $ctor(::Json::Value const& val);

    MCNAPI void* $ctor(::ui::LayoutAxisType xType, float xValue, ::ui::LayoutAxisType yType, float yValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ui
