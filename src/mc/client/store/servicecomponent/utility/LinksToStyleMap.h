#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct LinksToStyle;
namespace Json { class Value; }
// clang-format on

class LinksToStyleMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1da638;
    // NOLINTEND

public:
    // prevent constructor by default
    LinksToStyleMap& operator=(LinksToStyleMap const&);
    LinksToStyleMap(LinksToStyleMap const&);
    LinksToStyleMap();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::LinksToStyle const& getLinksToStyleFromMap(::std::string key);

    MCNAPI_C void parse(::Json::Value const& customJson);
    // NOLINTEND
};
