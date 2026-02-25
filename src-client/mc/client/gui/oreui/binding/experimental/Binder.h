#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class IPropertyObject; }
namespace OreUI::Experimental::Detail { class IdType; }
namespace cohtml { class View; }
// clang-format on

namespace OreUI::Experimental::Detail {

class Binder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::View*> mView;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void destroyObject(::OreUI::Experimental::Detail::IPropertyObject* object) const;

    MCAPI void triggerCreated(
        ::OreUI::Experimental::Detail::IdType                 id,
        ::OreUI::Experimental::Detail::IPropertyObject const& object
    ) const;

    MCAPI void triggerUpdated(
        ::OreUI::Experimental::Detail::IdType                 id,
        ::OreUI::Experimental::Detail::IPropertyObject const& object
    ) const;
    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
