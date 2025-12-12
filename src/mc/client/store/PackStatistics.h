#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackStatistics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk763533;
    ::ll::UntypedStorage<4, 4> mUnk1846d5;
    ::ll::UntypedStorage<4, 4> mUnkeed15b;
    ::ll::UntypedStorage<4, 4> mUnkd3e239;
    ::ll::UntypedStorage<4, 4> mUnka61dc2;
    // NOLINTEND

public:
    // prevent constructor by default
    PackStatistics& operator=(PackStatistics const&);
    PackStatistics(PackStatistics const&);
    PackStatistics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void fromJson(::Json::Value const& documentJson);

    MCNAPI_C ::std::string getBehaviorPackCountFormattedString() const;

    MCNAPI_C ::std::string getPersonaPieceCountFormattedString() const;

    MCNAPI_C ::std::string getResourcePackCountFormattedString() const;

    MCNAPI_C ::std::string getSkinPackCountFormattedString() const;

    MCNAPI_C ::std::string getWorldTemplateCountFormattedString() const;
    // NOLINTEND
};
