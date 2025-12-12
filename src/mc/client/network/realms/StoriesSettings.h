#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/OptInState.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Realms {

struct StoriesSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc43d38;
    ::ll::UntypedStorage<4, 4> mUnkc339a2;
    ::ll::UntypedStorage<1, 1> mUnk506e9c;
    ::ll::UntypedStorage<1, 1> mUnk864f9b;
    ::ll::UntypedStorage<1, 1> mUnk387df9;
    ::ll::UntypedStorage<1, 1> mUnkda5961;
    ::ll::UntypedStorage<1, 1> mUnkf5053c;
    // NOLINTEND

public:
    // prevent constructor by default
    StoriesSettings& operator=(StoriesSettings const&);
    StoriesSettings(StoriesSettings const&);
    StoriesSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool operator==(::Realms::StoriesSettings const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Realms::StoriesSettings fromJson(::Json::Value const& json);

    MCNAPI_C static ::Realms::OptInState optInStringToEnum(::std::string const& optInStateAsString);

    MCNAPI_C static ::Json::Value toJson(::Realms::StoriesSettings const& storiesSettings);
    // NOLINTEND
};

} // namespace Realms
