#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
namespace OreUI::Detail { class IdType; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI::Detail {

class Binder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View*> mView;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void destroyObject(::OreUI::Detail::IPropertyObject* object) const;

    MCAPI void triggerCreated(::OreUI::Detail::IdType id, ::OreUI::Detail::IPropertyObject const& object) const;

    MCAPI void triggerUpdated(::OreUI::Detail::IdType id, ::OreUI::Detail::IPropertyObject const& object) const;
    // NOLINTEND
};

} // namespace OreUI::Detail
