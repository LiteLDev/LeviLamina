#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/queries/debug/data/EProfileRole.h"

namespace OreUI::Experimental::Debug {

class Profile {
public:
    // Profile inner types define
    using IdType = uint64;

    using AgeType = ushort;

    using NameType = ::std::string;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                                     mId;
    ::ll::TypedStorage<2, 2, ushort>                                     mAge;
    ::ll::TypedStorage<8, 32, ::std::string>                             mName;
    ::ll::TypedStorage<1, 1, ::OreUI::Experimental::Debug::EProfileRole> mRole;
    // NOLINTEND
};

} // namespace OreUI::Experimental::Debug
