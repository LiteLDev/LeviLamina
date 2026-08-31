#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/IItemHandleFactory.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
class PropertyBag;
class TickingTextures;
namespace GeometryAtlas { class IItemHandle; }
// clang-format on

namespace GeometryAtlas {

class ItemHandleFactoryImpl : public ::OreUI::IItemHandleFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::ItemRegistryRef() const>>        mGetItemRegistry;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::TickingTextures const*() const>> mGetTickingTextures;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::IItemHandle>
    createItem(::std::string_view name, ::std::unique_ptr<::PropertyBag> bag) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::GeometryAtlas::IItemHandle>
    $createItem(::std::string_view name, ::std::unique_ptr<::PropertyBag> bag) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GeometryAtlas
