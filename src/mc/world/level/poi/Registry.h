#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/poi/TypeId.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace Poi { class TagProvider; }
// clang-format on

namespace Poi {

struct Registry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk873d81;
    ::ll::UntypedStorage<8, 72> mUnkd5eaad;
    ::ll::UntypedStorage<8, 24> mUnk6f9e5d;
    // NOLINTEND

public:
    // prevent constructor by default
    Registry& operator=(Registry const&);
    Registry(Registry const&);
    Registry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Poi::TypeId find(::std::string_view name) const;

#ifdef LL_PLAT_C
    MCNAPI ::Poi::TypeId push(
        ::std::string_view                   id,
        ::std::unordered_set<::Block const*> blocks,
        uchar                                maxTickets,
        uchar                                usableRange,
        ::Poi::TagProvider const&            tagProvider
    );

    MCNAPI void reserveId(::std::string id, ::Poi::TypeId token, ::Poi::TagProvider const& tagProvider);
#endif
    // NOLINTEND
};

} // namespace Poi
