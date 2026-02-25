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
    MCAPI static ::std::add_lvalue_reference_t<char const[]> COMMENTS_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> HARDCORE_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> NEW_STORY_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> REPORT_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SETTINGS_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> SHARELINK_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> STORIES_ROUTE();

    MCAPI static ::Realms::RealmId& mWorldId();
    // NOLINTEND
};

} // namespace OreUI
