#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class StorageContentItem; }
// clang-format on

namespace OreUI {

struct StorageContentCommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> mNumberOfSelectedItems;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::StorageContentItem, ::std::allocator<::OreUI::StorageContentItem>>>
        mContentItems;
    // NOLINTEND
};

} // namespace OreUI
