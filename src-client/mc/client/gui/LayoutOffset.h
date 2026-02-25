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
    LayoutOffset(LayoutOffset const&);
    LayoutOffset();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LayoutOffset(::glm::vec2 size);

    MCAPI explicit LayoutOffset(::Json::Value const& val);

    MCAPI LayoutOffset(::ui::LayoutAxisType xType, float xValue, ::ui::LayoutAxisType yType, float yValue);

    MCAPI bool operator!=(::ui::LayoutOffset const& other) const;

    MCAPI ::ui::LayoutOffset& operator=(::ui::LayoutOffset&&);

    MCAPI ::ui::LayoutOffset& operator=(::ui::LayoutOffset const&);

    MCAPI ~LayoutOffset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::glm::vec2 size);

    MCAPI void* $ctor(::Json::Value const& val);

    MCAPI void* $ctor(::ui::LayoutAxisType xType, float xValue, ::ui::LayoutAxisType yType, float yValue);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ui
