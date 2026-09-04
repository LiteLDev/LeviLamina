#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::Events {

class ScreenFlow {
public:
    // ScreenFlow inner types declare
    // clang-format off
    struct nowFunc;
    // clang-format on

    // ScreenFlow inner types define
    struct nowFunc {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk639462;
    ::ll::UntypedStorage<8, 16> mUnk890a72;
    ::ll::UntypedStorage<8, 8>  mUnk7be49c;
    ::ll::UntypedStorage<8, 32> mUnk28e73f;
    ::ll::UntypedStorage<8, 32> mUnk246e53;
    ::ll::UntypedStorage<8, 64> mUnk5d55ec;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenFlow& operator=(ScreenFlow const&);
    ScreenFlow(ScreenFlow const&);
    ScreenFlow();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void AddScreen(
        ::std::string const&                                      screenName,
        double                                                    timestamp,
        double                                                    seconds,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties,
        bool                                                      isDeepLink
    );

    MCNAPI void PopulateEvent(::Social::Events::Event& event, bool clear);

    MCNAPI bool ShouldSendEvent() const;
#endif
    // NOLINTEND
};

} // namespace Social::Events
