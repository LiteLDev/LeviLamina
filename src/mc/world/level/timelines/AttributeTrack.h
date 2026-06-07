#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace EAS { class BoolAttribute; }
namespace EAS { class ColorAttribute; }
namespace EAS { class FloatAttribute; }
// clang-format on

class AttributeTrack {
public:
    // AttributeTrack inner types declare
    // clang-format off
    template<typename T0> class AttributeTrackImpl;
    // clang-format on

    // AttributeTrack inner types define
    template <typename T0>
    class AttributeTrackImpl {};

    using AttributeTrackVariant = ::std::variant<
        ::AttributeTrack::AttributeTrackImpl<::EAS::BoolAttribute>,
        ::AttributeTrack::AttributeTrackImpl<::EAS::ColorAttribute>,
        ::AttributeTrack::AttributeTrackImpl<::EAS::FloatAttribute>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::AttributeTrack::AttributeTrackImpl<::EAS::BoolAttribute>,
            ::AttributeTrack::AttributeTrackImpl<::EAS::ColorAttribute>,
            ::AttributeTrack::AttributeTrackImpl<::EAS::FloatAttribute>>>
        mImpl;
    // NOLINTEND
};
