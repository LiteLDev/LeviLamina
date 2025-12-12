#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Social::eventData {

class PersonaOfferClickedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2b378a;
    ::ll::UntypedStorage<1, 1>  mUnke2936c;
    ::ll::UntypedStorage<8, 8>  mUnk98df1e;
    ::ll::UntypedStorage<1, 1>  mUnkd30782;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaOfferClickedData& operator=(PersonaOfferClickedData const&);
    PersonaOfferClickedData(PersonaOfferClickedData const&);
    PersonaOfferClickedData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void addDataToEvent(::Social::Events::Event& eventToAddTo) const;
    // NOLINTEND
};

} // namespace Social::eventData
