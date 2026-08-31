#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
namespace Realms { struct World; }
// clang-format on

namespace OreUI {

class RealmsStoriesRouteHandler {
public:
    // RealmsStoriesRouteHandler inner types define
    enum class Tab : uint64 {
        StoryFeed = 0,
        Members   = 1,
        Timeline  = 2,
        Count     = 3,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string composeHardcoreRoute(::Realms::World const& world);

    MCAPI static ::std::string composeRoute(::OreUI::RealmsStoriesRouteHandler::Tab tab, ::Realms::World const& world);

    MCAPI static ::std::string composeShareLinkRoute(::Realms::World const& world);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[23]> COMMENTS_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[41]> HARDCORE_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[18]> NEW_STORY_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[33]> REPORT_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[25]> SETTINGS_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SHARELINK_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[16]> STORIES_ROUTE();

    MCAPI static ::Realms::RealmId& mWorldId();
    // NOLINTEND
};

} // namespace OreUI
