#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/ECapabilities.h"
#include "mc/client/gui/oreui/binding/experimental/IdType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class IQuery; }
// clang-format on

namespace OreUI::Experimental::Debug {

struct QueryInformation {
public:
    // QueryInformation inner types define
    enum class QueryType : uchar {
        Static  = 0,
        Updated = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::OreUI::Experimental::Debug::QueryInformation::QueryType const> mType;
    ::ll::TypedStorage<8, 8, ::OreUI::Experimental::Detail::IdType const>                     mId;
    ::ll::TypedStorage<1, 1, ::OreUI::Experimental::ECapabilities const>                      mCapabilities;
    ::ll::TypedStorage<8, 8, ::OreUI::Experimental::Detail::IQuery*>                          mQuery;
    // NOLINTEND
};

} // namespace OreUI::Experimental::Debug
