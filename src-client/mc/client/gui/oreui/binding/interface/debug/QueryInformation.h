#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ECapabilities.h"
#include "mc/client/gui/oreui/binding/IdType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IQuery; }
// clang-format on

namespace OreUI::Debug {

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
    ::ll::TypedStorage<1, 1, ::OreUI::Debug::QueryInformation::QueryType const> mType;
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::IdType const>                     mId;
    ::ll::TypedStorage<1, 1, ::OreUI::ECapabilities const>                      mCapabilities;
    ::ll::TypedStorage<8, 8, ::OreUI::Detail::IQuery*>                          mQuery;
    // NOLINTEND
};

} // namespace OreUI::Debug
