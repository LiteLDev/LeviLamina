#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PropertyBag;
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

namespace OreUI {

class IPaperDollHandleFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollHandleFactory() = default;

    virtual ::std::shared_ptr<::GeometryAtlas::PaperDollHandle>
    createDoll(::std::unique_ptr<::PropertyBag> bag) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
