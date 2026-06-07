#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/IItemHandleFactory.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

namespace GeometryAtlas {

class ItemHandleFactoryImpl : public ::OreUI::IItemHandleFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IItemHandle> createItem(::std::string_view) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::GeometryAtlas::IItemHandle> $createItem(::std::string_view) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GeometryAtlas
