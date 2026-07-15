#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PropertyBag;
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

namespace OreUI {

class IItemHandleFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemHandleFactory() = default;

    virtual ::std::shared_ptr<::GeometryAtlas::IItemHandle>
    createItem(::std::string_view name, ::std::unique_ptr<::PropertyBag> bag) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
