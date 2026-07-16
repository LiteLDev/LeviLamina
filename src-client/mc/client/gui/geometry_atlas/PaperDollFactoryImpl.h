#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/IPaperDollHandleFactory.h"

// auto generated forward declare list
// clang-format off
class PropertyBag;
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

namespace GeometryAtlas {

class PaperDollFactoryImpl : public ::OreUI::IPaperDollHandleFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::PaperDollHandle> createDoll(::std::unique_ptr<::PropertyBag> bag) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::GeometryAtlas::PaperDollHandle> $createDoll(::std::unique_ptr<::PropertyBag> bag) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace GeometryAtlas
