#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social::Events::PlayerTelemetryItemUtilities {

class ItemData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5afad7;
    ::ll::UntypedStorage<8, 24> mUnk5ba16a;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemData& operator=(ItemData const&);
    ItemData(ItemData const&);
    ItemData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void addToJsonData(::Json::Value& json) const;

    MCNAPI ::std::string getKey(::std::string_view extraKey) const;

    MCNAPI ~ItemData();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Social::Events::PlayerTelemetryItemUtilities
