#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/sidebar/EventAction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct LinksToStyle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 296> mUnk2b391b;
    ::ll::UntypedStorage<8, 32>  mUnk364f49;
    ::ll::UntypedStorage<8, 32>  mUnk3c13c4;
    ::ll::UntypedStorage<1, 1>   mUnk4df684;
    ::ll::UntypedStorage<4, 4>   mUnk9a6b61;
    // NOLINTEND

public:
    // prevent constructor by default
    LinksToStyle(LinksToStyle const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C LinksToStyle();

    MCNAPI_C LinksToStyle(::LinksToStyle&&);

    MCNAPI_C LinksToStyle(::std::string const& linkId, ::std::string const& screenDisplayType);

    MCNAPI_C
    LinksToStyle(::std::string const& linkId, ::sidebar::EventAction linkType, ::std::string const& screenDisplayType);

    MCNAPI_C ::LinksToStyle& operator=(::LinksToStyle&&);

    MCNAPI_C ::LinksToStyle& operator=(::LinksToStyle const&);

    MCNAPI_C void parse(::Json::Value const& customObject);

    MCNAPI_C void parseLinksToInfo(::Json::Value const& linksToInfoObject);

    MCNAPI_C ~LinksToStyle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::LinksToStyle&&);

    MCNAPI_C void* $ctor(::std::string const& linkId, ::std::string const& screenDisplayType);

    MCNAPI_C void*
    $ctor(::std::string const& linkId, ::sidebar::EventAction linkType, ::std::string const& screenDisplayType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
