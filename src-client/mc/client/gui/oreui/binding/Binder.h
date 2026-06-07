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
    // prevent constructor by default
    Binder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Binder(::cohtml::View* view);

    MCAPI void destroyObject(::OreUI::Detail::IPropertyObject* object) const;

    MCAPI void triggerCreated(::OreUI::Detail::IdType id, ::OreUI::Detail::IPropertyObject const& object) const;

    MCAPI void triggerUpdated(::OreUI::Detail::IdType id, ::OreUI::Detail::IPropertyObject const& object) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::cohtml::View* view);
    // NOLINTEND
};

} // namespace OreUI::Detail
